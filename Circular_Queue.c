#include<stdio.h>
#include<stdlib.h>

void enque();
void deque();
void display();
int a[10],n=5;
int front = -1;
int rear = -1;

/*int main()
{
    char ch;
    while(1)
    {
        printf("\nCHOOSE OPERATION \ni - INSERT\nd - DELETE\np - DISPLAY\ne - EXIT\nENTER YOUR CHOICE : ");
        ch = getchar();
        switch(ch)
        {
            case 'i':
            enque();
            break;
            case 'd':
            deque();
            break;
            case 'p':
            display();
            break;
            case 'e':
            exit(0);
            break;
            // default:
            // printf("%cINVALID\n",1);
            // break;
        }
    }        
    return 0;
}*/
int main()
{
    int c;
    while(1)
    {
        printf("\n1.INSERT \n2.DELETE \n3.DISPLAY \n4.EXIT \nENTER YOUR CHOICE : ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            enque();
            break;
            case 2:
            deque();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("INVALID\n");
            break;
        }
    }
}
void enque()
{
    //printf("Enter size of array : ");
    //scanf("%d",&n);
    int x;
    if((rear+1)%n == front)
    { 
        printf("QUEUE IS OVERFLOW\n");
    }
    else
    {
        printf("Enter element : ");
        scanf("%d",&x);
        if(front == -1 && rear == -1)
        {
            front = rear = 0;
            a[rear] = x;
        }
        else
        {
            rear = (rear + 1)%n;
            a[rear] = x;
        }
    }
}
void deque()
{
    if(front == -1 && rear == -1)
    {
        printf("QUEUE IS UNDERFLOW\n");
    }
    else
    {
        if(front == rear)
        {
            printf("DELETING = %d",a[front]);
            front = rear = -1;
        }
        else
        {
            printf("DELETING = %d",a[front]);
            front = (front + 1)%n;
        }
    }
}
void display()
{
    if(front == -1)
    printf("QUEUE IS UNDERFLOW\n");
    else
    {
        printf("ARRAY IS : \n");
    // int *ptr = a;
    // for(int i = 0;i<n;i++)
    // printf("%d ",*ptr+i);

    int i = front;
    while(i != rear )
    {
        printf("%d ",a[i]);
        i = (i+1)%n;
    }
    printf("%d \n",a[i]);
    }
}
