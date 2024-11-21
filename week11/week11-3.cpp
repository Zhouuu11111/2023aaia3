/// week11-3.cpp Hasp Map 對照表強處
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["蔡育倫"] = 12750300;///左邊放字串 ， 右邊放int整數
    m["張瑋宸"] = 12750794;

    cout << "蔡育倫的學號是:" << m["蔡育倫"] << endl;
    cout << "張瑋宸的學號是:" << m["張瑋宸"] << endl;
}
