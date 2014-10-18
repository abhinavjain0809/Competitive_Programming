#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
void push(char, char [], int *);
void pop(char [], int *);

int main()
{
    int t, len;
    char stack[450], str[450];

    cin>>t;
    t++;
    while(t--)
    {
    int top=-1, i=0;
    gets(str);
    //strcpy(str, str);
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
            cout<<str[i];
        }
        i++;
    }
    for(i=top;i>=0;i--)
    {
        printf("%c", stack[top]);
        top--;
    }
    cout<<endl;
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
    cout<<stack[*top];
    (*top)--;
}
