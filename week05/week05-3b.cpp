///week05-3b.cpp
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
        while (ss>>word){
            reverse(word.begin(), word.end()); ///P4
            cout<<"讀到了"<<word<<endl; ///P3
        }
        cout << line <<endl; ///P2:Output
    }
}
