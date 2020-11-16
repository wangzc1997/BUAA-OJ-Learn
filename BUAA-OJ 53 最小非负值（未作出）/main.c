//
//  main.c
//  BUAA-OJ 53 最小非负值
//
//  Created by wangzhongchi on 2020/10/25.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0 || n%4 == 3 ) {
        printf("%d\n", 0);
    }
    if (n % 4 == 1 || n %4 == 2) {
        printf("%d\n", 1);
    }
    return 0;
}
 //意思是对的，但是没有通过
 */


#include<stdio.h>
#include<string.h>

char number[100009];

int main()
{
    unsigned int len;
    while(~scanf("%s",number))
    {
        len=strlen(number);
        switch(((len>=2?(number[len-2]-'0')*10:0)+(number[len-1]-'0'))%4)
        {
            case 0:
            case 3:
                printf("0\n");
                break;
            case 1:
            case 2:
                printf("1\n");
        }
    }
    return 0;
}
