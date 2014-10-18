#include<stdio.h>
#include<stdlib.h>
int cmp(const void *, const void *);
main()
{
    int t, n, m, i, j;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &n, &m);
        int a[n], b[m], c[n-m], chef[(n-m)/2+1], workers[(n-m)/2+1];

        for(i=0;i<n;i++)    a[i] = i+1;
        for(i=0;i<m;i++)    scanf("%d", &b[i]);

        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                if(b[i]==a[j])  a[j]=0;

        j=0;
        for(i=0;i<n;i++)
            if(a[i]!=0)
                c[j++] = a[i];

        qsort(c,n-m,sizeof(int),cmp);

        int count=0, temp=0;

            for(i=0,j=0;i<n-m;i+=2)
            {
                chef[j++] = c[i];
                count++;
            }
            for(i=1,j=0;i<n-m;i+=2)
            {
                workers[j++] = c[i];
                temp++;
            }

        for(i=0;i<count;i++)    printf("%d ", chef[i]);
        printf("\n");
        for(i=0;i<temp;i++)    printf("%d ", workers[i]);
        printf("\n");
    }
    return 0;
}

int cmp(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}
