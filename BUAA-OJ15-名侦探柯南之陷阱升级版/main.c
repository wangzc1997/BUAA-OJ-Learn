//
//  main.c
//  BUAA-OJ15-名侦探柯南之陷阱升级版
//
//  Created by PhD Wang's Macbook  on 2020/8/20.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int a,b,c,d,e,f;
    
    while (scanf("%d",&n) != EOF) {
            while (n--) {
            scanf("%d%d%d%d", &a,&b,&c,&f);
            if ((b-c)<= 0) {
                printf("fail\n");
            }else if(b % f ==0){
                d = a / (b -c);
            }else{
                a = a - b;
                e = a % (b - c);
                d = a / (b - c);
                if (e > 0) {
                    d++;
                }
                printf("%d\n", ++d);
            }
        }
    }
    return 0;
}
