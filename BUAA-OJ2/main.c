//
//  main.c
//  BUAA-OJ2
//
//  Created by PhD Wang's Macbook  on 2020/8/14.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b;
    int n;
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d %d", &a,&b);
        printf("%d\n", a+b);
    }
    return 0;
}
