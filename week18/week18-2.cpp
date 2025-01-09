//week18-2 �ǲ߭p�e
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> ans;

        int i = 0, j = 0;
        int d= 0;    // ���k�B���U�B�����B���W
        int di[4] = {0, 1, 0, -1};
        int dj[4] = {1, 0, -1, 0};

        while( ans.size()< M*N ){//���פ����A�~��[
            ans.push_back( matrix[i][j]);
            matrix[i][j] = 999;//�е��ܤj����A�N��ιL�A���A��
            int i2 = i + di[d], j2 = j + dj[d];
            if(i2<0 || j2<0 || i2>=M || j2>=N || matrix[i2][j2]==999){//�p�G�U�@�Ӽ������OR���L
                d = (d+1)% 4;//�N���s
            }
            i = i + di[d];//���U�@��
            j = j + dj[d];//���U�@��
        }
        return ans;
    }
};
