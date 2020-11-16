//
//  main.cpp
//  BUAA-OJ 113 超市排队
//
//  Created by wangzhongchi on 2020/11/6.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
int n,a,b;
int x;

vector<int> g;

int main()
{
    while (~scanf("%d%d%d",&n,&a,&b)) {
        g.clear();
        while (n--) {
            scanf("%d",&x);
            g.push_back(x); //在g尾部加入x数据
        }
        g.insert(g.begin() + a -1, -1); //插入在固定的位置
        g.insert(g.begin() + b -1, -2);
        for (int i=0; i < g.size()-1; ++i) {
            printf("%d ",g[i]);
        }
        printf("%d\n",g[g.size()-1]);
    }
}
/*
 主要使用了vector
 vector也有insert，也有begin，但是end使用size()来找到最后的一个元素位置的。
 g.push_back可以让元素在g的尾部加入数据，可是这样也不需要重新动态分配空间和设定范围了啊···C++真的是···
 
 
 
 */
