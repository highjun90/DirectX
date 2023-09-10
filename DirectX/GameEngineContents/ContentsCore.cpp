#include "PreCompile.h"
#include "ContentsCore.h"
#include "PlayLevel.h"
#include "TitleLevel.h"
#include "LevelTitle.h"
#include "LevelJungle.h"

ContentsCore::ContentsCore() 
{
}

ContentsCore::~ContentsCore() 
{
}

void ContentsCore::Start()
{
	//�⺻������ SpriteRenderer�� ���鶧 �־��� ���÷��� �����մϴ�. �� �ڵ� ������ static �ʱ�ȭ ������ ������
	GameEngineSpriteRenderer::SetDefaultSampler("POINT");

	GameEngineCore::CreateLevel<PlayLevel>("PlayLevel");
	GameEngineCore::CreateLevel<TitleLevel>("TitleLevel");
	//GameEngineCore::ChangeLevel("PlayLevel");

	GameEngineCore::CreateLevel<LevelTitle>("LevelTitle");
	GameEngineCore::CreateLevel<LevelJungle>("LevelJungle");
	GameEngineCore::ChangeLevel("LevelTitle");
	

}

void ContentsCore::Update(float _Delta)
{

}

void ContentsCore::Release()
{

}