//
//  main.cpp
//  BUAA-OJ 132 胡乱走的和尚
//
//  Created by wangzhongchi on 2020/11/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>

int dic[205][2] = {0};

char o[5]; //盛放 D R L U 四个方向键

int main()
{
    dic['D'][1] = dic['R'][0] = 1;  //因为向下和向右都是加上
    dic['U'][1] = dic['L'][0] = -1; //向上和向左都是减
    //这个很聪明，D和U都是y的变化（纵向），R,L都是x的变化（横向）
    
    
    int t,n,M,x,y,oo,flag = 1;
    //t:case总数
    //n,M：方阵边长和指令数量
    //x y：指的是小和尚的坐标
    //oo：表示走了几步
    //flag =1 表示还在矩阵中，没有越界
    for (scanf("%d",&t); t--; flag = 1) {
        scanf("%d%d",&n,&M);
        x = y = 1;
        int m;
        for (m = 0; m < M; m++) {
            scanf("%s%d",o,&oo);
            if (flag) {
                x += dic[o[0]][0]*oo;
                y += dic[o[0]][1]*oo;
                if (x<1||y<1||x>n||y>n) {
                    flag = 0;
                }
            }
        }
        if (flag) {
            printf("%d\n",x*n+y-n); //前面并没有直接乘以n，而是把所有的都走完之后，最后统一x方向上乘以n
        }else{
            printf("WanQuanGaoBuDong!");
        }
    }

}*/

#include <stdio.h>

int dic[205][2] = {0};

char o[5];

int main()
{
    dic['D'][1] = dic['R'][0] = 1;
    dic['U'][1] = dic['L'][0] = -1;
    
    int t,n,M,x,y,oo,flag = 1;
    scanf("%d",&t);
    while (t--) {
        flag = 1;
        scanf("%d%d",&n,&M);
        x = y = 1;
        int m;
        for (m = 0; m < M; m++) {
            scanf("%s%d",o,&oo);
            if (flag) {
                x += dic[o[0]][0] * oo;
                y += dic[o[0]][1] * oo;
                if (x<1||y<1||x>n||y>n) {
                    flag = 0;
                }
            }
        }
        if (flag) {
            printf("%d\n",x*n+y-n);
        }else{
            printf("WanQuanGaoBuDong!\n");
        }
    }
}
