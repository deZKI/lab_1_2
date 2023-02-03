//
// Created by Кирилл on 01.02.2023.
//

#ifndef LAB_1_2_STROKA_H
#define LAB_1_2_STROKA_H


#include <iostream>
#include <vector>
#include <utility>
#include <string>
class Stroka {

public:

    void swap(Stroka &other);
    Stroka();
    Stroka(char *ptr);
    Stroka(std::string &s);
    Stroka(Stroka &other);
    Stroka(Stroka &&other);
    ~Stroka();


    bool operator==(const Stroka &rhs) const;
    bool operator!=(const Stroka &rhs) const;
    bool operator<(const Stroka &rhs) const;
    bool operator>(const Stroka &rhs) const;
    bool operator<=(const Stroka &rhs) const;
    bool operator>=(const Stroka &rhs) const;

    char operator[](unsigned int i) const;

    void setStr(std::string &s);

    Stroka sum(const Stroka &other);
    Stroka &operator+(const Stroka &other);
    Stroka &operator=(Stroka const &other);
    int getLength();
    void clear();
    friend std::ostream &operator<<(std::ostream &os, const Stroka &stroka);
    friend std::istream &operator>>(std::istream &in, Stroka &stroka);
protected:
    std::vector<char>str;
};
#endif //LAB_1_2_STROKA_H
