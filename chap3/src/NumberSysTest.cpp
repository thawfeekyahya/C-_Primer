#include "NumberSysTest.h"
#include <iostream>

NumberSystemTest::NumberSystemTest()
{
   printTypeSizes();
}

void NumberSystemTest::FloatTest()
{
    float mass_of_earth  = 5.98E24; // followed by 22 zeros
    float mass_of_earth2 = 5.98e+24; // followed by 22 zeros including .98 after decimal point

    long double  mass_of_electron = 9.11e-31; //Negative exponent / fraction
    float negatvie_value   = 1.832e+6; //Number is a negative value

    std::cout<<"The mass of the earth is 1 -> "<<mass_of_earth<<std::endl;

    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::cout<<"The mass of the earth is 2 -> "<<mass_of_earth2<<std::endl;
    std::cout<<"The mass of the electorn is -> "<<mass_of_electron<<std::endl;
    std::cout<<"Float with negative value -> "<<negatvie_value<<std::endl;
}

void NumberSystemTest::dec_oct_hex() {
    int deci  = 40;
    int octal = 040;
    int hexa  = 0x40;

    std::cout<<"Decimal of 40 is -> "<<deci<<std::endl;
    std::cout<<"Octal   of 40 is -> "<<octal<<std::endl;
    std::cout<<"Hexa    of 40 is -> "<<hexa<<std::endl;


    int number = 10;

    std::cout<<"Number in decimal -> "<<number<<std::endl;
    std::cout<<std::hex;
    std::cout<<"Number in Hexa decimal -> " <<number<<std::endl;
    std::cout<<std::oct;
    std::cout<<"Number in Octal -> "<<number<<std::endl;

    std::cout<<"\a\a\a";

    char alarm = '\a';

    std::cout<<alarm<<alarm<<alarm;
}

void NumberSystemTest::printTypeSizes()
{
    std::cout<<"Size of char is -> "<<sizeof(char)<<std::endl;
    std::cout<<"Size of signed char is -> "<<sizeof(signed char)<<std::endl;
    std::cout<<"Size of unsinged char is -> "<<sizeof(unsigned char)<<std::endl;
    std::cout<<"Size of short is -> "<<sizeof(short)<<std::endl;
    std::cout<<"Size of unsigned short is -> "<<sizeof(unsigned short)<<std::endl;
    std::cout<<"Size of int is -> "<<sizeof(int)<<std::endl;
    std::cout<<"Size of unsigned int is -> "<<sizeof(unsigned int)<<std::endl;
    std::cout<<"Size of long is -> "<<sizeof(long)<<std::endl;
    std::cout<<"Size of long long is -> "<<sizeof(long long)<<std::endl;
    std::cout<<"Size of float is -> "<<sizeof(float)<<std::endl;
    std::cout<<"Size of double is -> "<<sizeof(double)<<std::endl;
    std::cout<<"Size of long long double is -> "<<sizeof(long double)<<std::endl;
}
