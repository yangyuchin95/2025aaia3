///week05-3c.cpp
///cpe UVA 483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()

{
    string line; ///一行字的字串 P1:Input
    while (getline(cin, line)){ ///讀進去
        stringstream ss(line); ///P3:斷字
        string word;
        ss>>word;
        reverse(word.begin(), word.end());
        cout<<word;
        while (ss>>word){
            reverse(word.begin(), word.end()); ///P4:reverse反過來
            cout<<" "<<word;
            ///cout<<"讀到了"<<word<<endl; ///P3
        }
        cout<<endl; ///P2:Output
    }
}
