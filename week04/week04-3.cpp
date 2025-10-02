//week04-3.cpp
//66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); //陣列大小
        for (int i=N-1; i>=0; i--){ //倒過來的迴圈
            if(digits[i]==9){ //要進位
                digits[i]=0; //設成0繼續做不結束
            }else{
                digits[i]++;
                return digits; //把全部的陣列當答案return
            }
        }
        digits.insert(digits.begin(),1); //最左邊要插入1
        return digits;
    }
};
