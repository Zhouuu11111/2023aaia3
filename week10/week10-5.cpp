// week10-5.cpp Math �ĤT�D
//LeetCode
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;//�}�l�ɡA�S�s��
        for(int c: bills){//�i��for�j��
            if(c==5) d5++;
            if(c==10){
                if(d5>0) {
                d10++;//��10
                d5--;//��5
                }else return false;//�S��k���
            }
            if(c==20){
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;//�S��k���
            }
        }
    return true;
    }
};
