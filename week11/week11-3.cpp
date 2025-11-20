//week11-3.cpp
//860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0,d10=0,d20=0;
        for (int bill:bills){ //c++進階 for迴圈
            if(bill==5) d5++; //順利拿到5元鈔
            if(bill==10) { //客人給10 要找5
                if(d5<1) return false; // 失敗
                d10++; //拿到10元鈔
                d5--; //找5元鈔
            }
            if(bill==20){
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5 -=3;
                }else return false;
            }
        }
        return true; //順利賣光，成功
    }
};
