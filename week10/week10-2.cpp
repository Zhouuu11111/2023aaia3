///week 10-2.cpp 進階的class
#include <iostream>
#include <string>
using namespace std;

class Cat{
public: ///重要一定要寫
        string name;///變數 資料
        void print(){///函式 方法
            cout << "I am a cat. My name is " << name << ".\n";
        }
};

int main()
{

        Cat cat1, cat2;
        cat1.name = "小花";
        cat2.name = "小白";
        cat1.print();
        cat2.print();
}
