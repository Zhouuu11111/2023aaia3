/// week11-3.cpp Hasp Map ��Ӫ�j�B
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["���|��"] = 12750300;///�����r�� �A �k���int���
    m["�i޳�f"] = 12750794;

    cout << "���|�۪��Ǹ��O:" << m["���|��"] << endl;
    cout << "�i޳�f���Ǹ��O:" << m["�i޳�f"] << endl;
}
