//
// Created by rei on 15.09.2017.
//

#ifndef LAB2_3_4_CTHREE_H
#define LAB2_3_4_CTHREE_H
#include "CTwo.h"
#include "COne.h"


/**
 * @brief Класс, наследуется от CTwo, содержит перменную string name
 * @param name имя переменной
 */

class CThree : public CTwo {
protected:
    std::string name;
public:
    virtual ~CThree();
    CThree() : CTwo(){}
    CThree(std::string nameIn, CTwo &obj);
    CThree(CThree &obj);

    void setName(std::string inputSting);
    std::string getName();

    virtual void print() override;
};


#endif //LAB2_3_4_CTHREE_H
