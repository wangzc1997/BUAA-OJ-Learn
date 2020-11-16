//
//  main.c
//  BUAA-OJ 80 jhljx的分身术
//
//  Created by wangzhongchi on 2020/11/3.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>

char a[105];
int main(int argc, const char * argv[]) {
    while (scanf("%s",a)!=EOF) {
        int i;
        for (i = 0; i <= strlen(a); i++) {
            if (a[i] >= 'a' && a[i] <= 'z') {
                a[i] = a[i] - 'a' + 'A';
            }else if(a[i] >= 'A' && a[i] <= 'Z'){
                a[i] = a[i] - 'A' + 'a';
            }
        }
        printf("%s\n",a);
    }
    
}
//总是把这个!=EOF给忘掉，这是个缺点！需要记住！
//因为字符串最高不过100，所以不要直接设置为1000
//字符串的长度可以直接用strlen、
//还是需要仔细
