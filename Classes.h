#pragma once
#include <string>

using namespace System::Runtime::InteropServices;
using namespace System;

void StringToChar(String^ s, std::string& os);
String^ CharToString(char* str);
char* EncodeText(char* psText);
char* DecodeText(char* psText);