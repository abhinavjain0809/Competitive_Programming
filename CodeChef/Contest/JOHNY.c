#include<stdio.h>
int cmp(const int *, const int *);
main()
{
    int t, n, i, k, num;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int a[n];
        for(i=0;i<n;i++)    scanf("%d", &a[i]);
        scanf("%d", &k);
        num = a[k-1];
        qsort(a, n, sizeof(int), cmp);
        for(i=0;i<n;i++)
            if(a[i]==num)
            {
                printf("%d\n", i+1);
                break;
            }
    }
    return 0;
}

int cmp(const int *x, const int *y)
{
    return(*(int*)x - *(int*)y);
}
