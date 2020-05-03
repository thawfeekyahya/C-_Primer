#include "CompundTypes.h"
#include <vector>
#include <iostream>

CompundTypes::CompundTypes()
{
//    int arrayInt[5]{1,2,3,4,5};
//    int i{1};
//    double d2{2.3};

//    stdInput();
//    stdGetLine();
//    dynamicArray();
//    staticArray();
    arrayAccess();
}

void CompundTypes::stdInput()
{
    char nameArray[15];
    char dessert[15];
    std::cout<<"Enter your name"<<std::endl;
    std::cin>>nameArray;

    std::cout<<"Enter your favorite dessert "<< std::endl;
    std::cin>>dessert;

    std::cout<<"Your name is "<<nameArray<<" and you favorite dessert is "<<dessert<<std::endl;
}

void CompundTypes::stdGetLine()
{
    const int ARRAY_SIZE{20};

    char name[ARRAY_SIZE];
    char dessert[ARRAY_SIZE];

    std::cout<<"Enter your name : \n";
    std::cin.getline(name,ARRAY_SIZE);

    std::cout<<"Enter you favorite dessert \n";
    std::cin.getline(dessert,ARRAY_SIZE);

    std::cout<<"I have delicious "<<dessert<<" for you "<<name<<std::endl;
}

void CompundTypes::dynamicArray()
{
    //Dynamic Array
    int* pointerInt = new int[10]; //Dynamic array
    for(int i=0;i<10;i++){

        //Using array access operator
        pointerInt[i] = i*10;
        std::cout<<pointerInt[i]<<std::endl;

    }

    std::cout<<"Address of pointerInt is ->"<<pointerInt<<" And value is -> "<<*pointerInt<<std::endl;
    ++pointerInt;
    std::cout<<"Address of pointerInt +1 is -> "<<" And value is -> "<<*pointerInt<<std::endl;
}

void CompundTypes::staticArray()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        std::cout<<a[i]<<std::endl;
    }
}

void CompundTypes::arrayAccess()
{
    int arrayInt[5]{1,2,3,4,5};

    for(int i=0;i<5;i++){
        std::cout<<arrayInt[i]<<std::endl;
    }

    //Using pointer to access array
    int* pointerInt = arrayInt;
     pointerInt += 2;
    *pointerInt = 100;

    std::cout<<"After Changing ----------------------------------------------------"<<std::endl;

     for(int i=0;i<5;i++){
         std::cout<<arrayInt[i]<<std::endl;
     }

     std::cout<<"Address of Array--------------------------------------------------"<<std::endl;

     std::cout<<"Address of arrayInt      "<<arrayInt<<std::endl;
     std::cout<<"Address of first Element "<<&arrayInt[0]<<std::endl;
     std::cout<<"Address of entire Array  "<<&arrayInt<<std::endl;

     std::cout<<"Size of arrayInt[0] "<<sizeof (arrayInt[0])<<std::endl;
     std::cout<<"Address of arrayInt "<<sizeof(arrayInt)<<std::endl;

}
