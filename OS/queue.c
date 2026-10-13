#include<stdio.h>
#define MAX 5
char q[MAX];
int front = -1, rear = -1;
void enqueue()
{
    char x;
    if (rear == MAX - 1)
    
        printf("Overflow\n");
    else
    {
            printf("Enter character : ");
        scanf(" %c",&x);
    if(front == -1)
    front = 0;
    q[++rear] = x;
    }
}
void dequeue()
{
    if (front == -1)
        printf("Underflow\n");
    else
    {
        printf("Deleted : %c\n",q[front]);
        if (front == rear)
        front = rear = -1;
        else
        front++;
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Empty Queueu\n");
    else
    {
        for(i=front;i<=rear;i++)
        printf("%c",q[i]);

    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nEnter your choice : ")
        printf("\n1.Enqueue\n2.Dequeue");
        printf("\n3.Overflow/Underflow\n");
        printf("4.Display\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: if(front == -1)
                        printf("Underflow\n");
                    else if(rear == MAX - 1)
                        printf("Overflow\n");
                    else
                        printf("Queue has space\n");
                    break;
            case 4: display();
                    break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
