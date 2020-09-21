//
//  main.c
//  判断三角形
//
//  Created by PhD Wang's Macbook  on 2020/9/20.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c;
    while (scanf("%d%d%d",&a,&b,&c)!= EOF) {
        if (a+b <= c || a+c <= b || b+c <= a) {
            printf("wrong\n");
        }else if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
            printf("good\n");
        }else if (a==b || a==c || b == c){
            printf("perfect\n");
        }else{
            printf("just a triangle\n");
        }
    }
    return 0;
}
