//
//  main.cpp
//  BUAA-OJ 131 条形统计图
//
//  Created by wangzhongchi on 2020/11/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <map>

using namespace std; //没想到没有这句话，下面的map<int,int>a;无法执行

map<int,int>a;

int main()
{
    int n,tmp;
    while (~scanf("%d",&n)) {
        a.clear();
        while (n--) {
            scanf("%d",&tmp);
            a[tmp]++;
        }
        
        map<int,int>::iterator it; //声明一个迭代器
        for (it=a.begin(); it != a.end(); ++it) {
            printf("[%d] ",it->first);
        }
        puts("");
        //上面这个迭代器，是把这个数组里面的所有数，给用[] 的形式printf出来，first就是指map<int,int>a的第一个int，second就是对应第二个int
        
        int cnt = 0, target = a.size();
        while (cnt != target) {
            map<int,int>::iterator it; //再次声明一个迭代器
            for (it= a.begin(); it!=a.end(); ++it) {
                if (it->second == 1) {
                    cnt++;
                }
                if (it->second > 0) {
                    printf("# ");
                }else{
                    printf("  ");
                }
                it->second--;
            }
            puts("");
        }
        puts("");
    }
}

/*
 https://blog.csdn.net/chaokudeztt/article/details/105566447
 map的 first和second解析
 map<string, int> m;
 m["one"] = 1;
 map<string, int>::iterator p = m.begin();
 p->first; // 这个是  string  值是 "one"
 p->second; //这个是 int 值是 1
 
 遍历查找例如：
 map<string, int>::iterator it;
         for(it = s.begin(); it != s.end(); it++) {
             if(it->second == 1) {
                 printf("%s\n", it->first);
                 break;
             }
         }
 */
