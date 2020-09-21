//
//  main.c
//  BAUU-OJ
//
//  Created by PhD Wang's Macbook  on 2020/8/10.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    while (scanf("%d%d",&a,&b) != EOF) {
        printf("%d\n", a+b);
    }
    return 0;
}

//上下两种程序结果不同，上面程序while的作用可以完全处理多个case，而下面这种只可以处理一组数据

/*int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    printf("%d", a+b);
}*/
