//week05-1.cpp
//58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //��r���ܦ�cin iostream
        string word; //�r�ꪺword
        //ss >> word //��cin >> word
        //cout << "Ū��F" << word << "\n";
        while(ss>>word){ //�@��Ū�i��
            //�̭��ƻ򳣨S��
        }

        return word.length();
    }
};
