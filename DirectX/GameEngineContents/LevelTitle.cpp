#include "PreCompile.h"
#include "LevelTitle.h"
#include "TitleImage.h"




LevelTitle::LevelTitle()
{
}

LevelTitle::~LevelTitle()
{
}


void LevelTitle::Start()
{


	//타이틀 리소스 가져오기
	{
		GameEngineDirectory Dir;
		Dir.MoveParentToExistsChild("MegamanX5Resources");
		Dir.MoveChild("MegamanX5Resources");
		Dir.MoveChild("BackGround");
		Dir.MoveChild("TitleImage");

		GameEngineSprite::CreateFolder(Dir.GetStringPath());
	}

	float4 HalfWindowScale = GameEngineCore::MainWindow.GetScale().Half();
	GetMainCamera()->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
	GetMainCamera()->SetProjectionType(EPROJECTIONTYPE::Orthographic);
	{
		std::shared_ptr<TitleImage> Object0 = CreateActor<TitleImage>(ContentsObjectType::Player);
	}
}

void LevelTitle::Update(float _Delta)
{
}

void LevelTitle::LevelStart(GameEngineLevel* _PrevLevel)
{
}

void LevelTitle::LevelEnd(GameEngineLevel* _NextLevel)
{
}