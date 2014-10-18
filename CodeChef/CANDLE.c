#include<stdio.h>
int main()
{
    int candles[10], t, a, i, count, age, x, flag, b[25];
    int no[10] = {0,0,0,0,0,0,0,0,0,0};

    scanf("%d", &t);

    while(t--)
    {
        for(i=0;i<10;i++)
                scanf("%d", &candles[i]);

        x=1;
        flag=1;
        while(flag!=0)
        {
            i=0;
            count=0;
            age=x;

            while(age!=0)
            {
                a = age%10;
                age /= 10;
                b[i] = a;
                i++;
                count++;
            }

            for(i=0;i<count;i++)
            {
                if(b[i]==0)          no[0]++;
                else if(b[i]==1)     no[1]++;
                else if(b[i]==2)     no[2]++;
                else if(b[i]==3)     no[3]++;
                else if(b[i]==4)     no[4]++;
                else if(b[i]==5)     no[5]++;
                else if(b[i]==6)     no[6]++;
                else if(b[i]==7)     no[7]++;
                else if(b[i]==8)     no[8]++;
                else                 no[9]++;
            }

            for(i=0;i<10;i++)
            {
                if(candles[i]<no[i])
                {
                    printf("%d\n", x);
                    flag=0;
                    break;
                }
            }
            x++;
            for(i=0;i<10;i++)       no[i] = 0;
        }
    }
    return 0;
}
