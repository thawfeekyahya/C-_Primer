#include "StructVariations.h"
#include <iostream>
#include <string>

StructVariations::StructVariations():
    structArr{
        {0,"Thawfeek"},
        {2,"Yasmin"},
        {3,"Sarah"}
    }
{
        for(int i=0;i<sizeof (structArr)/sizeof (structArr[0]);i++) {
            std::cout<<"Struct id -> "<<structArr[i].id<<std::endl;
            std::cout<<"Struct name ->  "<<structArr[i].name<<std::endl;
        }
}
