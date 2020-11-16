//
//  main.cpp
//  BUAA-OJ 126 String Matching
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>

char a[100005],b[100005];
int n;

int main()
{
    while (~scanf("%s%s",a,b)) {
        char *s = a;
        n = 0;
        while (s = strstr(s, b)) {  //strstr(s, b)在字符串s中查找第一次出现字符串b的位置
            //这句话意思其实是，在s中查找第一次出现b的位置，赋给s，如果整体不为0的话，则继续循环
            s++;
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}

