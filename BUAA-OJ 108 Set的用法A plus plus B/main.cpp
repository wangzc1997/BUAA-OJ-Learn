//
//  main.cpp
//  BUAA-OJ 108 A plus plus B
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <set>

using namespace std;

char tmp[3];
char op;
int t,n,m;
int tmpint;

int main()
{
    while (~scanf("%d%d",&n,&m)) {
        set<int> a,b;
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d",&tmpint);
            a.insert(tmpint);
        }
        for (i=0; i < m; i++) {
            scanf("%d",&tmpint);
            b.insert(tmpint);
        }
        set<int> c;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
        printf("%.2lf%%\n",c.size()*200.0/(n+m));
    }
}
/*
 这个就是考set的用法
 而且必须要用c++来写
 
 std::set<string> words1 {"one", "two", "three", "four", "five", "six"};
 std::set<string> words2 {"four"，"five", "six", "seven", "eight", "nine"};
 std::set<string> result;
 std::set_intersection(std::begin(words1), std::end(words1), std::begin(words2), std::end(words2),std::inserter(result, std::begin(result)));
 // Result: "five" "four" "six"
 http://c.biancheng.net/view/556.html
 
 这个set很有用
 
 */
