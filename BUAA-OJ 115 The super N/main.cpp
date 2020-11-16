//
//  main.cpp
//  BUAA-OJ 115 The super N
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>

char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
char op[2];
char tmp;
char map[15][15];
int t,n;

int main()
{
    scanf("%d",&t);
    while (t--) {
        memset(map, 0, sizeof(map));
        //初始化的过程
        scanf("%s%d",op,&n);
        tmp = op[0];
        int i;
        for (i = 0 ; i < n; i++) {
            int j;
            for (j = 0; j < n; j++) {
                map[i][j] = ' ';
            }
        }
        //初始化结束
        int start = tmp - 'a';
        map[0][0] = alphabet[start];
        start = (start + 1) % 26;  //%26可以让数字一直在1-26之间进行循环。
        //先把最左边那一列输入数字
        for (i = 1; i < n; i++) {
            map[i][0] = alphabet[start];
            start = (start + 1) % 26;
        }
        //再输入对角线这一列，注意，因为map[n-1][n-1]是属于最后一列的最末元素，所以不在此时填写，i只到n-2.同理第一个元素也是这样的。
        for (i = 1; i < n-1; i++) {
            map[i][i] = alphabet[start];
            start = (start + 1) % 26;
        }
        for (i = 0; i < n; i++) {
            map[i][n-1] = alphabet[start];
            start = (start + 1) % 26;
        }
        for (i = 0; i < n; i++) {
            puts(map[i]); //直接输出每一行
        }
    }
}
/*
 输出字符串除了用printf("%s",a)之外，还可以使用puts()函数，两者是等价的。功能是将字符串输出到屏幕，输出时遇到'\0'才会停止。
 
 但是相比较于printf("输出结果是： %s",a);
 puts不能写 puts(输出结果是：a); 这样写是错误的。
 
 
 
 */
