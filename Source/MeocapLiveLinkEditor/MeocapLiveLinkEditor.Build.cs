// Copyright 2019 Rokoko Electronics. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
/// @cond doc_hidden
public class MeocapLiveLinkEditor : ModuleRules
{
    public MeocapLiveLinkEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        MinFilesUsingPrecompiledHeaderOverride = 1;
        //bFasterWithoutUnity = true;
        bUseUnity = false;

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "AnimGraph",
                "BlueprintGraph",
                "AnimGraphRuntime",
                "MeocapLiveLink",
                "LiveLinkInterface",
                "LiveLink",
                "LiveLinkAnimationCore",

				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "UnrealEd",
                "GraphEditor",
                "SlateCore",
                "Slate",
                "LiveLinkInterface",
                //"ToolMenus"
            }
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}
/// @endcond