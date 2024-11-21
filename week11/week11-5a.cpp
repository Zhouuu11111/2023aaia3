///week11-5a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans =1;
        for(int num : nums){
            if(num>0) ans *= num;
        }
        if(ans>0) return 1;
        else if(ans==0) return 0;
        else return -1;
    }///這個寫法是錯誤的
};
