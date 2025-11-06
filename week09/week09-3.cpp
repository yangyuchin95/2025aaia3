//week09-3.cpp
//54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(), N=matrix[0].size();
        int up=0, down=M-1, left=0, right=N-1;
        //先把上下左右的邊界都宣告一個變數初始值
        vector<int> ans;
        while(up<=down && left<=right){
            for(int i=left; i<=right; i++){ //人容易理解的迴圈
                ans.push_back(matrix[up][i]);
            }
            up++; //AI說要寫up++ 上邊界內縮
            for(int i=up; i<=down; i++){
                ans.push_back(matrix[i][right]);
            }
            right--; // AI說是右邊界內縮

            if(!(up<=down && left<=right)) break ; // 邊界超過範圍 交叉 沒辦法繼續喔

            for(int i=right; i>=left; i--){ //(翻過來的迴圈)往左

                ans.push_back(matrix[down][i]);
            }
            down--;

            for(int i=down; i>=up; i--){ //(翻過來的迴圈)往右
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
