//
// Created by rei on 15.09.2017.
//

#include <iostream>
#include "CFour.h"

/**
 * Деструктор по умолчанию
 */
CFour::~CFour() = default;

/**
 * КОнутруктор по умолчанию
 */
CFour::CFour() = default;

/**
 * Конструктор с параметрами
 * @param fIn входное float
 * @param obj входное СThree
 */
CFour::CFour(float fIn, CThree &obj) : CThree(obj) {
    f = fIn;
}

/**
 * Конструктор копирования
 * @param obj взодное CFour
 */
CFour::CFour(CFour &obj) {
    f = obj.getF();
    setName(obj.getName());
    setD(obj.getD());
    setP(obj.getP());
}

/**
 * setter
 * @param fIn
 */
void CFour::setF(float fIn) {
    f = fIn;
}

/**
 * getter
 * @return f
 */
float CFour::getF() {
    return f;
}

/**
 * Вывод в консоль
 */
void CFour::print() {
    std::cout << "f = " << f << "\n";
    CThree::print();
}
