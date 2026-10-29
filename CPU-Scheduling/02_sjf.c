#include <stdio.h>
int main() {
    int n, i, j, bt[20], p[20], wt[20], tat[20], t;
    printf("Number of processes: "); scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Burst time P%d: ", i+1); scanf("%d", &bt[i]);
        p[i] = i+1;
    }
    for (i = 0; i < n-1; i++)
        for (j = i+1; j < n; j++)
            if (bt[i] > bt[j]) {
                t=bt[i]; bt[i]=bt[j]; bt[j]=t;
                t=p[i]; p[i]=p[j]; p[j]=t;
            }
    wt[0]=0;
    for (i=1; i<n; i++) wt[i]=wt[i-1]+bt[i-1];
    for (i=0; i<n; i++) tat[i]=wt[i]+bt[i];
    printf("P\\tBT\\tWT\\tTAT\\n");
    for (i=0; i<n; i++) printf("%d\\t%d\\t%d\\t%d\\n",p[i],bt[i],wt[i],tat[i]);
    return 0;
}
