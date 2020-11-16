//
//  main.c
//  BUAA-OJ 74 临近的虚实
//
//  Created by wangzhongchi on 2020/10/31.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int hour, minute, second;
    while (scanf("%d:%d:%d", &hour,&minute, &second)!= EOF) {   //这个!=EOF总是忘了写
        if((hour >= 0 && hour <= 23)&&(minute >= 0 && minute <= 59)&&(second >= 0 && second <= 59)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}
