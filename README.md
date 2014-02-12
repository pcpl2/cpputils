cpputils
========

Utils written in C++ used in my projects

At the moment repository contains:
logger - Lightweight logger class, usage:

How to implement
```cpp
// Initialize logger
// Argument 1: Name of file log
// Returns: Nothing
Logger::Init("mylogfile.log"); 

Info("Lorem ipsum"); // information

Warning("Lorem ipsum"); // warning

Error("Lorem ipsum"); // error

Debug("Lorem ipsum"); // debug (NOTE: To enable this function (initialy it's just empty macro) you need to add preprocessor called "DEBUG" to your project)
```
