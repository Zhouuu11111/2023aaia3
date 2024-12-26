///week07-2b

class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0; i<3 ; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    bool myTestWin(int board[3][3],int now){
        if(board[0][0]==now &&  board[0][1]==now && board[0][2]==now) return true;//上面橫
        if(board[1][0]==now &&  board[1][1]==now && board[1][2]==now) return true;//中間橫
        if(board[2][0]==now &&  board[2][1]==now && board[2][2]==now) return true;//上面橫

        if(board[0][0]==now &&  board[1][0]==now && board[2][0]==now) return true;//左直線
        if(board[0][1]==now &&  board[1][1]==now && board[2][1]==now) return true;//中直線
        if(board[0][2]==now &&  board[1][2]==now && board[2][2]==now) return true;//右直線
        //對角線座標
        if(board[0][0]==now &&  board[1][1]==now && board[2][2]==now) return true;//左上右下
        if(board[2][0]==now &&  board[1][1]==now && board[0][2]==now) return true;//右上左下
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};
        int now = 1;
        for(auto move : moves){
            int i = move[0], j = move[1];
            board[i][j] = now;
            //myPrintBoard(board);
            if(myTestWin(board, now)){
                if(now==1) return "A";
                else return "B";
            }
            now = 3 - now;
        }
        if(moves.size()==9) return "Draw";//沒人勝利的話
        else return "Pending";//繼續下
    }
};
