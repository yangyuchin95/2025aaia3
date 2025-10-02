//week04-4b.cpp part1:input part2:output
//UVA 100 The 3n+1
//p3:Algorithms(while,if),p4:now
#include <iostream>
using namespace std;
int main()
{
	int a,b;//part1:input
	while(cin>>a>>b){
		int ans=0;
		int now=1;//p4
		while(n != 1){ //p3
			 if(n%2==1) n=3*n+1;
			 else n=n/2;
			 now++; //p4
		}


		printf("%d %d %d\n",a,b,ans);
	}//part2:output
}
