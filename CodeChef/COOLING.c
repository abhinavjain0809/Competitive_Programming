#include<stdio.h>
main()
{
    int t, count, i, j, k, l, n, temp;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        int pies[n], racks[n];

        for(i=0;i<n;i++)    scanf("%d", &pies[i]);
        for(i=0;i<n;i++)    scanf("%d", &racks[i]);

        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            {
                if(pies[i]>pies[j])
                {
                    temp=pies[i];
                    pies[i]=pies[j];
                    pies[j]=temp;
                }

                if(racks[i]>racks[j])
                {
                    temp=racks[i];
                    racks[i]=racks[j];
                    racks[j]=temp;
                }
            }

            for(i=0;i<n-1;i++)
                for(j=i+1;j<n;j++)


        count=0;
        for(k=0;k<n;k++)
            for(l=0;l<n;l++)
                if(pies[k]<=racks[l])
                {
                    count++;
                    racks[l]=0;
                    break;
                }

        printf("%d\n", count);
    }
    return 0;
}
