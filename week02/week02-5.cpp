///week02-5.cpp
///389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //分類、統計26個字母出現幾次
        int A[256]={};  //陣列宣告，陣列用大括號預設值0
        for(int i=0; i<s.length(); i++){
            char c = s[i]; //找到第i個字母
            A[c]++; //分類放進對應的桶子
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--; //從桶子拿出字母
            if(A[c] < 0) return c; //字母不夠用，就是缺它
        }
        return 0;
    }
};
