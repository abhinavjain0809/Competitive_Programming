#include<stdio.h>
main()
{
    int n, i, change=0;
    static int j;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==0)     change++;
    }
    j=n/2;
    for(i=0;i<n/2;i++)
    {
        /*if(a[i]==0)
        {
            change++;
            continue;
        }*/
        while(j++<n)
        {
            /*if(a[j-1]==0)
            {
                change++;
                continue;
            }*/
            if(a[i]>0 && a[j-1]<0)
            {
                change += 2;
                break;
            }
            else if(a[i]<0 && a[j-1]<0)     break;
            else if(a[i]>0 && a[j-1]>0)     continue;
        }
    }
    printf("%d", change);
    return 0;
}
