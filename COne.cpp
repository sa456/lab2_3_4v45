//
// Created by rei on 14.09.2017.
//

#include "COne.h"

/**
 * Конструктор по умолчанию
 */
virtual COne::~COne() = default;

/**
 * Деструктор по умолчанию
 */
COne::COne() = default;

/**
 * Конструктор с параметрами
 * @param lIn входное long значение
 * @param sIn входное string значение
 */
COne::COne(long lIn, std::string sIn) {
    l = lIn;
    s = std::move(sIn);
}

/**
 * Консутруктор копирования
 * @param obj входной экзмпеляр класса СOne
 */
COne::COne(COne &obj) {
    l = obj.getL();
    s = obj.getS();
}

/**
 * getter l
 * @return l
 */
long COne::getL() {
    return l;
}

/**
 * setter l
 * @param lIn
 */
void COne::setL(long lIn) {
    l = lIn;
}

/**
 * getter s
 * @return s
 */
std::string COne::getS() {
    return s;
}

/**
 *setter s
 * @param sIn
 */
void COne::setS(std::string sIn) {
    s = std::move(sIn);
}

/**
 * Вывод в консоль
 */
void COne::print() {
    std::cout << "l = " << l << "\n" << "s = " << s << "\n" << std::endl;
}

/**
 * Перегрузка присваивания
 * @param right значение справа
 * @return присвоенное
 */
COne &COne::operator=(const COne &right) {
    if (this == &right) { //проверка на самоприсваивание
        return *this;
    }

    s = right.s;
    l = right.l;
    return *this;
}

