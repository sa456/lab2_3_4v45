#include <iostream>
#include "COne.h"
#include "CTwo.h"
#include "CTwo.h"

int main() {
    std::cout << "\t\tCOne class tests\nInput with methods COne" << std::endl;

    COne cOne;
    long l;
    std::cin>>l;
    cOne.setL(l);
    std::string string;
    std::cin>>string;
    cOne.setS(string);
    cOne.print();

    std::cout << "Constructor with params" << std::endl;
    COne cOne1(l, string);
    cOne1.print();

    std::cout << "Constructor with copy" << std::endl;
    COne cOne2(cOne1);
    cOne2.print();

    std::cout << "Operator ""="" " << std::endl;
    COne cOne3;
    cOne3 = cOne2;
    cOne3.print();

    std::cout << "\n\t\t CTwo class tests\nInput with methods CTwo" << std::endl;
    double d;
    std::cin>>d;

    CTwo cTwo;
    cTwo.setP(&cOne);
    cTwo.setD(d);
    cTwo.print();

    std::cout << "Constructor with params" << std::endl;
    CTwo cTwo2(&cOne, d);
    cTwo2.print();

    std::cout << "Constructor with copy" << std::endl;
    CTwo cTwo1(cTwo);
    cTwo1.print();

    return 0;
}