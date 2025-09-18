///week02-5.cpp
///389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����B�έp26�Ӧr���X�{�X��
        int A[256]={};  //�}�C�ŧi�A�}�C�Τj�A���w�]��0
        for(int i=0; i<s.length(); i++){
            char c = s[i]; //����i�Ӧr��
            A[c]++; //������i��������l
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--; //�q��l���X�r��
            if(A[c] < 0) return c; //�r�������ΡA�N�O�ʥ�
        }
        return 0;
    }
};
