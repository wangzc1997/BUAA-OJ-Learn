//
//  main.cpp
//  BUAA-OJ--jhljx学函数
//
//  Created by wangzhongchi on 2020/10/23.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

void swap(int *c, int *d);

int main()
{
    int a,b;
    while (scanf("%d %d", &a,&b) != EOF) {
        swap(&a,&b);
        printf("%d %d\n", a, b);
    }
    
    
    return 0;
}

void swap(int *c, int *d){
    int k;
    k = *c;
    *c = *d;
    *d = k;
}


/*
//C++写法

#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);int a,b;while(cin>>a>>b){swap(a,b);cout<<a<<" "<<b<<endl;}}
*/
