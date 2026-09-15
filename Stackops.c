#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
    int item ;
    if(top==MAX-1)
   {
    printf("Stack Overflow \n");
   }
   else
   {
    printf("Enter the element : ");
    scanf("%d",&item);
    top++;
    stack[top]=item;
    printf("%d pushed into stack \n",item);
   }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow ! \n");
    }
    else 
    {
        printf("%d popped from stack \n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty \n");
    }
    else
    {
        printf("Stack elements are : \n");
        for(i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}
int main()
{
    int choice ;
    while(1)
{
    printf("\n---STACK MENU---\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Demonstrate Overflow / Underflow\n");
    printf("4. Display\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch (choice)
   {
     case 1:
    push();
    break;

    case 2:
    pop();
    break;

    case 3:
    printf("\n Overflow occurs when Stack is full \n");
     printf("\n Underflow occurs when Stack is empty \n");
     break;

    case 4:
    display();
    break;

    case 5:
    printf("Exiting program ---\n");
    return 0;
    
    default:
    printf("Ivalid Choice !\n");
    
}
}
    return 0;
}