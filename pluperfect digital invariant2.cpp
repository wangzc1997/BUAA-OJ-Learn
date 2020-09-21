#include <stdio.h>

int main()
{
	int T;
	int a,b;
	scanf("%d",&T);
	int sum=0;
	int count = 0;
	while(T--){
		scanf("%d %d",&a,&b);
		int i ;
		int ret=0 ;
		for(i = a; i<=b; i++)
		{	
			if(a >= 100 && a <= 1000){
				int ret1 = i % 10;
				int ret2 = i/10%10;
				int ret3 = i / 100;
				int sum = ret1*ret1*ret1 + ret2*ret2*ret2 + ret3*ret3*ret3;
				if(sum == i){
					count = 1;
					printf("%d ",i);
				}
			}
		}
		if(count = 0) printf("-1");
		printf("\n");
	}
	return 0;
 } 
