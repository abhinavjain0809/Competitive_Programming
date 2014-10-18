#include<stdio.h>
int cmp(const void *, const void *);
main()
{
    int t, n, i, j, x, moves;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int a[n];
        for(i=0;i<n;i++)    scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);
        x=n/2;
        moves=0;
        for(i=0;i<n;i++)
        {
            (a[x]-a[i]>0)?(j=a[x]-a[i]):(j=a[i]-a[x]);
            moves += j;
        }
        printf("%d\n", moves);
    }
    return 0;
}

int cmp(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}
