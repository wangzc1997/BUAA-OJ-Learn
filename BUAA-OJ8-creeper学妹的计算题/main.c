//
//  main.c
//  BUAA-OJ8-creeper学妹的计算题
//
//  Created by PhD Wang's Macbook  on 2020/8/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T;
    int a,b,c,d,e,f,g,h;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
        printf("%d\n", (a*c)/b + (d*g*h)/(e*f));
    }
    return 0;
}
