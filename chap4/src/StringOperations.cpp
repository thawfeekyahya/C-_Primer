#include "StringOperations.h"
#include <iostream>

StringOperations::StringOperations()
{
    callRawString();
}

void StringOperations::callRawString()
{
    std::cout<< R"(This is a raw string " " "\n" will printed as it is )"<<std::endl;

    std::cout<< R"++(This is also a raw string with different keyword if we wanted to use )" or "( insided our string))++"<<std::endl;
}
