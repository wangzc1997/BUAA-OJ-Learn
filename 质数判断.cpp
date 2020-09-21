#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	scanf("%d", &N);
	while(N--){
		int x;
		int isPrime = 1; 
		scanf("%d",&x);
		if (x == 1) isPrime = 0;
		if (x == 2) isPrime = 1;
		int k;
		for(k = 2; k < sqrt(x) ; k++){
			if(x % k == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
