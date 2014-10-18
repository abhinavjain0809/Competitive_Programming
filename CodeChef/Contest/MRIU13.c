#include<stdio.h>
main()
{
    char str[101], x;
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        x = (int)str[i]-7;
        printf("%c", x);
        i++;
    }
    return 0;
}
