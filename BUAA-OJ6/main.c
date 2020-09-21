//
//  main.c
//  BUAA-OJ6
//
//  Created by PhD Wang's Macbook  on 2020/8/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

/*int main(int argc, const char * argv[]) {
    int n;
    scanf("%d" , &n);
    int digit;
    int ret = 0;
    while (n > 0) {
        digit = n % 10;
        n /= 10;
        ret = ret * 10 + digit;
    }
    printf("%d\n", ret);
    return 0;
}*/

int main()
{
    int n;
    int digit;
    int ret = 0;
    while (scanf("%d", &n) != EOF) {
        int digit;
        int ret = 0;
        while (n > 0) {
        digit = n % 10;
        n /= 10;
        ret = ret * 10 + digit;
        }
    printf("%d\n", ret);
    }
    return 0;
}
