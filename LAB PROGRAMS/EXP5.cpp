#include <stdio.h>

int main()
{
    int n, p[10], pri[10], t;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter priority of each process:\n");

    for(int i=0; i<n; i++)
    {
        p[i] = i+1;
        scanf("%d", &pri[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(pri[i] > pri[j])
            {
                t = pri[i];
                pri[i] = pri[j];
                pri[j] = t;

                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }

    printf("\nPriority Order:\n");

    for(int i=0; i<n; i++)
        printf("P%d (Priority=%d)\n", p[i], pri[i]);

    return 0;
}