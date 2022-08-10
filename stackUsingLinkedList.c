#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *top;

int main()
{
    int ch;
    printf("1.Push\n2.Pop\n3.Display\n4.Exit");
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
                printf("\nPlease enter a correct choice!!!");
                break;
        }
    }while (ch!=4);
    return 0;   
}

void push()
{
    int val;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Can't insert");
    }
    else{
        printf("Enter the value- ");
        scanf("%d",&val);
        if (top == NULL)
        {
            ptr->data=val;
            ptr->next=NULL;
            top=ptr;
        }
        else{
            ptr->data=val;
            ptr->next=top;
            top=ptr;
        }
        printf("Inserted!");
    }
    
}

void pop()
{
    struct node *ptr;
    if (top== NULL)
    {
        printf("Empty stack");
    }
    else{
        ptr=top;
        top=top->next;
        free(ptr);
        printf("Deleted");
    }
    
}

void display()
{
    struct node *ptr=top;
    if (top==NULL)
    {
        printf("Empty stack");
    }
    else{
        while (ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next; 
        }
    }
    
    
}