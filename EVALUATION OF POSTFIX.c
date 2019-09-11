#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


#define SIZE 100
float  stack[SIZE];
int top = -1;
char pf[100];
float evaluate(char pf[]);

void push(float stack[],float item)
{
	if(top == SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}

int pop(float stack[])
{
	float item ;

	if(top ==-1)
	{
		printf("stack under flow: invalid infix expression");
		getchar();
		exit(1);
	}
	else
	{
		item = stack[top--];
		return(item);

	}

}
void main()
{
int i=0,p1,p2,p3;
float val;
printf("ENTER POSTFIX EXP\n");
gets(pf);
val=evaluate(pf);
printf("EVALUATION OF POSTFIX EXP IS %.2f\n",val);
return 0;
}
float evaluate(char pf[])
{
int i=0,p1,p2,p3;
for(i=0;i<=strlen(pf);i++)
{
if(isdigit(pf[i]))
{
push(stack,(float)(pf[i]-'0'));
}
else
{
p1=pop(stack);
p2=pop(stack);
if(pf[i]=='+')
{
p3=p2+p1;
break;
}
else if(pf[i]=='-')
{
p3=p2-p1;
break;
}
else if(pf[i]=='*')
{
p3=p2*p1;
break;
}
else if(pf[i]=='/')
{
p3=p2/p1;
break;
}
else if(pf[i]=='^')
{
p3=pow(p2,p1);
break;
}
push(stack,p3);
}
}
return(pop(stack));
}
