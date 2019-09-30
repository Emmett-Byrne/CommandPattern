#pragma once
#include "Command.h"
#include <iostream>
#include <vector>
#include <algorithm>
class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void Add(Command* command);
	virtual void Remove(Command* command);
	virtual void execute();
	virtual void undo();
private:
	std::vector<Command*>* commands;
};

