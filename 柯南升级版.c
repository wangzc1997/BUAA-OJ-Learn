#include <stdio.h>
#define max(a,b) (a>b? a:b)
int main()
{
	int N;
	scanf("%d",&N);
	while(N--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b < a && b < c && b < d){
			printf("fail\n");
			continue;
		}
		int cur = 0;
		int rnd = 0; //这个是时间
		while(cur < a){
			rnd ++;
			cur += b;
			if(cur > a) break;
			int bot1 = cur - c;
			if(cur < d){
				cur = bot1;
				continue;
			}
			int bot2 = cur - (cur % d);
			cur = max(bot1, bot2);
		} 
		printf("%d\n", rnd);
	}
	return 0;
}
