#include <iostream>
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"
#include "CFour.h"

void printAll(CTwo *array, int n){
    std::cout<<"Array: \n";
    for (int i = 0; i < n; ++i) {
        array[i].print();
    }
}

int main() {
    std::cout << "\t\tCOne class tests\nInput with methods COne" << std::endl;

    COne cOne;
    long l;
    std::cout<<"l =";
    std::cin>>l;
    cOne.setL(l);
    std::cout<<"string =";
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
    std::cout<<"d =";
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

    std::cout << "\n\t\t CThree class tests\n " << std::endl;
    std::string name;
    std::cout<<"name =";
    std::cin >> name;
    CThree cThree(name, cTwo1);
    cThree.print();

    std::cout << "Constructor with copy" << std::endl;
    CThree cThree1(cThree);
    cThree1.print();


    std::cout << "\n\t\t CFour class tests\n" << std::endl;
    float f;
    std::cout<<"f =";
    std::cin >> f;
    CFour cFour(f, cThree);
    cFour.print();

    std::cout << "Constructor with copy" << std::endl;
    CFour cFour1(cFour);
    cFour1.print();

    CTwo array[3] = {cTwo, cThree, cFour};
    printAll(array, 3);
    return 0;
}

