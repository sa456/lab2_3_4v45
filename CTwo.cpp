//
// Created by rei on 14.09.2017.
//

#include <iostream>
#include "CTwo.h"

/**
 * Конструктор по умолчанию, выделение памяти под экземпляр включенного класса
 */
CTwo::CTwo(){
    p = new COne();
}

/**
 * Деструктор по умолчанию, очистка памяти
 */
CTwo::~CTwo(){
    delete(p);
}

/**
 * Конструктор с параметрами
 * @param obj экземпляр класса COne
 * @param dIn входное double
 */
CTwo::CTwo(COne *obj, double dIn) {
    p = new COne(*obj);
    d = dIn;
}

/**
 * Конструктор копирования
 * @param obj экзмепляр класса CTwo
 */
CTwo::CTwo(CTwo &obj) {
    p = obj.p;
    d = obj.getD();
}

/**
 * getter
 * @return d
 */
double CTwo::getD() {
    return d;
}

/**
 * setter
 * @param dIn входное d
 */
void CTwo::setD(double dIn) {
    d = dIn;
}

/**
 * Вывод в консоль
 */
void CTwo::print() {
    std::cout << "d = " << d << "\n";
    p->print();
}

/**
 * getter
 * @return *p
 */
COne * CTwo::getP() {
    return p;
}

/**
 * setter
 * @param pIn входное
 */
void CTwo::setP(COne *pIn) {
    p = pIn;
}