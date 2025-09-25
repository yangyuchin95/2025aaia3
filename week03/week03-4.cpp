//week03-4.cpp
//120. Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]��i�h����j�Ӽ�
        int N = triangle.size();
        for(int i=N-2; i>=0; i--){ //�˹L�Ӫ��j��
            for(int j=0; j<=i; j++){ //�q����k�A�ai�h��0...i�ӼƳ��n��s
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                //�ݤU����ӿ�ܡA��̤p��
            }
        }
        return triangle[0][0];
    }
};
