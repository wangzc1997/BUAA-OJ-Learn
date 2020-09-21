#include <stdio.h>

int main()
{	
	double a,b,c,d;
	char Y;
	while(scanf("%lf %lf %lf %lf %c",&a,&b,&c,&d,&Y)!= EOF){
		switch(Y){
			case'+':printf("%.2f %.2f\n", a+c, b+d); break;
			case'-':printf("%.2f %.2f\n", a-c, b-d); break;
			case'*':printf("%.2f %.2f\n", a*c - b*d, b*c + a*d); break;
			case'/':printf("%.2f %.2f\n", (a*c + b*d )/(c*c + d*d),(b*c - a*d)/(c*c + d*d)); break;
		}
	}
	return 0;
 } 

