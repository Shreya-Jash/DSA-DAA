#include<stdio.h>

void enqueue();
void dequeue();
void display();

int queue[100];
int i;
int front=-1;
int rear=-1;

int main()
{
    int ch,n;
    printf("Enter the size of queue- ");
    scanf("%d",&n);
    do
    {
        printf("Enter your choice- ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3;
            display();
        case 4:
            exit (1);
            break;
        default:
            printf("Please enter a correct choice!");
            break;
        }
    } while (ch!=4);
    return 0;
}

void enqueue()
{
    int val;
    if (rear==n)
    {
        printf("Queue is full");
    }
    else{
        printf("Enter the value to be inserted- ");
        scanf("%d",&val);
        queue[i]=val;
        rear=rear+1;
    }
    
}

void dequeue()
{
    if (front==rear)    
    {
        printf("Empty queue");
    }
    else{
        
    }
}

void dequeue()
{

}

void display()
{

}
