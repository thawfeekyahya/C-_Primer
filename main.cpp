#include <QCoreApplication>
#include <iostream>
#include "PrimerConfig.h"
#include "CompundTypes.h"
#include "Tests.h"
#include "structtest.h"
#include "StringOperations.h"
#include "StructVariations.h"
#include "ReadFile.h"
#include "Nested.h"
#include "FileStream.h"

#ifdef USE_CHAP3
#   include "NumberSysTest.h"
#endif


void quickTest() {
 int i;
 int test = 0;

 char* myname= "Thawfeek Yahya";
 char findChar= 'a';
 int count=0;


//  if(!std::cin) return;

  while(*myname){
      if(myname[i] == findChar) count++;
       myname++;
  }

 std::cout<<"This has "<<count<<findChar<<" in it"<<std::endl;

}




int main(int argc, char *argv[])
{

    //std::cout<<"C++ Version is " <<CPP_Primer_VERSION_MAJOR <<std::endl;

//    void (*funcPointer)(void)= &functionA;

//    (*funcPointer)();

    //Dynamic Array
//    CompundTypes* cmpdTypes = new CompundTypes[5];
//    cmpdTypes[2].stdInput();

//    CompundTypes t;
    quickTest();

//    Nested nesting;

//    FileStream f;

}
