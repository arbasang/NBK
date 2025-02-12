using UnrealBuildTool;

public class GameProject : ModuleRules
{
    public GameProject(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // 프로젝트에서 필수로 사용되는 엔진 기능
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",                     // 엔진의 기본 기능
            "CoreUObject",              // 리플렉션, 가비지 콜렉션
            "Engine",                   // 엔진의 주요 기능
            "InputCore",                // 입력 시스템    
            "EnhancedInput",            // 기본 입력 시스템의 확장 버전
            "UMG"                       // UMG 모듈 추가
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
};