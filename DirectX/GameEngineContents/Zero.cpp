#include "PreCompile.h"
#include "Zero.h"

Zero::Zero()
{
}

Zero::~Zero()
{
}

void Zero::Start()
{
	{
		MainSpriteRenderer = CreateComponent<GameEngineSpriteRenderer>(50);

		//MainSpriteRenderer->SetSprite("PlayerSelectImage0.PNG");
		MainSpriteRenderer->SetSprite("zeropractice.PNG");
		//MainSpriteRenderer->SetSprite("Testmap.PNG");
		//MainSpriteRenderer->CreateAnimation("TitleImageAnimation", "TitleImage", 0.6f, -1, -1, true);
		//MainSpriteRenderer->ChangeAnimation("TitleImageAnimation");
		MainSpriteRenderer->SetSamplerState(SamplerOption::POINT);

		//���� ���������. ������ ���� �ٲٸ鼭 ��ġ�̵��ϴ°� ���������? �ϴ� ũ�� ������ �ǵ�
		MainSpriteRenderer->Transform.SetLocalPosition({ 0.0f, -50.0f, 0.0f });
		//MainSpriteRenderer->Transform.SetLocalScale({ 150.0f, 150.0f, 1.0f });

		//�̰� �� ������ ��� 
		MainSpriteRenderer->SetImageScale({ 150.0f, 150.0f, 1.0f });

	}

	float4 HalfWindowScale = GameEngineCore::MainWindow.GetScale().Half();
	Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });

}

void Zero::Update(float _Delta)
{
	// ���Ͱ� ���Ͷ� �浹�ϰ� ������?
	// �� �̷��� ��ġ

	EventParameter Event;

	Event.Enter = [](GameEngineCollision* Col)
	{
		int a = 0;
	};

	Event.Stay = [](GameEngineCollision* Col)
	{
		int a = 0;
	};


	Event.Exit = [](GameEngineCollision* Col)
	{
		Col->GetActor()->Death();

		int a = 0;
	};

	float Speed = 300.0f;



	if (GameEngineInput::IsPress('A'))
	{
		Transform.AddLocalPosition(float4::LEFT * _Delta * Speed);
	}

	if (GameEngineInput::IsPress('D'))
	{
		Transform.AddLocalPosition(float4::RIGHT * _Delta * Speed);
	}

	if (GameEngineInput::IsPress('W'))
	{
		Transform.AddLocalPosition(float4::UP * _Delta * Speed);
	}

	if (GameEngineInput::IsPress('S'))
	{
		Transform.AddLocalPosition(float4::DOWN * _Delta * Speed);
	}

	if (GameEngineInput::IsPress('Q'))
	{
		Transform.AddLocalRotation({ 0.0f, 0.0f, 360.0f * _Delta });
	}

	if (GameEngineInput::IsPress('E'))
	{
		Transform.AddLocalRotation({ 0.0f, 0.0f, -360.0f * _Delta });
	}

}