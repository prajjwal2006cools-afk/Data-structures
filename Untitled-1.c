#include<stdio.h>
#include<ctype.h>
#include<math.h>

int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    char exp[20];
    int i,opr1,opr2,result;
    printf("Enter the postfix expression: ");
    scanf("%s", exp);

    for(i=0; exp[i]!='\0'; i++)
    {
        if(isdigit(exp[i]))
        {
            push(exp[i]-'0');
        }
        else
        {
            opr2 = pop();
            opr1 = pop();
            switch(exp[i])
            {
                case '+': result = opr1 + opr2;
                    break;
                case '-': result = opr1 - opr2;
                    break;
                case '*': result = opr1 * opr2;
                    break;
                case '/': result = opr1 / opr2;
                    break;
                case '%': result = opr1 % opr2;
                    break;
                case '^': result = pow(opr1, opr2);
                    break;
            }
            push(result);
        }
    }
    printf("Result: %d", pop());
    return 0;
}
