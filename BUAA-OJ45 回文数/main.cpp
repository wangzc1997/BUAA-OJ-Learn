//
//  main.cpp
//  BUAA-OJ45 回文数
//
//  Created by wangzhongchi on 2020/10/24.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>  //C语言中没有bool类型，如果要使用 加上stdbool.h
#define eps 1e-6

bool juage(double x);

int main()
{
    double n;
    while (scanf("%lf",&n)!= EOF) {
        if (juage(n)) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}

bool juage(double x)
{
    x += eps;
    long long t;
    t = 100000 * x;
    
    if ((int)(x)%10 != ((int)(x*10))%10) {
        return  false;
    }
    if ((int)(x / 10) % 10 != ((int)(x * 100)% 10)) {
        return false;
    }
    if ((int)(x / 100) % 10 != ((int) (x * 1000)%10)) {
        return false;
    }
    if ((int) (x/1000)%10 != ((int) (x*10000) % 10)){
        return false;
    }
    if ((int) (x/10000)%10 != t % 10) {
        return false;
    }
    return true; //这一句别少了
}

/*
 C语言中没有bool类型，如果要使用
 c99后加上 #include <stdbool.h>
 或者直接自己定义一个bool类型
 typedef int bool;
 #define TRUE 1;
 #define FALSE 0;
 
 
 下面的程序放到C++是对的，就是
 #include <stdio.h>
 #define eps 1e-6

 bool juage(double x);

 int main()
 {
     double n;
     while (scanf("%lf",&n)!= EOF) {
         if (juage(n)) {
             printf("Yes\n");
         }else{
             printf("No\n");
         }
     }
 }

 bool juage(double x)
 {
     x += eps;
     long long t;
     t = 100000 * x;
     
     if (int(x)%10 != (int(x*10))%10) {
         return  false;
     }
     if (int(x / 10) % 10 != (int(x * 100)% 10)) {
         return false;
     }
     if (int(x / 100) % 10 != (int (x * 1000)%10)) {
         return false;
     }
     if (int (x/1000)%10 != (int (x*10000) % 10)){
         return false;
     }
     if (int (x/10000)%10 != t % 10) {
         return false;
     }
     return true; //这一句别少了
 }
 
 但是在C语言里面过不了，刚开始是因为C语言中没有bool，后来添加了stdbool.h，后来又提示错误，int，
 原来int要加上括号 (int)x， 而非 int(x), 最好写成 (int)(x)
 
 其实就算没有bool，也可以直接int judge(double x);  里面的false改成0， true改成1 参考下面C语言版的。
 
 */
