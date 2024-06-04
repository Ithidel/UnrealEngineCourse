// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEC_CPlus : ModuleRules
{
	public UEC_CPlus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
