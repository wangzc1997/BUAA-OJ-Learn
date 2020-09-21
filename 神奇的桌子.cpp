#include <stdio.h>

int main()
{
	int n,x;
	while(scanf("%d %d",&n,&x)!= EOF){
		int i,j;
		int count = 0;
		for(i = 1; i<=x && i <=n; i++){
			if(x % i == 0 ){
				j = x/i;
				if(j <= n ){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
 } 
