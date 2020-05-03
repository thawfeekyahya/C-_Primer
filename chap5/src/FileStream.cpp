#include "FileStream.h"
#include <iostream>
#include <fstream>


FileStream::FileStream()
{
    openFile();
}

void FileStream::openFile()
{
    std::ofstream file;
    std::cout<<"Enter your Inputs upto 100 chars"<<std::endl;
    file.open("Sample.txt");
    char inputTxt[100];
    std::cin.getline(inputTxt,100);
    file << inputTxt;
    file.close();
}
