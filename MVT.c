#include <stdio.h>
int main()
{
    int ms, bs, ef, n, mp[10], tif = 0;
    int i, p = 0;

    printf(" Enter the total memory available -- ");
    scanf("%d", &ms);
    ef = ms; //

    printf("\n Enter the number of processes -- ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf(" Enter memory required for process %d -- ", i + 1);
        scanf("%d", &mp[i]);
    }

    printf("\n\n PROCESS\tMEMORY REQUIRED\t ALLOCATED\tINTERNAL FRAGMENTATION");

    for (i = 0; i < n && p < ef; i++)
    {
        printf("\n %d\t\t%d", i + 1, mp[i]);

        if (mp[i] > ef)
            printf("\t\t NO\t\t---");
        else
        {
            printf("\t\t YES\t\t%d", 0);
            ef -= mp[i];
            
        }
    }

    if (i < n)
        printf("\n\n Memory is Full, Remaining Processes cannot be accomodated");

    printf("\n Total External Fragmentation is %d", ef);
    return 0;
}