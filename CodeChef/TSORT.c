#include<stdio.h>
#include<stdlib.h>
int cmp(const void *, const void *);

main()
{
    int t, i;
    scanf("%d", &t);
    int a[t];

    for(i=0;i<t;i++)
        scanf("%d", &a[i]);

    qsort(a, t, sizeof(int), cmp);

    for(i=0;i<t;i++)
        printf("%d\n", a[i]);

    return 0;
}

int cmp(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}
