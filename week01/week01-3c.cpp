//week01-3c.cpp
#include <stdio.h>
int main()

{
	int n;
	int ans=0;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		ans += i*i;
	}
	printf("%d",ans);
}


