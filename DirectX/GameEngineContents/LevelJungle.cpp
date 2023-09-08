#include "PreCompile.h"
#include "LevelJungle.h"
#include "MapImageJungle.h"
#include "Zero.h"

LevelJungle::LevelJungle()
{
}

LevelJungle::~LevelJungle()
{
}


void LevelJungle::Start()
{
	//ī�޶� ����
	float4 HalfWindowScale = GameEngineCore::MainWindow.GetScale().Half();
	GetMainCamera()->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
	GetMainCamera()->SetProjectionType(EPROJECTIONTYPE::Orthographic);


	//Jungle ���̹��� ��������Ʈ ���
	{
		GameEngineDirectory Dir;
		Dir.MoveParentToExistsChild("MegamanX5Resources");
		Dir.MoveChild("MegamanX5Resources");
		Dir.MoveChild("BackGround");
		Dir.MoveChild("BG_Jungle");
		std::vector<GameEngineFile> Files = Dir.GetAllFile();

		for (size_t i = 0; i < Files.size(); i++)
		{
			// ���������� �� �����ϰ� �ִ����� �ڽ��� ��Ȯ�ϰ� �����ϱ� ���ؼ�
			GameEngineFile& File = Files[i];
			GameEngineTexture::Load(File.GetStringPath());
		}

		GameEngineSprite::CreateSingle("Jungle0.png");

	}


	//zero ��������Ʈ ���
	{
		GameEngineDirectory Dir;
		Dir.MoveParentToExistsChild("MegamanX5Resources");
		Dir.MoveChild("MegamanX5Resources");
		Dir.MoveChild("Zero");
		std::vector<GameEngineFile> Files = Dir.GetAllFile();

		for (size_t i = 0; i < Files.size(); i++)
		{
			// ���������� �� �����ϰ� �ִ����� �ڽ��� ��Ȯ�ϰ� �����ϱ� ���ؼ�
			GameEngineFile& File = Files[i];
			GameEngineTexture::Load(File.GetStringPath());
		}

		GameEngineSprite::CreateSingle("zeropractice.png");

	}



	//Jungle �̹����� ���� ���͵� �����
	{
		std::shared_ptr<MapImageJungle> ImageJungle0 = CreateActor<MapImageJungle>();
		//ImageJungle0->GetMainSpriteRenderer() = ImageJungle0->CreateComponent<GameEngineSpriteRenderer>(15);
		//std::shared_ptr<GameEngineTexture> Tex = GameEngineTexture::Find("Jungle0.png");
		//ImageJungle0->GetMainSpriteRenderer()->SetSprite("Jungle0.png");

		/*MainSpriteRenderer = CreateComponent<GameEngineSpriteRenderer>(30);
		MainSpriteRenderer->SetSprite("HoHoYee_AttackABC2");*/
		
	}


	//zero ĳ���� actor����
	{
		std::shared_ptr<Zero> PlayerZero = CreateActor<Zero>();
	}
}

void LevelJungle::Update(float _Delta)
{
	//Ÿ��Ʋȭ�鰡��
	if (GameEngineInput::IsPress(VK_F1))
	{
		GameEngineCore::ChangeLevel("LevelTitle");
	}
}

void LevelJungle::LevelStart(GameEngineLevel* _PrevLevel)
{
}

void LevelJungle::LevelEnd(GameEngineLevel* _NextLevel)
{
}