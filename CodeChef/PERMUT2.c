#include<stdio.h>
main()
{
    long int t;
    int n, i, j;

    while(1)
    {
        scanf("%d", &t);
        if(t==0)    break;

        int a[t], new[t];

        for(i=0;i<t;i++)
            scanf("%d", &a[i]);

        for(i=0;i<t;i++)
        {
            j = a[i];
            new[j-1] = i+1;
        }

        for(i=0;i<t;i++)
            if(a[i]!=new[i])    break;

        if(i==t)    printf("ambiguous\n");

        else    printf("not ambiguous\n");
    }
    return 0;
}
