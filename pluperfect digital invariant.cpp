#include <stdio.h>

int main()
{
	int T;
	int a,b;
	scanf("%d",&T);
	int sum=0;
	while(T--){
		scanf("%d %d",&a,&b);
		int i ;
		int ret=0 ;
		for(i = a; i<=b; i++)
		{
			while(i > 0){
				ret = i % 10;
				sum = sum + ret * ret * ret;
				i /= 10;
			}
			if(sum == i) printf("%d\n",i);
		}
	}
	return 0;
 } 
