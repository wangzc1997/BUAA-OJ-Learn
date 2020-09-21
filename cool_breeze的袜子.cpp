#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	while(scanf("%d %d",&m,&n)!=EOF){
		int hd = 0;
		int uhd = 0;
		if(m > n){
			hd = n;
			uhd = (m-n)/2;
		}else{
			hd = m;
			uhd = (n - m)/2;
		}
		printf("%d %d\n",hd,uhd);
	}
	return 0;
}
