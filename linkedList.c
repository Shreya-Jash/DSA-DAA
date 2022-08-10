#include<stdio.h>
#include<stdlib.h>

// Functions list
    void insertFirst();
    void insertLast();
    void insertAtAny();
    void deleteFirst();
    void deleteLast();
    void deleteAny();
    void display();

struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    int ch;
    printf("\t1.Insert First.\n\t2.Insert Last.\n\t3.Inset Middle.\n\t4.Delete First.\n\t5.Delete Last .\n\t6.Delete Middle.\n\t7.Display.\n\t8.EXIT\n");
    do
    {
        printf("Enter Your choice - ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                insertFirst();
                break;
            case 2:
                insertLast();
                break;
            case 3:
                insertAtAny();
                break;
            case 4:
                deleteFirst();
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                deleteAny();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(1);
                break;
            default:
                printf("Please enter a valid option !!!");
                break;
        }
    } while (ch!=8);
    return 0;
}

void insertFirst()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted-");
    scanf("%d",&ptr->data);
    if (head == NULL)
    {
        head=ptr;
        ptr->next=NULL;
    }
    else
    {
        ptr->next=head;
        head=ptr;
    }
     printf("\nInserted !\n");
}

void insertLast()
{
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to insert - ");
    scanf("%d",&ptr->data);
    if (head==NULL)
    {
        ptr->next=head;
        head=ptr;
    }
    else
    {
        ptr1=head;
        while (ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
        ptr->next=NULL;
        printf("\nInserted !\n");
    }
}

void insertAtAny()
{
    struct node *ptr,*ptr1;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to insert - ");
    scanf("%d",&ptr->data);
    if (head==NULL)
    {
        head=ptr;
        ptr->next=NULL;
    }
    else{
        ptr1=head;
        printf("Enter the value of node after which you want to insert- ");
        scanf("%d",&x);
        while (ptr1->data!=x)       
        {
            ptr1=ptr1->next;
        }
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        printf("\nInserted !\n");
    }
}

void deleteFirst()
{
    struct node *ptr=head;
    if (head==NULL)
    {
        printf("Enpty List");
    }
    else{
        head=ptr->next;
        free(ptr);
        printf("\nNode Deleted!\n");
    }
    
}

void deleteLast()
{
    struct node *ptr=head,*ptr1;
    if (head==NULL)
    {
        printf("Enpty List");
    }
    else{
        ptr1=head;
        while (ptr1->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);      
        printf("\nNode deleted\n");
    }
}

void deleteAny()
{
    struct node *ptr=head,*ptr1;
    if (head==NULL)
    {
        printf("Enpty List");
    }
    else{
        int x;
        printf("Enter the value after which node you want to delete- ");
        scanf("%d",&x);
        ptr1=head;
        while (ptr->data!=x)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=ptr->next;
        free(ptr);  
        printf("\nNode deleted\n");
    }
}

void display()
{
    struct node *ptr=head;
    if (head==NULL)
    {
        printf("Nothing to display\n");
    }
    else{
        printf("Printing...\n");
        while (ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
    
}


