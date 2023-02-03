#include <iostream>
#include "Strbool.h"
using namespace std;
int main() {
    Stroka a("1223123");
    cout <<a <<endl;
    cin >>a;
    cout <<a<<endl;

    Stroka f("1111");
    a = f;
    cout <<a <<endl;
    Strbool b("1123123");
    cout <<b <<endl;
    Strbool c("00011101");
    cout <<c <<endl;

    cout <<c.sixteen();
}
