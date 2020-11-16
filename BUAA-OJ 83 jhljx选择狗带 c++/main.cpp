//
//  main.cpp
//  BUAA-OJ 83 jhljx选择狗带 c++
//
//  Created by wangzhongchi on 2020/11/3.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int a) {
    if (!(a & 1)) {
        if (a == 2)return true;
        else return false;
    }
    else if (a == 1)return false;
    else {
        int b = (int)sqrt(a);
        for (int k = 3; k <= b; k += 2) {
            if (!(a % k))return false;
        }
        return true;
    }
}

int primeCount(int n, int m) {
    int res = 0;
    while (n) {
        n /= m;
        res += n;
    }
    return res;
}
int n, m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (cin >> n >> m) {
        if (!isPrime(m)) cout << "I choose go die" << endl;
        else cout << primeCount(n, m) << endl;
    }
}*/
#include <stdio.h>
#include <math.h>

bool isPrime(int a) {
    if (!(a & 1)) {
        if (a == 2)return true;
        else return false;
    }
    else if (a == 1)return false;
    else {
        int b = (int)sqrt(a);
        for (int k = 3; k <= b; k += 2) {
            if (!(a % k))return false;
        }
        return true;
    }
}



int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        if (isPrime(m)) {
            int res = 0;
            while (n) {
                n /= m;
                res += n;
            }
            printf("%d\n",res);
        }else{
            printf("I choose go die\n");
        }
    }
    
}
