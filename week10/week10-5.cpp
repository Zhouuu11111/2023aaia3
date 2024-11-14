// week10-5.cpp Math 第三題
//LeetCode
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;//開始時，沒零錢
        for(int c: bills){//進階for迴圈
            if(c==5) d5++;
            if(c==10){
                if(d5>0) {
                d10++;//拿10
                d5--;//扣5
                }else return false;//沒辦法找錢
            }
            if(c==20){
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;//沒辦法找錢
            }
        }
    return true;
    }
};
