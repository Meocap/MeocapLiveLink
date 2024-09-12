#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Runtime/Launch/Resources/Version.h"
#include <unordered_map>

const int DEFAULT_MEOCAP_PORT = 14999;
const FString DEFAULT_SKELETON_NAME = "MeoLink";

#if (ENGINE_MAJOR_VERSION >= 5) && (ENGINE_MINOR_VERSION < 3)
#define USE_DEPRECATED_DEBUGF
#endif

class SMeocapLiveLinkSourceFactory : public SCompoundWidget
{
public:
    DECLARE_DELEGATE_ThreeParams(FOnCreateClicked, uint16, uint16, FName);

    SLATE_BEGIN_ARGS(SMeocapLiveLinkSourceFactory) {}
        SLATE_EVENT(FOnCreateClicked, OnCreateClicked)
    SLATE_END_ARGS()

    ~SMeocapLiveLinkSourceFactory();

    void Construct(const FArguments& Args);

    static void RemoveSubject(uint16 inputPort);

    static void AddSubject(uint16 inputPort, FName subjectName);

private:

    // map of subjects(sources) created
    static std::unordered_map<uint16, FName> mPortToSubjectNameMap;

    TWeakPtr<SEditableTextBox> mInputPortField;
    TWeakPtr<SEditableTextBox> mCommandPortField;
    TWeakPtr<SEditableTextBox> mSubjectNameField;

    FReply OnCreateClicked();

    FOnCreateClicked CreateClicked;

    FString GetSuggestedSkeletonName();
    FString GetSuggestedPort();
    FString GetSuggestedCommandPort();

};
