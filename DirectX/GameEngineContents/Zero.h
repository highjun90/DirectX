#pragma once

class Zero
{
public:
	//constructor destructor
	Zero();
	~Zero();

	//delete Function
	Zero(const Zero& _Other) = delete;
	Zero(Zero&& _Other) noexcept = delete;
	Zero& operator=(const Zero& _Other) = delete;
	Zero&& operator=(Zero&& _Other) noexcept = delete;

protected:

private:

};  