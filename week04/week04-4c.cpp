//week04-4c.cpp part1:input part2:output
//UVA 100 The 3n+1
//p3:Algorithms(while,if),p4:now
#include <iostream>
using namespace std;
int main()
{
	int a,b;//part1:input
	while(cin>>a>>b){
		int ans=0;
		int a2=a, b2=b;
		if(a2>b2) swap(a2, b2);
		for(int i=a2; i<=b2; i++){ //p5
			int now=1;//p4
			int n=i;
			while(n != 1){ //p3
				 if(n%2==1) n=3*n+1;
				 else n=n/2;
				 now++; //p4
			}
			if(now>ans) ans=now;
		}

		printf("%d %d %d\n",a,b,ans);
	}//part2:output
}
