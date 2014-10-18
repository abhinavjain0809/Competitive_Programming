#include<stdio.h>
#include<string.h>
void push(char, char [], int *);
void pop(char [], int *);
main()
{
    int t, len;
    char stack[450], str[450];

    scanf("%d", &t);
    fflush(stdin);
    while(t--)
    {
    int top=-1, i=0;
    gets(str);
    strcpy(str, str);
    len = strlen(str);
    while(str[i]!='\0')
    {
        switch(str[i])
        {
            case '^':
            if(stack[top]!='^')     push(str[i], stack, &top);
            else
            {
                while(stack[top]=='^')
                    pop(stack, &top);
                push(str[i], stack, &top);
            }
            break;

            case '/':
            case '*':
            if(stack[top]!='^' && stack[top]!='/' && stack[top]!='*')   push(str[i], stack, &top);
            else
            {
                while(stack[top]=='^' || stack[top]=='/' || stack[top]=='*')
                    pop(stack, &top);
                push(str[i], stack, &top);
            }
            break;

            case '+':
            case '-':
            if(stack[top]!='^' && stack[top]!='/' && stack[top]!='*' && stack[top]!='+' && stack[top]!='-')
                push(str[i], stack, &top);
            else
            {
                while(stack[top]=='^' || stack[top]=='/' || stack[top]=='*' || stack[top]=='+' || stack[top]=='-')
                    pop(stack, &top);
                push(str[i], stack, &top);
            }
            break;

            case '(':
            push(str[i], stack, &top);
            break;

            case ')':
            while(stack[top]!='(')      pop(stack, &top);
            top--;
            break;

            default:
            printf("%c", str[i]);
        }
        i++;
    }
    for(i=top;i>=0;i--)
    {
        printf("%c", stack[top]);
        top--;
    }
    printf("\n");
    }
    return 0;
}

void push(char x, char stack[], int *top)
{
    (*top)++;
    stack[*top] = x;
}

void pop(char stack[], int *top)
{
    printf("%c", stack[*top]);
    (*top)--;
}
