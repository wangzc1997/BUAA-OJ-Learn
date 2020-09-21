#include <stdio.h>
#include <math.h>

int main()
{
	int x0,y0,z0;
	int n;
	while(scanf("%d%d%d%d",&x0,&y0,&z0,&n)!=EOF){  //不要一遇到这种情况，就用while(n--) 这些是不一样的用法！！！ 
		double s[n+1];
		int m = 0;
		s[m] = 0;
		for(int i = 1; i<= n;i++){
			int x,y,z;
			scanf("%d%d%d",&x,&y,&z);
			s[i] = sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0)+(z-z0)*(z-z0));
			if(s[i] > s[m]){
				m = i;
			}
		}
		int k;
		scanf("%d",&k);
		printf("%d %.6f\n",m, s[m] *k * 2);
	}
}
