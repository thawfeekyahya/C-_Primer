#ifndef STRUCTTEST_H
#define STRUCTTEST_H
#include <string>

class StructTest
{
public:
    StructTest();

    struct Test{
       int member1;
       std::string member2;
     public:
       int a=20,b=10;
       void printRes();
    } varStruct1 , varStrcut2;

    Test testArray[10];

    struct BitField {
        unsigned int slno : 4; //Take 4 bits of space
        unsigned int rollno : 4; //Take 4 bits of space
        bool isValid : 1; //Take 1 bit of space
    };

};

#endif // STRUCTTEST_H
