//
//  main.c
//  BUAA-OJ 感受学长的爱意
//
//  Created by PhD Wang's Macbook  on 2020/9/20.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double * cal_two(int a1, int b1, int c1, int a2, int b2, int c2) {
    double * res = NULL;
    if ((a1 == 0 && b1 == 0) || (a2 == 0 && b2 == 0)) {
        //有直线不存在
        return res;
    } else if (a1 * b2 == a2 * b1) {
        //直线平行
        return res;
    } else {
        //一般情况
        res = (double*)malloc(sizeof(double)*2);
        res[0] = (double)(b1*c2 - b2*c1) / (a1*b2 - a2*b1);
        res[1] = (double)(a2*c1 - a1*c2) / (a1*b2 - a2*b1);
    }
    return res;
}
int main(int argc, char *argv[]) {
    int a[9];
    while(scanf("%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8])!=EOF) {
        // 求解
        double ** reses = (double**)malloc(sizeof(double*)*3);
        reses[0] = cal_two(a[0], a[1], a[2], a[3], a[4], a[5]);
        reses[1] = cal_two(a[0], a[1], a[2], a[6], a[7], a[8]);
        reses[2] = cal_two(a[3], a[4], a[5], a[6], a[7], a[8]);
        int no_dup[3] = {-1, -1, -1};
        int cnt = 0;
        // 去重
        for (int i = 0; i < 3; i++) {
            if (reses[i] != NULL) {
                int j;
                for (j = 0; j < cnt; j++) {
                    if (!(reses[no_dup[j]][0] == reses[i][0] && reses[no_dup[j]][1] == reses[i][1])) {
                        continue;
                    } else {
                        break;
                    }
                }
                if (j == cnt) {
                    no_dup[cnt++] = i;
                }
            }
        }

        // 排序
        for (int i = 0; i < cnt; i++) {
            for (int j = i+1; j < cnt; j++) {
                if (reses[no_dup[i]][0] - reses[no_dup[j]][0] > 0.00001) {
                    int tmp = no_dup[i];
                    no_dup[i] = no_dup[j];
                    no_dup[j] = tmp;
                } else if (fabs(reses[no_dup[i]][0] - reses[no_dup[j]][0]) < 0.00001) {
                    if (reses[no_dup[i]][1] - reses[no_dup[j]][1] > 0.00001) {
                        int tmp = no_dup[i];
                        no_dup[i] = no_dup[j];
                        no_dup[j] = tmp;
                    }
                }
            }
        }
        // 输出
        printf("%d\n", cnt);
        for (int i = 0; i < cnt; i++) {
            double a = fabs(reses[no_dup[i]][0]) < 0.001? 0.0: reses[no_dup[i]][0];
            double b = fabs(reses[no_dup[i]][1]) < 0.001? 0.0: reses[no_dup[i]][1];
            printf("%.2f %.2f\n", a, b);
        }
    }
    return 0;
}

//另一种解法
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int cnt=0;
struct point{double x,y;}pt[5];
bool cmp(point a,point b){if(a.x!=b.x)return a.x<b.x;return a.y<b.y;}
void judge(double A1,double B1,double C1,double A2,double B2,double C2){
    double u=A1*B2-A2*B1;
    if(u!=0){
        pt[cnt].x=(B1*C2-B2*C1)/u+1e-4;
        pt[cnt].y=(A2*C1-A1*C2)/u+1e-4;
        for(int j=0;j<cnt;j++){
            if(fabs(pt[j].x-pt[cnt].x)<1e-5&&fabs(pt[j].y-pt[cnt].y)<1e-5)cnt--;
        }
        cnt++;
    }
}
int main(){
    double a,b,c,d,e,f,g,h,i;int j;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g,&h,&i)==9){
        cnt=0;
        judge(a,b,c,d,e,f);judge(d,e,f,g,h,i);judge(a,b,c,g,h,i);
        sort(pt,pt+cnt,cmp);
        printf("%d\n",cnt);
        if(cnt){
            for(j=0;j<cnt;j++)printf("%.2lf %.2lf\n",pt[j].x,pt[j].y);
        }
        memset(pt,0,sizeof(point)*cnt);
    }
}
