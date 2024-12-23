#include "SMeocapLiveLinkSourceFactory.h"

#include "Misc/MessageDialog.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/input/SSegmentedControl.h"
#include "Widgets/input/SButton.h"


#define LOCTEXT_NAMESPACE "MeocapLiveLinkModule"

std::unordered_map<uint16, FName> SMeocapLiveLinkSourceFactory::mPortToSubjectNameMap;

SMeocapLiveLinkSourceFactory::~SMeocapLiveLinkSourceFactory()
{

}

void SMeocapLiveLinkSourceFactory::Construct(const FArguments& Args)
{
    CreateClicked = Args._OnCreateClicked;

    ChildSlot
        [
            SNew(SVerticalBox)
                + SVerticalBox::Slot()
                .Padding(5)
                .FillHeight(1.1)
                [
                    SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Left)
                        .FillWidth(0.6f)
                        .VAlign(VAlign_Center)
                        [
                            SNew(STextBlock)
                                .Text(LOCTEXT("InputPort", "Port Number"))
                        ]
                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Right)
                        .VAlign(VAlign_Center)
                        .FillWidth(0.5f)
                        [
                            SAssignNew(mInputPortField, SEditableTextBox)
                                .Text(FText::FromString(GetSuggestedPort()))
                        ]
                ]


                + SVerticalBox::Slot()
                .FillHeight(1.4)
                [
                    SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Left)
                        .Padding(5)
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        [
                            SNew(STextBlock)
                                .Text(LOCTEXT("SubjectName", "Subject Name"))
                        ]

                        + SHorizontalBox::Slot()
                        .Padding(5, 0)
                        .HAlign(HAlign_Right)
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        [
                            SAssignNew(mSubjectNameField, SEditableTextBox)
                                .Text(FText::FromString(GetSuggestedSkeletonName()))
                        ]

                ]

                + SVerticalBox::Slot()
                .FillHeight(1.1)
                .Padding(5)
                .HAlign(HAlign_Center)
                [
                    SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        [
                            SNew(SButton)
                                .OnClicked(this, &SMeocapLiveLinkSourceFactory::OnCreateClicked)
                                [
                                    SNew(STextBlock)
                                        .Text(LOCTEXT("CreateSourceButtonLabel", "Create Meocap Source"))
                                ]
                        ]
                ]
        ];
}

FReply SMeocapLiveLinkSourceFactory::OnCreateClicked()
{
    TSharedPtr<SEditableTextBox> portEditableTextPin = mInputPortField.Pin();
    TSharedPtr<SEditableTextBox> subjectNameTextPin = mSubjectNameField.Pin();

    if (portEditableTextPin && subjectNameTextPin)
    {
        FText invalidPortTitle = LOCTEXT("errorTitleInvalidPort", "Error: Invalid Port");

        FString portString = portEditableTextPin->GetText().ToString();
        if (!portString.IsNumeric())
        {
#ifdef USE_DEPRECATED_DEBUGF
            FMessageDialog::Debugf(LOCTEXT("errorInvalidPort", "Invalid port.\nPlease enter a port number between 0 and 65535"), &invalidPortTitle);
#else
            FMessageDialog::Debugf(LOCTEXT("errorInvalidPort", "Invalid port.\nPlease enter a port number between 0 and 65535"), invalidPortTitle);
#endif
            return FReply::Unhandled();
        }

        uint64 portOverflowCheck = FCString::Atoi(*portString);
        if (portOverflowCheck > 65535)
        {
#ifdef USE_DEPRECATED_DEBUGF
            FMessageDialog::Debugf(LOCTEXT("errorInvalidPort", "Invalid port.\nPlease enter a port number between 0 and 65535"), &invalidPortTitle);
#else
            FMessageDialog::Debugf(LOCTEXT("errorInvalidPort", "Invalid port.\nPlease enter a port number between 0 and 65535"), invalidPortTitle);
#endif
            return FReply::Unhandled();
        }

        uint16 port = uint16(portOverflowCheck);
        if (mPortToSubjectNameMap.find(port)!=mPortToSubjectNameMap.end())
        {
            FText portInUseTitle = LOCTEXT("errorTitleUsedPort", "Error: Port in Use");
#ifdef USE_DEPRECATED_DEBUGF
            FMessageDialog::Debugf(LOCTEXT("errorUsedPort", "This port is already being used by another Meocap LiveLink Source"), &portInUseTitle);
#else
            FMessageDialog::Debugf(LOCTEXT("errorUsedPort", "This port is already being used by another Meocap LiveLink Source"), portInUseTitle);
#endif
            return FReply::Unhandled();
        }


        FString subjectNameStr = subjectNameTextPin->GetText().ToString();
        if (subjectNameStr.IsEmpty())
        {
            FText emptySubjectTitle = LOCTEXT("errorTitleNoSubjectName", "Error: Empty Subject Name");
#ifdef USE_DEPRECATED_DEBUGF
            FMessageDialog::Debugf(LOCTEXT("errorNoSubjectName", "Enter a subject name to create a Meocap LiveLink Source"), &emptySubjectTitle);
#else
            FMessageDialog::Debugf(LOCTEXT("errorNoSubjectName", "Enter a subject name to create a Meocap LiveLink Source"), emptySubjectTitle);
#endif

            return FReply::Unhandled();
        }

        FName subjectName = FName(*subjectNameStr);

        CreateClicked.ExecuteIfBound(port, subjectName);
        return FReply::Handled();
    }

    return FReply::Unhandled();
}

void SMeocapLiveLinkSourceFactory::RemoveSubject(uint16 inputPort)
{
    mPortToSubjectNameMap.erase(inputPort);
}

void SMeocapLiveLinkSourceFactory::AddSubject(uint16 inputPort, FName subjectName)
{
    mPortToSubjectNameMap[inputPort] = subjectName;
}

FString SMeocapLiveLinkSourceFactory::GetSuggestedSkeletonName()
{
    FString suggestedName = DEFAULT_SKELETON_NAME;

    int count = mPortToSubjectNameMap.size();
    if (count)
    {
        int humanReadableCount = count + 1;
        suggestedName += FString::FromInt(humanReadableCount);
    }

    return suggestedName;
}

FString SMeocapLiveLinkSourceFactory::GetSuggestedPort()
{
    int port = DEFAULT_MEOCAP_PORT;

    int count = mPortToSubjectNameMap.size();
    if (count)
    {
        port += count;
    }

    return FString::FromInt(port);
}

#undef LOCTEXT_NAMESPACE
