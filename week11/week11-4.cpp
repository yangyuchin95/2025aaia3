//week11-4.cpp
//67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1,j=b.length()-1; //最右邊個位數
        vector<int> ans;
        int carry=0;
        while(i>=0 || j>=0){ //想要a[i] vs. b[j]來進行加法
            int now=carry;
            if(i>=0){
                now += a[i]-'0'; //字母a[i] 減掉'0'變數值
                i--; //側過來的圈 for(int i=N-1; i>=0; i--)
            }
            if(j>=0){
                now += b[j]-'0';
                j--;
            }
            ans.push_back(now%2); //加完後放答案
            carry=now/2; //看有沒有進位
        }
        if (carry>0) ans.push_back(carry);
        string strAns;
        for(int i=ans.size()-1; i>=0; i--){
            strAns=strAns+(char)(ans[i]+'0');
        }
        return strAns;
    }
};
