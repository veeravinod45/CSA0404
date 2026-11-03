#include <stdio.h>

int main()
{
    int n, bt[10], p[10], t;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst times:\n");

    for(int i=0; i<n; i++)
    {
        p[i] = i+1;
        scanf("%d", &bt[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(bt[i] > bt[j])
            {
                t = bt[i];
                bt[i] = bt[j];
                bt[j] = t;

                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }

    printf("\nSJF Execution Order:\n");

    for(int i=0; i<n; i++)
        printf("P%d (BT=%d)\n", p[i], bt[i]);

    return 0;
}