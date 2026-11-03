#include <stdio.h>

int main()
{
    int n, bt[10], pri[10], rem[10];
    int done = 0, i, k;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time and priority:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &bt[i], &pri[i]);
        rem[i] = bt[i];
    }

    printf("\nExecution Order:\n");

    while(done < n)
    {
        k = -1;

        for(i=0; i<n; i++)
        {
            if(rem[i] > 0 &&
              (k == -1 || pri[i] < pri[k]))
                k = i;
        }

        printf("P%d ", k+1);

        rem[k]--;

        if(rem[k] == 0)
            done++;
    }

    return 0;
}