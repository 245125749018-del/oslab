#include <stdio.h>
int main() {
    int n,i,bt[20],rem[20],wt[20]={0},tat[20],q,time=0,done;
    printf("Number of processes: "); scanf("%d",&n);
    for(i=0;i<n;i++){ printf("Burst time P%d: ",i+1); scanf("%d",&bt[i]); rem[i]=bt[i]; }
    printf("Time quantum: "); scanf("%d",&q);
    do {
        done=1;
        for(i=0;i<n;i++) if(rem[i]>0){
            done=0;
            if(rem[i]>q){ time+=q; rem[i]-=q; }
            else { time+=rem[i]; wt[i]=time-bt[i]; rem[i]=0; }
        }
    } while(!done);
    for(i=0;i<n;i++) tat[i]=wt[i]+bt[i];
    printf("P\\tBT\\tWT\\tTAT\\n");
    for(i=0;i<n;i++) printf("%d\\t%d\\t%d\\t%d\\n",i+1,bt[i],wt[i],tat[i]);
    return 0;
}
