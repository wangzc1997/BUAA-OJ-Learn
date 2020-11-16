//
//  main.c
//  优先队列应用
//
//  Created by PhD Wang's Macbook  on 2020/9/21.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
//因为c语言没有queue头文件库 所以要用c++来写。

#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        priority_queue<int> q;
        int i;
        for(i=0;i<n;i++)
        {
            int tmp;
            scanf("%d",&tmp);
            q.push(-tmp);
        }
        int res=0;
        while(q.size()>1)
        {
            int merge=q.top();
            q.pop();
            merge+=q.top();
            q.pop();
            res+=merge;
            q.push(merge);
        }
        printf("%d\n",-res);
    }
}
