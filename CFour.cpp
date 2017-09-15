//
// Created by rei on 15.09.2017.
//

#include <iostream>
#include "CFour.h"

CFour::~CFour() = default;

CFour::CFour() = default;

CFour::CFour(float fIn, CThree &obj) : CThree(obj) {
    f = fIn;
}

CFour::CFour(CFour &obj) {
    f = obj.getF();
    setName(obj.getName());
    setD(obj.getD());
    setP(obj.getP());
}

void CFour::setF(float fIn) {
    f = fIn;
}

float CFour::getF() {
    return f;
}

virtual void CFour::print() {
    std::cout << "f = " << f << "\n";
    CThree::print();
}
