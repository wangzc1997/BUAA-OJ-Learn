//
//  main.cpp
//  BUAA-OJ 90 晴天小猪的绕口令
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--) {
        int t;
        scanf("%d",&t);
        char a[t],s[t];
        int i,j,num,k;
        for (k = 0; k < t; k++) {
            scanf("%s",a);
            for (i = 0,j=0; a[i]!='\0'; i++) {
                num = 1;
                while (a[i+1]==a[i]) {
                    num ++;
                    i++;
                }
                s[j++] = num + '0';
                s[j++] = a[i];

            }
            s[j] = '\0';
            printf("%s\n",s);
        }
    }
}
*/
/*这个其实可以输出正确结果了，但是OJ一直过不去、
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--) {
        int t;
        scanf("%d",&t);
        char a[t],s[t];
        int i,j,num;
        scanf("%s",a);
        for (i = 0,j = 0; a[i] != '\0'; i++) {
            num = 1;
            while (a[i+1] == a[i]) {
                num ++;
                i++;
            }
            s[j++] = num +'0';
            s[j++] = a[i];
        }
        s[j] = '\0';
        printf("%s\n",s);
    }
}
*/
//下面这个是GitHub的答案
#include<string.h>

#include<iostream>

using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    string a;
    string ans;
    while(t--)
    {
        cin >> n >> a;
        ans="";
        int count=1;
        char cur=0;
        int i;
        for(i=0;i<n;++i)
        {
            if(a[i]!=cur)
            {
                if(cur)
                {
                    ans+=to_string(count)+cur;
                }
                count=1;
                cur=a[i];
            }
            else
            {
                count++;
            }
        }
        if(cur)
        {
            ans+=to_string(count)+cur;
        }
        cout << ans << endl;
    }
    return 0;
}
