#include "Stroka.h"
void Stroka::swap(Stroka & other){
    std::swap(str,other.str);
}
Stroka::Stroka() {
}
Stroka::Stroka(char *ptr) {
    size_t i = 0;
    while(ptr[i]!='\0')
    {
        str.push_back(ptr[i]);
        i++;
    }
}
Stroka::Stroka(std::string &s) {
    for (auto &now:s){
        str.push_back(now);
    }
}
Stroka::Stroka(Stroka &other) {
    for (auto &now:other.str){
        str.push_back(now);
    }
}

Stroka::Stroka(Stroka &&other) {
    swap(other);
}
Stroka::~Stroka() {
    str.clear();
}
bool Stroka::operator==(const Stroka &rhs) const {
    return (str == rhs.str);
}

bool Stroka::operator!=(const Stroka &rhs) const {
    return !(rhs == *this);
}
bool Stroka::operator<(const Stroka &rhs) const {
    if (str.size() == rhs.str.size())
        return str < rhs.str;
    else return str.size() < rhs.str.size();
}

bool Stroka::operator>(const Stroka &rhs) const {
    if (str.size() == rhs.str.size())
        return str > rhs.str;
    else return str.size() > rhs.str.size();
}

bool Stroka::operator<=(const Stroka &rhs) const {
    if (str.size() == rhs.str.size())
        return str <= rhs.str;
    else return str.size() < rhs.str.size();

}

bool Stroka::operator>=(const Stroka &rhs) const {
    if (str.size() == rhs.str.size())
        return str >= rhs.str;
    else return str.size() > rhs.str.size();
}
char Stroka::operator[](unsigned int i) const{
    return str[i];
}
Stroka Stroka::sum (const Stroka &other){
    Stroka s=Stroka(*this);
    for(auto &now:other.str){
        str.push_back(now);
    }
    return s;
};//проверить этот оператор
Stroka &Stroka::operator+(const Stroka &other){
    sum(other);
    return *this;
};
Stroka &Stroka::operator=(const Stroka &other){
    str.clear();
    for (auto &now:other.str){
        str.push_back(now);
    }
    return *this;//узнать почему потому что нужно сделать ссылку на обьект на себя наверно
};
int Stroka::getLength(){
    return str.size();
}
void Stroka::clear(){
    str.clear();
};
std::ostream &operator<<(std::ostream &os, const Stroka &stroka) {
    for(auto x: stroka.str)
        os<<x;
    return os;
}

void Stroka::setStr(std::string &s) {
    for (auto &x:s){
        str.push_back(x);
    }
}


std::istream &operator>>(std::istream &in,Stroka &stroka){
    std::string s;
    in>>s;
    stroka.clear(); //очистка вектора символов
    stroka.setStr(s);
    return in;
};
