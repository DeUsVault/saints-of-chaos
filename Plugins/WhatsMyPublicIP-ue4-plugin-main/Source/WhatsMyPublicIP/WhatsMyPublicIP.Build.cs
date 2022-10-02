// Alex Hajdu, (C) 2018, alexhajdu[at]me.com, twitter.com/alexhajdu

using UnrealBuildTool;
using System.IO;

public
class WhatsMyPublicIP : ModuleRules
{
public
	WhatsMyPublicIP( ReadOnlyTargetRules Target )
		: base( Target )
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange( new string[]{
			Path.Combine(ModuleDirectory, "Public")
			// ... add public include paths required here ...
		} );


		PrivateIncludePaths.AddRange( new string[]{
			Path.Combine(ModuleDirectory, "Private"),
			// ... add other private include paths required here ...
		} );


		PublicDependencyModuleNames.AddRange( new string[]{
			"Core","HTTP", "Json", "JsonUtilities"
			// ... add other public dependencies that you statically link with here ...
		} );


		PrivateDependencyModuleNames.AddRange( new string[]{
			"CoreUObject", "Engine", "Slate", "SlateCore"
			// ... add private dependencies that you statically link with here ...
		} );


		DynamicallyLoadedModuleNames.AddRange( new string[]{
			// ... add any modules that your module loads dynamically here ...
		} );
	}
}
