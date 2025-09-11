//Leetcode 28. Find the Index of the First Occurrence in a String
//在haystack乾稻草堆裡找needle針=大海撈針
//haystack:sadbutsad
//needle:sad

class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length(); //字串長度
        for(int i=0; i <= H - N; i++){ //9-3=6
        //.substr(開始、長度)部分的字串
            if(haystack.substr(i, N) == needle) return i;//找到答案
        }
        return -1;//迴圈裡面找不到針就失敗
    }
};
