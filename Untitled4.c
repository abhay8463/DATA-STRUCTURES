
#include<stdio.h>
#include<ctype.h>
char stack[20];  int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x=='^')
        return 3;
}
 int main()
{
    char exp[20];
    char post[20];
     int i=0;
     int k=0;
    char  x,m,n,o;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    printf("POSTFIX EXPRESSION IS:\n");
    while(exp[i] != '\0')
    {
        if(isalnum(exp[i]))
            printf("%c",exp[i]);
        else if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            while((x = pop()) != '(')
            {
                 printf("%c", x);
                 post[k++]=x;
            }


        }
        else
        {
            while(priority(stack[top]) >= priority(exp[i]))
               {
                   printf("%c",pop());

                    post[k++]=pop();
               }

            push(exp[i]);
        }
        i++;
    }
    while(top != -1)
    {
        printf("%c",pop());

                    post[k++]=pop();



    }
     for(int k=0;k<20;k++)
                {
                    printf("%c\n",post[k]);
                }

    return 0;
}
