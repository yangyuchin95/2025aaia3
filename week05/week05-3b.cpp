///week05-3b.cpp
///cpe UVA 483 �˹L��
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()

{
    string line; ///�@��r���r�� P1:Input
    while (getline(cin, line)){ ///Ū�i�h
        stringstream ss(line); ///P3:�_�r
        string word;
        while (ss>>word){
            reverse(word.begin(), word.end()); ///P4
            cout<<"Ū��F"<<word<<endl; ///P3
        }
        cout << line <<endl; ///P2:Output
    }
}
