#include<stdio.h>
int cmp(const void *, const void *);
void list(int, int, int, int *);
int voters[50000];
static int l=0;
main()
{
    int n1, n2, n3, i, j, flag, count=0;
    scanf("%d%d%d", &n1 ,&n2 ,&n3);
    int a[n1], b[n2], c[n3];

    for(i=0;i<n1;i++)   scanf("%d", &a[i]);
    for(i=0;i<n2;i++)   scanf("%d", &b[i]);
    for(i=0;i<n3;i++)   scanf("%d", &c[i]);

    for(i=0;i<n1;i++)
    {
        flag=0;
        if(a[i]==0)     break;
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
            {
                voters[l++]=a[i];
                a[i] = b[j] = 0;
                flag=1;
                break;
            }
            else if(b[j]>a[i])  break;
        }
        if(flag==0)
        {
            for(j=0;j<n3;j++)
            {
                if(c[j]==a[i])
                {
                    voters[l++]=a[i];
                    a[i] = c[j] = 0;
                    break;
                }
                else if(c[j]>a[i])  break;
            }
        }
    }

    for(i=0;i<n2;i++)
    {
        flag=0;
        if(b[i]==0)     break;
        for(j=0;j<n1;j++)
        {
            if(a[j]==b[i])
            {
                voters[l++]=b[i];
                b[i] = a[j] = 0;
                flag=1;
                break;
            }
            else if(a[j]>b[i])  break;
        }
        if(flag==0)
        {
            for(j=0;j<n3;j++)
            {
                if(c[j]==b[i])
                {
                    voters[l++]=b[i];
                    b[i] = c[j] = 0;
                    break;
                }
                else if(c[j]>b[i])  break;
            }
        }
    }

    for(i=0;i<n3;i++)
    {
        flag=0;
        if(c[i]==0)     break;
        for(j=0;j<n2;j++)
        {
            if(b[j]==c[i])
            {
                voters[l++]=c[i];
                c[i] = b[j] = 0;
                flag=1;
                break;
            }
            else if(b[j]>c[i])  break;
        }
        if(flag==0)
        {
            for(j=0;j<n1;j++)
            {
                if(a[j]==c[i])
                {
                    voters[l++]=c[i];
                    c[i] = a[j] = 0;
                    break;
                }
                else if(a[j]>c[i])  break;
            }
        }
    }
    qsort(voters, l, sizeof(int), cmp);
    printf("%d\n", l);
    for(i=0;i<l;i++)    printf("%d\n", voters[i]);
    return 0;
}

int cmp(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}
