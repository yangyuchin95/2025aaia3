//week06-4.cpp
//學習計畫Simulation模擬第一題 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0; //一開始在原點O Origin
        for(char c : moves){ //C++的進階迴圈
            if(c=='U'){ //上
                y++;
            }else if(c=='D'){ //下
                y--;
            }else if(c=='L'){ //左
                x--;
            }else if(c=='R'){ //右
                x++;
            }
        } //最後還有留在原點(0,0)嗎?
        if(x==0 && y==0) return true;
        else return false;
    }
};
