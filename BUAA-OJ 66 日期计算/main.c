//
//  main.c
//  BUAA-OJ 66 日期计算
//
//  Created by wangzhongchi on 2020/10/25.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

/*
#include<stdio.h>

int type(int m)
{
    if(m%4!=0||(m%100==0&&m%400!=0))  //这个是判断闰年的
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};   //因为2000.1.1是Saturday week[0]是Saturday，这个[10]应该是某个最大字符串的长度，也就是说 如果我们要用字符串，不但要多少个设成多少行，而且每个字符的最大长度也要设置成列数，这样的，我们要做成类似二维数组的形式。
int year[2]={365,366};
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31}; //这是一个二维数组，分别是year[1]和year[2]对应的情况

int main()
{
    int days,dayofweek;
    int i=0,j=0;
    while(~scanf("%d",&days))
    {
        dayofweek=days%7;
        for(i=2000;days>=year[type(i)];i++)  //如果days >= 365 or 366 ， 则年份加1，每一次循环，days减去365or366，直到days小于365or366，循环结束，输出的i就是该日期是多少年
        {
            days-=year[type(i)];
        }
        for(j=0;days>=month[type(i)][j];j++) //这个是输出该日期是哪个月，跟year的类型有关，这个时候j只是个月份，j从1到12月，days从一个很大的数一直减这些月的不同天数，直到days小于某个月份的天数，然后就可以确定是哪个月份了
        {
            days-=month[type(i)][j];
        }
        printf("%d-%02d-%02d %s\n",i,j+1,days+1,week[dayofweek]);  //02d就是默认情况下，数据宽度不够2位是用空格填补的，且右对齐输出，但是因为2d前面有0，所以输出的时候是00 01 02 03 04...等这种形式
    }
}*/

#include <stdio.h>

int type( int m)
{
    if (m % 4 !=0 || (m % 100 == 0 && m % 400 != 0)) {
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    int days, dayofweek;
    int i = 0,j = 0;
    
    char week[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int year[2] = {365,366};
    int month[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31, 31, 29, 31, 30, 31, 30,31,31,30,31,30,31};
    
    while (scanf("%d",&days)!=EOF) {
        dayofweek = days % 7;
        
        for (i = 2000; days >= year[type(i)]; i++) {
            days -= year[type(i)];
        }
        for (j = 0; days >= month[type(i)][j]; j++) {  //j从0开始
            days -= month[type(i)][j];
        }
        
        printf("%d-%02d-%02d %s\n", i, j+1, days+1, week[dayofweek]);
    }
}
