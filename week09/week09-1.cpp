class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size();//�X�ӤH
        int N = accounts[0].size();//���X�ӱb��
        int ans = 0;
        for(int i=0; i<M; i++){//I�ӤH

            int total=0;
            for(int j=0; j<N; j++){//j�ӱb��
                total += accounts[i][j];
            }
            if(total>ans) ans=total;
        }
        return ans;
    }
};
