//
//  main.c
//  BUAA-OJ 93 伤心的晴天小猪
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int type(int m)
{
    if (m % 4 != 0 || (m%100 == 0 && m%400!= 0)) {
        return 0;
    }else{
        return 1;
    }
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    while (n--) {
        int year,mon,day,hour,minute,second;
        scanf("%d%d%d%d%d%d",&year,&mon,&day,&hour,&minute,&second);
        int month[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31, 31, 29, 31, 30, 31, 30,31,31,30,31,30,31};

        if (mon > 12 || mon <= 0 || day <= 0 || hour < 0 || hour >= 24  || minute < 0 || minute >= 60 || second < 0 || second >= 60) {
            printf("Please wait for a moment!\n");
        }else{
            if (day <= month[type(year)][mon - 1]) {
                printf("Good bye!\n");
            }else{
                printf("Please wait for a moment!\n");
            }
        }

    }
}
//month 1-12
//hour 0 - 23
//minute 0-59
//second 0-59

