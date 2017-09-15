//
// Created by rei on 15.09.2017.
//

#include <utility>
#include <iostream>
#include "CThree.h"

/**
 * setter name
 * @param inputSting
 */
void CThree::setName(std::string inputSting) {
    name = std::move(inputSting);
}

/**
 * getter name
 * @return name
 */
std::string CThree::getName() {
    return name;
}

/**
 * Конструктор копирования
 * @param obj
 */
CThree::CThree(CThree &obj) {
    name = obj.getName();
    setD(obj.getD());
    setP(obj.getP());
}

/**
 * Вывод в консоль
 */
void CThree::print() {
    std::cout << "name = " << name << "\n";
    CTwo::print();
}

/**
 * Конструктор с параметрами
 * @param nameIn входное string
 * @param obj входное CTwo
 */
CThree::CThree(std::string nameIn, CTwo &obj) : CTwo(obj) {
    name = std::move(nameIn);
}

/**
 * Деструктор по умолчания
 */
CThree::~CThree() = default;

