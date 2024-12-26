//week07-3b.cpp leetcode657
//二合一
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        int x= 0 , y=0 ,dir=0; //方向 0右 1下 2左 3上
        for(char c : instructions){
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir + 3 ) % 4;//-1 倒過來轉 有負數 +4
            if(c=='R') dir = (dir + 1 ) % 4;//+1右、下、左、上、再右
        }
    if(x==0 && y==0) return true;
    else if(dir==0) return false;
    else return true;
    }
};
