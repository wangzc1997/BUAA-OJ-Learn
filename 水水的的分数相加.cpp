#include <stdio.h>
int maxG(int a, int b);
int main()
{
	int T;
	double a,b,c,d;
	scanf("%d",&T);
	int max;
	while(T--){
		scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
		int e,f;
		e = a*d + c*b;
		f = b*d;
		max = maxG(e,f);
		e = e / max;
		f = f/max;
		printf("%d %d\n",e,f);
	}
	return 0;
 } 
 int maxG(int a, int b){
	int c;
	while(b){
		c = a%b;
		a = b;
		b = c;
	}
	return a;
 }
