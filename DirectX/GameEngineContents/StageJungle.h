#pragma once

class StageJungle
{
public:
	//constructor destructor
	StageJungle();
	~StageJungle();

	//delete Function
	StageJungle(const StageJungle& _Other) = delete;
	StageJungle(StageJungle&& _Other) noexcept = delete;
	StageJungle& operator=(const StageJungle& _Other) = delete;
	StageJungle&& operator=(StageJungle&& _Other) noexcept = delete;

protected:

private:

};  