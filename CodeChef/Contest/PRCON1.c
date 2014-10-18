#include<stdio.h>
int main()
{
    int t, l, u, i, j, a, sum, count, num;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &l, &u);

        sum=0;
        count=0;
        for(i=l;i<=u;i++)
        {
            num = i;
            while(num!=0)
            {
                a = num%10;
                num /= 10;
                sum += a;
            }

            for(j=2;j<=sum/2;j++)
                if(sum%2==0)    break;

            if(j==(sum/2+1))    count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
