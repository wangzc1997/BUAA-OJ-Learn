//
//  main.c
//  BUAA-OJ 54 Ryans ISBN
//
//  Created by wangzhongchi on 2020/10/25.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include<stdio.h>

int main()
{
    char ch[100]={0};
    int sum,i;
    while(~scanf("%s",ch))  //这个输入时是输入的字符，即虽然我们输入的数字，但是也要当成字符来看，因为有'-'
    {
        i=0;
        sum=0;
        sum=sum+(ch[i]-'0');
        for(i=2;i<5;i++)   //这个i如果是从3开始，那么输入的时候第二个输入成'-'，那么输出时该位置也是'-'。
        {
            sum=sum+((ch[i]-'0')*i);  //这个ch[i] - '0' 因为这个ch里面是字符，我们要用这个字符的数值，所以减去'0'，就变成了0-9，就可以用数值了
        }
        for(i=6;i<11;i++)
        {
            sum=sum+((ch[i]-'0')*(i-1)); //因为此时就拿最后一个来说，应该是第10个数乘以9，所以是ch[i]-'0' * (i-1)
        }
        sum=sum%11;
        if(sum==10)
        {
            if(ch[12]=='X')
            {
                printf("Right\n");
            }
            else
            {
                ch[12]='X'; //要修正然后输出
                printf("%s\n",ch) ;
            }
        }
        else if(sum==(ch[12]-'0'))
        {
            printf("Right\n");
        }
        else
        {
            ch[12]=(char)(sum+'0'); //这个步骤也是修正，然后是数值再变成字符串！！！
            printf("%s\n",ch);
        }
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int sum, i;
    char ch[100] = {0};
    while (scanf("%s",ch)!=EOF) {
        sum = 0;
        i = 0;
        //因为我们这个sum后面要用整型int形式代入计算，所以我们要-'0'，使之变成0~9。
        sum = sum + (ch[i] - '0');
        for (i = 2; i < 5; i++) {
            sum = sum + ((ch[i] - '0') * i);
        }
        for (i = 6; i < 11; i++) {
            sum = sum + ((ch[i] - '0') * (i-1));
        }
        sum = sum % 11;
        if (sum == 10) {
            if (ch[12] == 'X') {
                printf("Right\n");
            }else{
                ch[12] = 'X';
                printf("%s\n", ch);
            }
        }else if(sum == (ch[12] - '0')){
            printf("Right\n");
        }else{
            ch[12] = (char)(sum + '0'); //因为ch[12]肯定是个字符，所以不但要加上'0'还要加一个(char)
            printf("%s\n", ch);
        }

    }
    return 0;
}
//https://accoding.cn/problem/54/index
