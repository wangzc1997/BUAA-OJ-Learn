//
//  main.cpp
//  BUAA-OJ 92 jhljx分解质因数
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
int j = 0;
int a[10000];
int b;
int fjzys(int k)
{
    int i = 2;
    while ( k >= i) {
        if (k % i == 0) {
            a[j] = i;
            k /= i;
            i = 2;
            j++;
        }else{
            i++;
        }
    }
    return 0;
}

int main()
{
    int n;
    while (scanf("%d",&n)!= EOF) {
        fjzys(n);
        
        for (b = 0; b < (j-1); b++) {
            printf("%d",a[b]);
            printf("*");
        }
        printf("%d\n",a[j-1]);
    }
}

//上面这种是一种思路 太麻烦了https://baike.baidu.com/item/%E5%88%86%E8%A7%A3%E8%B4%A8%E5%9B%A0%E6%95%B0/2253749?fr=aladdin#3_5
