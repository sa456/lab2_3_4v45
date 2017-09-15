//
// Created by rei on 14.09.2017.
//

#ifndef LAB2_3_4_CTWO_H
#include "COne.h"
#define LAB2_3_4_CTWO_H

/**
 * @brief Кдасс, содержит включение класса COne и переменную d
 * @param *p указатель на класс включения
 * @param d переменная double
 */
class CTwo {
private:
    COne *p;
    double d;
public:
    CTwo();
    ~CTwo();
    CTwo(COne *obj, double dIn);
    CTwo(CTwo &obj);

    double getD();
    void setD(double dIn);
    COne getP();
    void setP(COne *pIn);

    void print();
};


#endif //LAB2_3_4_CTWO_H
