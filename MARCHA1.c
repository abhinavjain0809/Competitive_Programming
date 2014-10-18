#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
    int t, num, m, *a, *bin, i, j, k, l, temp, sum=0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &num, &m);
        a = (int *)malloc(num*sizeof(int));

        for(i=0;i<num;i++)
            scanf("%d", &a[i]);

        for(j=1;j<(pow(2,num)-1);j++)
        {
            temp=j;
            while(temp!=0)
            {
                bin[num-k-1]=temp%2;
                temp /= 2;
                temp++;
            }

            sum=0;
            bin = (int *)malloc(num*sizeof(int));
            for(l=0;l<num;l++)
            {
                sum += bin[l]*a[l];
                if(sum==l)
                {
                    printf("Yes");
                    break;
                }
            }
        }
    }

    if(l==num)
        printf("No");

    return 0;
}
