//
// Created by Кирилл on 02.02.2023.
//

#include "Strbool.h"
Strbool::Strbool() {
}
Strbool::Strbool(char *ptr) {
    size_t i = 0;
    while(ptr[i]!='\0')
    {
        if (ptr[i]!='1' && ptr[i]!='0'){
            str.clear();
            str.push_back('1');
            break;
        }
        str.push_back(ptr[i]);
        i++;
    }
}
Strbool::Strbool(std::string &s) {
    for (auto &now:s){
        if (now!='1' && now!='0'){
            str.clear();
            str.push_back('1');
            break;
        }
        str.push_back(now);
    }
}
Strbool::Strbool(Strbool &other) {

    for (auto &now:other.str){
        str.push_back(now);
    }
}

Strbool::Strbool(Strbool &&other) {
    swap(other);
}
Strbool::~Strbool() {
    str.clear();
}

Strbool Strbool::sixteen() {//10 0100 0100
    Strbool a;
    std::string p("");
    std::vector<char> w;

    for (int i=str.size()-1;i>=0;i=i-4){
        for (int j=i-3;j<=i;j++){
            if (j<0) continue;
            p=p+str[j];
        }
        if (p.length()==4) {
            a.str.push_back(s[p]);
            p.clear();
        }
    }
    if (str.size()%4!=0){
        for (int i = 0; i < str.size() % 4; i++) {//прибавление 0 в начало
            p = '0' + p;
        }
        a.str.push_back(s[p]);
    }
    str.clear();
    for(int i=a.str.size()-1;i>=0;i--){
        str.push_back(a.str[i]);
    }
    return *this;
}
std::map<std::string,char> Strbool:: s{
        {"0000",'0'},
        {"0001",'1'},
        {"0010",'2'},
        {"0011",'3'},
        {"0100",'4'},
        {"0101",'5'},
        {"0110",'6'},
        {"0111",'7'},
        {"1000",'8'},
        {"1001",'9'},
        {"1010",'A'},
        {"1011",'B'},
        {"1100",'C'},
        {"1101",'D'},
        {"1110",'E'},
        {"1111",'F'},
};

