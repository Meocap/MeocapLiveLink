// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class MeocapLiveLink : ModuleRules
{
	public MeocapLiveLink(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;


        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "meocap_sdk.dll.lib"));

        // Delay-load the DLL, so we can load it from the right place first
        PublicDelayLoadDLLs.Add("meocap_sdk.dll");

        // Ensure that the DLL is staged along with the executable
        RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/MeocapSdk/Win64/meocap_sdk.dll");

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "CoreUObject", "Engine", "AnimGraphRuntime", 
                "LiveLinkInterface", "LiveLinkAnimationCore"
				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "LiveLink",
                "LiveLinkInterface",
                "LiveLinkMessageBusFramework",
                "TimeManagement",
                "SlateCore",
                "Networking",
                "Slate",
                "Projects",
				// ... add private dependencies that you statically link with here ...	
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
