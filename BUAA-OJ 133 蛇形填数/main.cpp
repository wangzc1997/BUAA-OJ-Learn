//
//  main.cpp
//  BUAA-OJ 133 蛇形填数
//
//  Created by wangzhongchi on 2020/11/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    while (~scanf("%d",&n)) {
        int cnt = 0;
        int i,j;
        for (j = 0; j <n; j++) {
            if (j & 1) {  //这个应该是控制第几行，从左到右是加还是减的关键所在
                cnt += n;
                for (i = 0; i<n; i++) {
                    printf("%4d",cnt--);
                }
                cnt += n;
            }else{
                for (i = 0; i < n; i++) {
                    printf("%4d",++cnt);
                }
            }
            puts(""); //这个执行的是换行操作，puts("");
        }
        puts("");
    }
}
