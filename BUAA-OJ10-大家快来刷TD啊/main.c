//
//  main.c
//  BUAA-OJ10-大家快来刷TD啊
//
//  Created by PhD Wang's Macbook  on 2020/8/18.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n = 0;
    scanf("%d", &n);
    
    int m = 0 ;
    if (n % 3 == 0) {
        m = n/3;
    }else{
        m = (n/3) + 1;
    }
    printf("%d\n",m);
    return 0;
}

