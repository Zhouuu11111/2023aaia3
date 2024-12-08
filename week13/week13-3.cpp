//week13-3.cpp 解 Advent of Code
//leetcode 新的playground
int main() {
    vector<int> A,B;//兩個陣列
    int a,b;//兩個數
    while(cin >> a >> b ){//step01 Input
        A.push_back(a);//step02:放到陣列
        B.push_back(b);
    }
    for(int i=0; i<A.size() ; i++){//step03: Output
        cout << A[i] << " ";
    }
}
