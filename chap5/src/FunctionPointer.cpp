#include "FunctionPointer.h"
#include <iostream>

FunctionPointer::FunctionPointer(){

   //Function  Pointer Standard
   myFunc=&FunctionPointer::test2;
   (this->*myFunc)();

   //Function Pointer using auto
   auto aFunc = &FunctionPointer::test2;
   (this->*aFunc)();

   //Function Pointer using typedef
   PtrFunc func= &FunctionPointer::test;
   (this->*func)(2);

   //Passing function pointer in another function
   pointerArgs(&FunctionPointer::test,5);
}

void FunctionPointer::test(int a) 
{
    while (a > 0)
    {
        std::cout<<"Test function called "<<a<<std::endl;
        a--;

    }
}

void FunctionPointer::pointerArgs(void (FunctionPointer::*func)(int),int count) {
    (this->*func)(count);
}

void FunctionPointer::test2() 
{
    std::cout<<"Test function without parameter called"<<std::endl;
}







































