//week12-4.cpp
//1232. Check If It Is a Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];
        int dx = x1-x0, dy = y1-y0; //dx是x的差值 dy是y的差值
        for(int i=2; i<coordinates.size(); i++){
            int xx = coordinates[i][0], yy = coordinates[i][1];
            //希望dx*dyy == dy*dxx 但如果不相等直接失敗
            if(dx*(yy-y0) != dy*(xx-x0)) return false;
        } //前面有失敗就會提早結束 都沒失敗
        return  true; //就成功
    }
};
