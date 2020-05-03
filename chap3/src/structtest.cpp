#include "structtest.h"
#include <string>
#include <iostream>

StructTest::StructTest()
{
    Test t;
    t.member1 = 10;
    t.member2 = "hello";

    t.printRes();

    varStrcut2.member1 = 30;
    varStrcut2.member2 = "This is so cool";

    varStrcut2.printRes();

    testArray[0].member1 = 22;
    testArray[0].member2 = "This is awesome";

    testArray[0].printRes();
    
    
    

//    Test t2 = {
//      20,
//      "World"
    //    };
}




void StructTest::Test::printRes() {
    std::cout<<"Member1 is -> "<<member1<<" And member 2 is -> "<<member2<<std::endl;
//    std::cout<<"Hello Structure"<<a<<" <--> "<<b<<std::endl;
}
