///week11-2.cpp c++11 �\��
#include <iostream>
#include <vector>
#include <unordered_map> ///c++ 11 �\��
///Setting �]�w - compiler , ��c++11

using namespace std;

int main()
{

        vector<int> a;
        unordered_map<int,int> m;
        m[999] = 13; ///Hash map �����, �i�H�ֳt���Y�ӭ�
        m[137] = 7;
        cout << "m[999] ���ȬO" << m[999] << endl;
        cout << "m[137] ���ȬO" << m[137] << endl;


        return 0;
}
