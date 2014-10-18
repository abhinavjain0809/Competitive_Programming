#include<stdio.h>
main()
{
    int t, i, j, count;
    char str[120];

    scanf("%d", &t);

    for(j=1;j<=t;j++)
    {
        scanf("%s", str);

        i=0;
        count=0;
        while(str[i]!='\0')
        {
            if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='Q'||str[i]=='R')
                count++;

            else if(str[i]=='B') count += 2;

            i++;
        }
        printf("%d\n", count);
    }
    return 0;
}
