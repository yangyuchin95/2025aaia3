///week05-2.cpp
///熟悉 stringstream
#include <iostream>
#include <sstream>
#include <string> ///我們的字串string
using namespace std;
int main()

{
    cout << "請輸入一段英文，裡面可有空格: ";
    string s; ///字串s
    getline(cin, s); ///一次讀入一行，放入s
    cout << "讀到s字串: " << s << endl;
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<"有1個字: "<<word<<endl;
    }
}
