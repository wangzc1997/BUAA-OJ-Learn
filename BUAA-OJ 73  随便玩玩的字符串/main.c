//
//  main.c
//  BUAA-OJ 73  随便玩玩的字符串
//
//  Created by wangzhongchi on 2020/10/31.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>

char a[1000];
int main(int argc, const char * argv[]) {
    int n;
  
    while (scanf("%d",&n) != EOF) {  //记住这种写法和下面的scanf("%s",a);
        scanf("%s",a);
        
        int i;
        int m;
        for (i = 0; i < n; i++) {
            m = a[i] - '0';
            if (m >= 0 && m <= 9) {
                printf("%d",m);
            }else{
                printf("%d", m+48);
            }
        }
        printf("\n");
    }
}
