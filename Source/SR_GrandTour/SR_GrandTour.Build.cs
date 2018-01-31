// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SR_GrandTour : ModuleRules
{
	public SR_GrandTour(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

        //The path for the header files
        PublicIncludePaths.AddRange(new string[] { "SR_GrandTour/Public" });

        //The path for the source files
        PrivateIncludePaths.AddRange(new string[] { "SR_GrandTour/Private" });
    }
}
