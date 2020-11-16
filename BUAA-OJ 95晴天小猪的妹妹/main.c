//
//  main.c
//  BUAA-OJ 95晴天小猪的妹妹
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        long long x,y,z;
        scanf("%lld%lld%lld",&x,&y,&z);
        printf("%.5lf\n",x*y*z/sqrt(x*x*y*y+ y*y*z*z + x*x*z*z));
    }
    return 0;
}
