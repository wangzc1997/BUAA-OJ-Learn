//
//  main.c
//  BUAA-OJ 75 恶魔的证明
//
//  Created by wangzhongchi on 2020/10/31.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>

char a[10000];

int main(int argc, const char * argv[]) {
    int n;
    
    while (scanf("%d",&n) != EOF) {
        int cnt = 0;
        scanf("%s",a);
        int i;
          for (i = 1; i <= n-2; i++) {
            if (a[i-1] <= 'z' && a[i-1] >= 'a' && a[i] <= 'Z' && a[i] >= 'A' && a[i+1] <= 'z' && a[i+1] >= 'a') {
                cnt ++;
            }
            
        }
        if (cnt != 0) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }

    }
}
/*
 技术总结
 之前一直是wrong answer，是因为我把int cnt = 0 放在while循环外面了，这就导致刚开始的答案是对的，
 但是到后来，cnt没有及时初始化，所以无论输入abc 还是aBc都是yes，这就错了。
 
 把cnt = 0写在循环里面就对了
 
 
 
 
 
 */
