
//week13-4.cpp �� Advent of Code
//leetcode �s��playground
int main() {
    vector<int> A,B;//��Ӱ}�C
    int a,b;//��Ӽ�
    while(cin >> a >> b ){//step01 Input
        A.push_back(a);//step02:���}�C
        B.push_back(b);
    }
    sort(A.begin(), A.end());//step04: sort �p��j�Ʀn
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size() ; i++){//step03: Output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << " ���׬O: " << ans;
}
