
#include<stdio.h>
int main(){
    double a,b,c,d;
    char e;
    while(~scanf("%lf%lf%lf%lf%c",&a,&b,&c,&d,&e)){
            if(e=='+')printf("%.2f %.2f\n",a+c,b+d);
            if(e=='-')printf("%.2f %.2f\n",a-c,b-d);
            if(e=='*')printf("%.2f %.2f\n",a*c-b*d,b*c+a*d);
            if(e=='/')printf("%.2f %.2f\n",(a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
    }
    return 0;
}
