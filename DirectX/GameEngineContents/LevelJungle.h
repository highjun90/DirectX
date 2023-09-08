#pragma once
#include <GameEngineCore/GameEngineLevel.h>

class LevelJungle : public GameEngineLevel
{
public:
	//constructor destructor
	LevelJungle();
	~LevelJungle();

	//delete Function
	LevelJungle(const LevelJungle& _Other) = delete;
	LevelJungle(LevelJungle&& _Other) noexcept = delete;
	LevelJungle& operator=(const LevelJungle& _Other) = delete;
	LevelJungle&& operator=(LevelJungle&& _Other) noexcept = delete;

protected:
	void Start() override;

	void Update(float _Delta) override;

	void LevelStart(GameEngineLevel* _PrevLevel) override;
	void LevelEnd(GameEngineLevel* _NextLevel) override;

private:
	//std::shared_ptr<class PlayMap> MapJungle;
	std::shared_ptr<class GameEngineSpriteRenderer> MainSpriteRenderer;
};  