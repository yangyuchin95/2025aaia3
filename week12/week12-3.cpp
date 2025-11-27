//week12-3.cpp
//43. Multiply Strings
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0"; //陷阱 0乘上任何數 直接0
        int N1=num1.length(), N2=num2.length();
        vector<int> ans(N1+N2); //最多N1+N2
        for(int i=N1-1; i>=0; i--){//兩層暴力for迴圈
            for(int j=N2-1; j>=0; j--){ //倒過來的迴圈
                //num[i] vs. num[j] 要記得把字母變數值
                ans[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                if(ans[i+j+1]>9) ans[i+j] += ans[i+j+1]/10; //進位
                ans[i+j+1]=ans[i+j+1]%10; //餘數
            }
        }
        string strAns; //答案字串
        if(ans[0]==0){ //沒進位 最前面是0
            for(int i=1; i<N1+N2; i++){ //避開最前面的0位
                strAns += (char)(ans[i]+'0');
            }
        }else{ //有進位 湊齊N1+N2位
            for(int i=0; i<N1+N2; i++){
                strAns += (char)(ans[i]+'0');
            }
        }
        return strAns;
    }
};
