///week10-1.cpp 類別 class
#include <iostream>
using namespace std;

class Cat{
public:
    void print(){
        cout << "I am a cat. meow meow\n";
    }
};
class Mouse {
public:
    void print(){
        cout << "I am a mouse. chi chi\n";
        }
};
int main()
{///大寫 在小寫
    Cat cat1, cat2;
    cat1.print();
    cat2.print();
    Mouse mouse1, mouse2;
    mouse1.print();
    mouse2.print();


}
