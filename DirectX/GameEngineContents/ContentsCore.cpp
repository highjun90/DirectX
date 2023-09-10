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
	//기본적으로 SpriteRenderer를 만들때 넣어줄 샘플러를 지정합니다. 이 코드 없으면 static 초기화 에러가 날것임
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