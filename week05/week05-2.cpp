///week05-2.cpp
///���x stringstream
#include <iostream>
#include <sstream>
#include <string> ///�ڭ̪��r��string
using namespace std;
int main()

{
    cout << "�п�J�@�q�^��A�̭��i���Ů�: ";
    string s; ///�r��s
    getline(cin, s); ///�@��Ū�J�@��A��Js
    cout << "Ū��s�r��: " << s << endl;
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<"��1�Ӧr: "<<word<<endl;
    }
}
