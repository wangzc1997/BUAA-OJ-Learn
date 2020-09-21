//
//  main.c
//  BUAA-OJ12-大家都来分级啦
//
//  Created by PhD Wang's Macbook  on 2020/8/18.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
//自己写的
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int X;
    int grade = 0;
    while (scanf("%d", &X) != EOF) {
         if (X >= 90 && X <= 100) {
               grade = 1;
           }else if (X >= 80 && X < 90){
               grade = 2;
           }else if (X >= 70 && X < 80){
               grade = 3;
           }else if(X >= 60 && X < 70){
               grade = 4;
           }else if(X < 60 && X >= 0){
               grade = 5;
           }else{ //之前没有加else的内容 结果是错的
               grade = 6;
           }
           
           switch (grade) {
               case 1:
                   printf("A\n");
                   break;
               case 2:
                   printf("B\n");
                   break;
               case 3:
                   printf("C\n");
                   break;
               case 4:
                   printf("D\n");
                   break;
               case 5:
                   printf("E\n");
                   break;
               case 6:
                   printf("wrong\n");
                   break;
           }
    }
    return 0;
}

/*CSDN搜的 上下都是对的
#include<stdio.h>
int main(){
    int n,a=0;
    while(scanf("%d",&n)!=EOF){
            if(n>=0&&n<=100){
                a=n/10;
                switch(a){
                    case 10:
                    case 9:printf("A\n");break;
                    case 8:printf("B\n");break;
                    case 7:printf("C\n");break;
                    case 6:printf("D\n");break;
                    case 5:
                    case 4:
                    case 3:
                    case 2:
                    case 1:
                    case 0:printf("E\n");break;
                }
            }
            else
                printf("wrong\n");
    }
    return 0;
}
*/
