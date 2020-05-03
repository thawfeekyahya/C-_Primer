#include "ReadFile.h"
#include <iostream>

ReadFile::ReadFile()
{
    read();
}

void ReadFile::read()
{
    //Version 1
    /*
    char ch;
    std::cin.get(ch);
    while(std::cin.fail() == false){
        std::cout<<ch;
        std::cin.get(ch);
    }*/

    //Shorter version
    char ch;
    while(std::cin.get(ch)){
        std::cout<<ch;
    }
}
