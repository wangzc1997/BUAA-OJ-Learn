//
//  main.c
//  BUAA-OJ 71 Ryan's confusing words
//
//  Created by wangzhongchi on 2020/10/31.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    char a[5];  //这个5没啥用处，因为下面实现的只是两个输入的字符中间的那些字符，设成5只是确保可以放得下。
    while (scanf("%s", a)!=EOF) {
        char i = a[0];
        while (i!=a[1]) {
            printf("%c",i);
            if (i== 'z') {
                i = 'a';
            }else if (i == 'Z'){
                i = 'A';
            }else{
                i++;  //i++确保会遍历输入字符串之间的所有字符
            }
        }
        printf("%c\n", a[1]); //这个只是把最后一个字符a[1]给加上去.
    }
    
}
//%c是输出一个字符， %s是输出一个字符串
