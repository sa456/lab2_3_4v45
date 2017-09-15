//
// Created by rei on 14.09.2017.
//

#ifndef LAB2_3_4_CONE_H
#define LAB2_3_4_CONE_H

#include <string>

/**
 *  @brief Класс, содержащий поля переменной и и текстовое описание
 *  @param l значение
 *  @param s информация о переменной
 *
 */
class COne {
private:
    long l;
    std::string s;
public:
    ~COne();
    COne();
    COne(COne &obj);
    COne(long lIn, std::string);

    long getL();
    void setL(long lIn);
    std::string getS();
    void setS(std::string sIn);

    virtual void print();
    COne& operator=(const COne& right);
};


#endif //LAB2_3_4_CONE_H
