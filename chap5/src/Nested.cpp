#include "Nested.h"
#include <iostream>


Nested::Nested()
{
arrayStrings();
}

void Nested::arrayStrings()
{
    for(int i=0;i<nameCount;i++){
        std::cout<<names[i]<<std::endl;
    }
}
