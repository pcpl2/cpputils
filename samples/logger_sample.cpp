// Sample usage of Logger (CPPUtils part)
// Written by Eryk Dwornicki

// VS Only (_DEBUG preprocessor only exists in VS you can add it your makefile on linux/mac using -D_DEBUG flag to g++)
#ifdef _DEBUG
#define DEBUG
#endif

#include "../logger/Logger.h"

int main()
{
	Logger::Init("sample_log_file.log");

	Info("Info message");
	Debug("Debug message");
	Error("error message");
	Warning("warning message");

	Info("Info message with attribute %.2f", 465.485462f);

	bool bTest = false;
	Debug("This is %s", bTest?"enabled":"disabled");

	Logger::Shutdown();
	return 1;	
}