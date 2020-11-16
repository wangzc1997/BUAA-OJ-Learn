//
//  main.c
//  BUAA-OJ 69 jhljx跑一千米
//
//  Created by wangzhongchi on 2020/10/26.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned long long x,y;
    while (scanf("%lld %lld", &x, &y)!= EOF) {
        unsigned long long min;
        if (x > y) {
            min = y;
        }else{
            min = x;
        }
        
        int i;
        unsigned long long ret = 0;
        for (i = 1; i <= min ; i++) {
            if (x % i ==0) {
                if (y % i == 0) {
                    ret = i;
                }
            }
        }
        
        printf("%lld\n", (x * y)/ret );
    }
}*/
//上面这种写法超时间了

#include <stdio.h>

int main()
{
    unsigned long long a,b,c,d,x,y;
    while (scanf("%lld %lld",&a,&b)!= EOF) {
        x = a;
        y = b; //先保存输入的值
        
        if (a < b) {
            c = a;
            a = b;
            b = c;
        }  //确保a是大的
        
        while (a % b != 0) {
            d = b;
            b = a%b;
            a = d;
        }

        //printf("%lld\n", x*y/b);
        
    }

    
}

//下面是github-OJ的答案
/*
#include<stdio.h>

int main()
{
    unsigned long long a,b,c,x,y;
    while(~scanf("%lld%lld",&a,&b))
    {
        x=a;
        y=b;
        c=a>b?a:b;
        a=a<b?a:b;
        while(c%a!=0)
        {
            b=a;
            a=c%a;
            c=b;
        }
        printf("%lld\n",x*y/a);
    }
}
 这个的意思很简单，刚开始差点没看懂，首先运行后 c 是ab的最大值， a 就是ab的最小值， 就是最大值对最小值取余，while里面的b只是一个中间变量，别被迷惑了。
 这个通过了
*/

//错了8次
/*
 1.unsigned 就是要考虑负数的情况下把··
 2.虽说x和y都是在int范围内，但是输出结果可能在long long，索性把所有的都设置为long long
 3.注意在求公约数时
 先确定一个最大值，然后让最大值对小的那个取余，然后令被除数作为除数，将结果作为被除数，继续做！结果完毕，最后的结果就是 公约数。
 
 
 
 */
