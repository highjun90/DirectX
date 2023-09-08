#include "PreCompile.h"
#include "ContentsCore.h"
#include "PlayLevel.h"
#include "TitleLevel.h"
#include "LevelTitle.h"

ContentsCore::ContentsCore() 
{
}

ContentsCore::~ContentsCore() 
{
}

void ContentsCore::Start()
{
	GameEngineCore::CreateLevel<PlayLevel>("PlayLevel");
	GameEngineCore::CreateLevel<TitleLevel>("TitleLevel");
	//GameEngineCore::ChangeLevel("PlayLevel");

	GameEngineCore::CreateLevel<LevelTitle>("LevelTitle");
	GameEngineCore::ChangeLevel("LevelTitle");
	

}

void ContentsCore::Update(float _Delta)
{

}

void ContentsCore::Release()
{

}