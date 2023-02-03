//
// Created by Кирилл on 02.02.2023.
//

#ifndef LAB_1_2_STRBOOL_H
#define LAB_1_2_STRBOOL_H
#include "Stroka.h"
#include <map>


class Strbool: public Stroka{
public:
    Strbool();
    Strbool(char *ptr);
    Strbool(std::string &s);
    Strbool(Strbool &other);
    Strbool(Strbool &&other);
    ~Strbool();
    Strbool sixteen();
private:
    static std::map<std::string,char> s;
};


#endif //LAB_1_2_STRBOOL_H
