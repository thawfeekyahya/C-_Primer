#include "FunctionPointer.h"
#include <iostream>

FunctionPointer::FunctionPointer(){
    
   myFunc=&FunctionPointer::test2;
   (this->*myFunc)();
   pointerArgs(&FunctionPointer::test,5);
}

void FunctionPointer::test(int a) 
{
    while (a > 0)
    {
        a--;
        std::cout<<"Test function called "<<a<<std::endl;
    }
}

void FunctionPointer::pointerArgs(void (FunctionPointer::*func)(int),int count) {
    (this->*func)(count);
}

void FunctionPointer::test2() 
{
    std::cout<<"Test function without parameter called"<<std::endl;
}







































