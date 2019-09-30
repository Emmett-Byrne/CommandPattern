#pragma once
#include "Command.h"
class InputHandler
{
public:
	void handleInput();
private:
	Command* buttonQ_;
	Command* buttonW_;
	Command* buttonE_;
	Command* buttonR_;
	Command* buttonT_;
	Command* buttonY_;
};

