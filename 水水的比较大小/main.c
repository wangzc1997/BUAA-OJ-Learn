//
//  main.c
//  水水的比较大小
//
//  Created by PhD Wang's Macbook  on 2020/9/21.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b;
    while (scanf("%lf %lf",&a,&b)!= EOF) {
        if (fabs(a-b)<=1e-8) {
            printf("nakezhenchun\n");
        }else if (a>b){
            printf("woshibukezhanshengde\n");
        }else{
            printf("wohenbaoqian\n");
        }
    }
    return 0;
}
