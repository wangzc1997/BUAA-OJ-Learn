#include <stdio.h>

int main(){
	long long i;
	long long n;
	while(scanf("%d",&i)!= EOF){
		n = 0;
		
		do{
			if(i % 2 == 0){
				i /= 2;
			}else{
				i = 3 * i + 1;
			}
			n++;
		}while(i != 1);

		printf("%ld",n);
	}
	return 0;
} 
