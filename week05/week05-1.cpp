//week05-1.cpp
//58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //把字串變成cin iostream
        string word; //字串的word
        //ss >> word //像cin >> word
        //cout << "讀到了" << word << "\n";
        while(ss>>word){ //一直讀進來
            //裡面甚麼都沒做
        }

        return word.length();
    }
};
