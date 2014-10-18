#include<stdio.h>
main()
{
    char str[10][6] = {
                          "-----",
                          ".----",
                          "..---",
                          "...--",
                          "....-",
                          ".....",
                          "-....",
                          "--...",
                          "---..",
                          "----."
                        };
    int t, n[10], i, a, count;
    long long int num, x;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &num);
        x=num;
        i=0;
        while(x!=0)
        {
            a = x%10;
            x /= 10;
            n[i++] = a;
        }
        count=0;
        for(i=9;i>=0;i--)
        {
            switch(n[i])
            {
                case 0:
                printf("%s", str[0]);
                break;

                case 1:
                printf("%s", str[1]);
                count += 1;
                break;

                case 2:
                printf("%s", str[2]);
                count += 2;
                break;

                case 3:
                printf("%s", str[3]);
                count += 3;
                break;

                case 4:
                printf("%s", str[4]);
                count += 4;
                break;

                case 5:
                printf("%s", str[5]);
                count += 5;
                break;

                case 6:
                printf("%s", str[6]);
                count += 4;
                break;

                case 7:
                printf("%s", str[7]);
                count += 3;
                break;

                case 8:
                printf("%s", str[8]);
                count += 2;
                break;

                case 9:
                printf("%s", str[9]);
                count += 1;
                break;
            }
        }
        printf("\n%d\n", count);
    }
    return 0;
}
