#include <stdio.h>

int main()
{
    int n, q, bt[10], rem[10];
    int done;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst times:\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &bt[i]);
        rem[i] = bt[i];
    }

    printf("Enter time quantum: ");
    scanf("%d", &q);

    printf("\nExecution Order:\n");

    do
    {
        done = 1;

        for(int i=0; i<n; i++)
        {
            if(rem[i] > 0)
            {
                done = 0;
                printf("P%d ", i+1);

                if(rem[i] > q)
                    rem[i] -= q;
                else
                    rem[i] = 0;
            }
        }

    } while(done == 0);

    return 0;
}