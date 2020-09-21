#include <stdio.h>

int main(){
	int i;
	int n;
	while(scanf("%d",&i)!= EOF){
		n =0;
		while(i != 1){
			if(i % 2){
				i = 3 * i + 1;
			}else{
				i /= 2;
			}
			n++;
		}

		printf("%d\n",n);
	}
	return 0;
} 
