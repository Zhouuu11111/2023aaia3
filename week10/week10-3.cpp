///week 10-3.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat{
public: ///���n�@�w�n�g
        Cat(string _name){///�p�ߩ��u  �e������gvoid
            name = _name;
        }
        string name;///�ܼ� ���
        void print(){///�禡 ��k
            cout << "I am a cat. My name is " << name << ".\n";
        }
};

int main()
{

        Cat cat1("�p��"), cat2("�p��");
        cat1.print();
        cat2.print();
}

