/* Basic Round Robin version; same core algorithm as 04_round_robin.c */
#include <stdio.h>
int main() {
    int n,i,bt[10],r[10],wt[10]={0},tat[10],q,t=0,active;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&bt[i]); r[i]=bt[i]; }
    scanf("%d",&q);
    do {
        active=0;
        for(i=0;i<n;i++) if(r[i]){
            active=1;
            if(r[i]>q){ t+=q; r[i]-=q; }
            else { t+=r[i]; wt[i]=t-bt[i]; r[i]=0; }
        }
    } while(active);
    for(i=0;i<n;i++){ tat[i]=wt[i]+bt[i]; printf("P%d WT=%d TAT=%d\\n",i+1,wt[i],tat[i]); }
    return 0;
}
