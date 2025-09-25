//week03-4.cpp
//120. Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]第i層的第j個數
        int N = triangle.size();
        for(int i=N-2; i>=0; i--){ //倒過來的迴圈
            for(int j=0; j<=i; j++){ //從左到右，地i層有0...i個數都要更新
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                //看下面兩個選擇，找最小的
            }
        }
        return triangle[0][0];
    }
};
