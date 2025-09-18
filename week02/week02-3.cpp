///week02-3.cpp 使用c++ 2011新版的字串stoi()功能
#include <iostream> ///讀入、印出資料
#include <string> ///字串功能
using namespace std; ///使用命名空間標準的std
int main()

{
	string a; ///宣告字串
	string ans; ///宣告字串
	cin>>a; ///讀入字串
	int N = a.length(); ///字串a的長度

	for(int i=N-1; i>=0; i--){ ///倒過來的迴圈
		ans += a[i]; ///在迴圈裡把a[i]塞到ans後面
	}
	cout << a << '+' << stoi(ans) << '='
		 << stoi(a) + stoi(ans) << endl;
}///stoi() is "string to int "把字串變整數
