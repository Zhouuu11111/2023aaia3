
//week13-4.cpp 解 Advent of Code
//leetcode 新的playground
int main() {
    vector<int> A,B;//兩個陣列
    int a,b;//兩個數
    while(cin >> a >> b ){//step01 Input
        A.push_back(a);//step02:放到陣列
        B.push_back(b);
    }
    sort(A.begin(), A.end());//step04: sort 小到大排好
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size() ; i++){//step03: Output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << " 答案是: " << ans;
}
