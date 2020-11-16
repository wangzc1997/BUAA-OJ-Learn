//
//  main.c
//  BUAA-OJ 81 第二小整数
//
//  Created by wangzhongchi on 2020/11/3.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a[100];

int compare(const void * a, const void *b){
    return *(int*)a - *(int *)b;
} //这个好像是固定搭配 对一维数组的排序实例https://baike.baidu.com/item/qsort/4747970?fr=aladdin

int main(int argc, const char * argv[]) {
    int c;
    scanf("%d", &c);
    while (c--) {  //那么循环中只要考虑其中一种情况即可
        memset(a,0,sizeof(a)); //每一次把数组给初始化，memset可以让a填空所有的0
        int n;
        scanf("%d",&n);
        int i;
        for (i = 0; i < n; i++) {  //这种输入的方式也是很好，顺便把数值给放进数组中
            scanf("%d", &a[i]);
        }
        qsort(a,n,sizeof(int), compare);
        printf("%d\n",a[1]);  //拍完序 第二个就是第二小的数，从小到大排序
    }
}
