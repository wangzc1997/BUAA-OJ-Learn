//
//  main.cpp
//  BUAA-OJ 129 2 Char magazine
//
//  Created by wangzhongchi on 2020/11/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

//https://accoding.cn/problem/129/index 题目地址
/*
 这道题的理解，出题人应该没有说明，我输入的字符串必须要是从小到大的字母表顺序来写，否则cacc肯定算是一个。
 而且GitHub上给出的答案，在k和l的写法上，就是暗示 输入的字符串必须要是从小到大的顺序来写。
 
 */

#include <stdio.h>
#include <string.h>

char s[101][1010];

int main()
{
    int n,i,k,l,j,count,p,max;
    while (~scanf("%d",&n)) {
        max = 0;
        for (i = 0; i < n; i++) {
            scanf("%s",s[i]);
        }
        for (k = 'a'; k <= 'z'; k++) {
            for (l = k; l <= 'z'; l++) {
                count = 0;
                for (i = 0; i < n; i++) {
                    p = strlen(s[i]);
                    for (j = 0; j < p; j++) {
                        if (s[i][j]!=k && s[i][j]!=l) {
                            break;
                        }
                    }
                    if (j == p) {
                        count +=p;
                    }
                }
                if (count > max) {
                    max = count;
                }
                
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
