//
// Created by rei on 15.09.2017.
//

#ifndef LAB2_3_4_CFOUR_H
#define LAB2_3_4_CFOUR_H


#include "CThree.h"

/**
 * @brief Класс содержит переменную float, наследуется от CThree
 * @param f
 */

class CFour : public CThree{
protected:
    float f;
public:
    virtual ~CFour();
    CFour();
    CFour(float fIn, CThree &obj);
    CFour(CFour &obj);

    void setF(float fIn);
    float getF();

    virtual void print() override;
};


#endif //LAB2_3_4_CFOUR_H
