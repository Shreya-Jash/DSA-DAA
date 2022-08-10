#include<stdio.h>
#include<stdlib.h>

int stack[100],i,j,n,top=-1;

void push();
void pop();
void display();

int main()
{
    int ch;
    printf("Enter the number of elements in stack- ");
    scanf("%d",&n);
    printf("1.Push\n2.Pop\n3.Display.\n4.Exit\n");
    do
    {
        printf("\nEnter your choice- ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Enter a valid choice!!!\n");
            break;
        }
    } while (ch!=4);
    return 0;
}

void push()
{
    int val;
    if (top==n)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter an element to insert- ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("Inserted!");
    }
    
}

void pop()
{
    if (top==-1)
    {
        printf("Stack is empty!!!");
    }
    else
    {
        top=top-1;
        printf("Deleted!");
    }
    
    
}

void display()
{
    if (top==-1)
    {
        printf("Stack is empty!!!");
    }
    else{
        for ( i = 0; i <= top; i++)
        {
            printf("%d ",stack[i]);
        }
        
    }
    
}