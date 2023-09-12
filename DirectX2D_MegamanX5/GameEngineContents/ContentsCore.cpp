#include "PreCompile.h"
#include "ContentsCore.h"
#include "LevelTitle.h"
#include "LevelcharacterSelect.h"
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



	GameEngineCore::CreateLevel<LevelTitle>("LevelTitle");
	GameEngineCore::CreateLevel<LevelCharacterSelect>("LevelCharacterSelect");
	GameEngineCore::CreateLevel<LevelJungle>("LevelJungle");
	GameEngineCore::ChangeLevel("LevelTitle");
	

}

void ContentsCore::Update(float _Delta)
{

}

void ContentsCore::Release()
{

}