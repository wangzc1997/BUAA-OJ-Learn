#include<stdio.h>
int g(int a,int b){
    int c;
    while(b){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    double a,b,c,d;
    int n;
    while(~scanf("%d",&n)){
        for(int i=0;i<n;i++){
            scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
            int e,f;
            e=a*d+c*b;
            f=b*d;
            int k=g(e,f);
            printf("%d %d\n",e/k,f/k);
        }
    }
    return 0;
}
