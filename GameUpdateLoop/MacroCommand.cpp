#include "MacroCommand.h"

MacroCommand::MacroCommand()
{
}

MacroCommand::~MacroCommand()
{
}

void MacroCommand::Add(Command* command)
{
	commands->push_back(command);
}

void MacroCommand::Remove(Command* command)
{
	
}

void MacroCommand::execute()
{
	std::for_each(commands->begin(), commands->end(), [](Command* iter)
	{
		iter->execute();
	});
}
