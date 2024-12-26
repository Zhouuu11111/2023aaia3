class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size();//幾個人
        int N = accounts[0].size();//有幾個帳戶
        int ans = 0;
        for(int i=0; i<M; i++){//I個人

            int total=0;
            for(int j=0; j<N; j++){//j個帳號
                total += accounts[i][j];
            }
            if(total>ans) ans=total;
        }
        return ans;
    }
};
