#include<stdio.h>
#define max 50

struct stack
{
    char a[max];
    int top;
}s1;

void init()
{
    s1.top=-1;
}

int isempty()
{
    if(s1.top==-1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if(s1.top==max-1)
        return 1;
    else
        return 0;
}

void push(char ch)
{
    if(isfull())
    {
        printf("stack is full");
    }
    else
    {
        s1.top++;
        s1.a[s1.top]=ch;
    }
}

char pop()
{
    char val;

    if(isempty())
    {
        printf("stack is empty");
        return '\0';
    }
    else
    {
        val=s1.a[s1.top];
        s1.top--;
        return val;
    }
}

int main()
{
    char str[50];
    int i;
    int flag=1;

    init();

    printf("Enter the string :");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        push(str[i]);
    }

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=pop())
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }

    return 0;
}

