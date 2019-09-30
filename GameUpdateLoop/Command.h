#pragma once
#include <iostream>
class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	virtual void undo() = 0;
protected:
	Command() {}
};

class QCommand : public Command
{
public:
	virtual void execute() { std::cout << "Executing Q"; }
	virtual void undo() { std::cout << "Undoing Q"; }
};

class WCommand : public Command
{
public:
	virtual void execute() { std::cout << "Executing W"; }
	virtual void undo() { std::cout << "Undoing W"; }
};

class ECommand : public Command
{
public:
	virtual void execute() { std::cout << "Executing E"; }
	virtual void undo() { std::cout << "Undoing E"; }
};

class RCommand : public Command
{
public:
	virtual void execute() { std::cout << "Executing R"; }
	virtual void undo() { std::cout << "Undoing R"; }
};

class TCommand : public Command
{
public:
	virtual void execute() { std::cout << "Executing T"; }
	virtual void undo() { std::cout << "Undoing T"; }
};

class YCommand : public Command
{
public:
	virtual void execute() { std::cout << "Executing Y"; }
	virtual void undo() { std::cout << "Undoing Y"; }
};