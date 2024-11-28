/// week12-1.cpp  了解 Linked List => Node
#include <string>
#include <iostream>
using namespace std;
///struct Node {}; 打好大括號就會生下括號、分號
///class cat {}; 打好大括號就會生下括號、分號
struct Node {
    int val;///Value 值
};
class Cat {
public:
    string name;
};

int main()
{
    Cat cat1;  /// 大寫形狀 ， 宣告 小寫的變數
    cat1.name = "Kitty";
    Node node;
    node.val = 1;

}///執行沒錯誤即可
