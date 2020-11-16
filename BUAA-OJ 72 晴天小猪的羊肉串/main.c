//
//  main.c
//  BUAA-OJ 72 晴天小猪的羊肉串
//
//  Created by wangzhongchi on 2020/10/31.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>

char s[300];

int main()
{
    int n;
    
    while (scanf("%d",&n)!=EOF) {
            scanf("%s",s);
            int i;
            for (i = 0; i < n-2; i++) {
                if ((s[i] + 1 == s[i+1]) && (s[i]+2 == s[i+2])) {
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
            }
    }
    return 0;
}*/
//上面这样写，在失败的时候会出现一堆NO
#include <stdio.h>
#include <string.h>

char s[300];

int isJRC(char s[], int n)
{
    int i;
    for (i = 0; i < n-2; i++) {
        if (s[i]+1 == s[i+1] && s[i]+2 == s[i+2]) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    
    while (scanf("%d",&n)!=EOF) {
        scanf("%s", s);
        if(isJRC(s, n)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
