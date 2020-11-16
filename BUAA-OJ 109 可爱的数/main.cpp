//
//  main.cpp
//  BUAA-OJ 109 可爱的数
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <set>

using namespace std;

set<long long> res;

long long n;

int main()
{
    while (~scanf("%lld",&n)) {
        res.clear();
        long long k = 2;  //k从2开始，进入循环
        while (k <= (int)(sqrt(n)+1)) {
            if (n % k == 0) {
                n /= k;
                res.insert(k);
                continue;
            }
            k++;
        }//到此结束，res已经存入了n的所有因子，除了n本身
        res.insert(n); //把n本身也加进去。no!事实证明，没有存入所有的数，只是把最简的形式给放进去了。比如4，6，12这些还能整除的数，应该是通过continue，继续给整除了。剩下最简的质因数。
        long long ans = 1;
        /*
        set<long long>::iterator b;
        for (b = res.begin(); b!=res.end(); b++) {
            printf("%d\n",*b);
        }*/
        set<long long>::iterator a;
        for (a = res.begin(); a!=res.end(); a++) {
            ans *= (*a);
        }
        printf("%lld\n",ans);
    }
}
