//Leetcode 28. Find the Index of the First Occurrence in a String
//�bhaystack���_���̧�needle�w=�j�����w
//haystack:sadbutsad
//needle:sad

class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length(); //�r�����
        for(int i=0; i <= H - N; i++){ //9-3=6
        //.substr(�}�l�B����)�������r��
            if(haystack.substr(i, N) == needle) return i;//��쵪��
        }
        return -1;//�j��̭��䤣��w�N����
    }
};
