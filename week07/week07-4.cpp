//week07-4.cpp
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions; //走4次
        cout<<instructions; //Debug
        int x = 0,y = 0; //x座標 y座標
        int d = 0; //d: 方向directioon 0:北 1:東 2:南 3:西
        //右轉d=(d+1) %4 取4的餘數
        //左轉d=(d-1+4) %4 = (d+3) %4 可以倒過來
        int dx[4] = {0,1,0,-1}; //前進一格時會走 x+=dx[d] 及 y+=dx[d]
        int dy[4] = {1,0,-1,0}; //這兩行是地圖2D模擬精華 決定前進多少
        for(char C:instructions){ //依字母指令 一次一動作
            if(C=='G'){ //前進一格 配合dx[d] dy[d] 前進
                x+=dx[d];
                y+=dy[d];
            } else if(C=='R'){ //右轉
                d=(d+1)%4;
            }else if(C=='L'){ //左轉
                d=(d+3)%4;
            }
        } //離開迴圈時會一直走 有時候走不回來 有時候會回來
        //cout<<'x'<<'y'<<y<<endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
