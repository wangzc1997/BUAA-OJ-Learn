//
//  main.c
//  BUAA-OJ68 Double Data
//
//  Created by wangzhongchi on 2020/10/26.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int type(int m)
{
    if (m % 4 != 0 || m % 100 == 0 & m % 400 != 0) {
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    int t;
    //scanf("%d",&t);
    while (scanf("%d",&t)!=EOF) {
        while (t--) {
            int m,n,k;
            scanf("%d%d%d",&m,&n,&k);
            

            int month[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31, 31, 29, 31, 30, 31, 30,31,31,30,31,30,31};
            if ( n > 12 || n <= 0 || k <= 0) {
                printf("QWQ\n");
            }else{
                if (k <= month[type(m)][n-1]) {
                    if ((k+1) <= month[type(m)][n-1]) {
                        printf("%d %d %d\n",m,n,(k+1));
                    }
                    if ((k+1) > month[type(m)][n-1]) {
                        k = k+1 - month[type(m)][n-1];
                        if (n == 12) {
                            n = 0;
                            m = m+1;
                        }
                        printf("%d %d %d\n", m, n+1 ,k);
                    }
                }else{
                    printf("QWQ\n");
                }
            }
            
            
            
        }
    }

}
/*
 总结一下出现的错误：
 1.忘记12.31号+1天会变成1.1
 2.忘记12.31号+1天年份会加1.
 3.忘记月份和日期输入的都是非负数，所以可能输入为0，所以要把0的情况设为QWQ
 4.最重要的！数组是从0开始的，一定要注意是n还是n-1
 
 
 
 
 
 */
