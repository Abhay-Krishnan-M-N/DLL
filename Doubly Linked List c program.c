#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    struct node *pre;
    int n;
    struct node *next;
}*head,*temp,*temp1,*temp2;
 
void ibeg();
void iend();
void ipos();
void traversebeg();
void traverseend(int);
void delete();
 
int count = 0;
 
void main()
{
    int ch;
 
    head = NULL;
    temp = temp1 = NULL;
 
    printf("\n 1. Insert at beginning");
    printf("\n 2. Insert at end");
    printf("\n 3. Insert at position i");
    printf("\n 4. Delete at i");
    printf("\n 5. Display from beginning");
    printf("\n 6. Display from end");
    printf("\n 7. Exit");
 
    while (1)
    {
        printf("\n Enter choice (1/2/3/4/5/6/7): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ibeg();
            break;
        case 2:
            iend();
            break;
        case 3:
            ipos();
            break;
        case 4:
            delete();
            break;
        case 5:
            traversebeg();
            break;
        case 6:
            temp2 = head;
            if (temp2 == NULL)
                printf("\n Error : List empty to display ");
            else
            {
                printf("\n Reverse order of linked list is : ");
                traverseend(temp2->n);
            }
            break;
        case 7:
            exit(0);
        default:
            printf("\n Wrong choice!");
        }
    }
}
 
void create()
{
    int val;
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->pre = NULL;
    temp->next = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &val);
    temp->n = val;
    count++;
}
 

void ibeg()
{
    if (head == NULL)
    {
        create();
        head = temp;
        temp1 = head;
    }
    else
    {
        create();
        temp->next = head;
        head->pre = temp;
        head = temp;
    }
}
 
void iend()
{
    if (head == NULL)
    {
        create();
        head = temp;
        temp1 = head;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->pre = temp1;
        temp1 = temp;
    }
}
 

void ipos()
{
    int pos, i = 2;
 
    printf("\n Enter position to be inserted : ");
    scanf("%d", &pos);
    temp2 = head;
 
    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\n Position out of range to insert");
        return;
    }
    if ((head == NULL) && (pos != 1))
    {
        printf("\n Empty list cannot insert other than 1st position");
        return;
    }
    if ((head == NULL) && (pos == 1))
    {
        create();
        head = temp;
        temp1 = head;
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        create();
        temp->pre = temp2;
        temp->next = temp2->next;
        temp2->next->pre = temp;
        temp2->next = temp;
    }
}
 
void delete()
{
    int i = 1, pos;
 
    printf("\n Enter position to be deleted : ");
    scanf("%d", &pos);
    temp2 = head;
 
    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\n Error : Position out of range to delete");
        return;
    }
    if (head == NULL)
    {
        printf("\n Error : Empty list no elements to delete");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        if (i == 1)
        {
            if (temp2->next == NULL)
            {
                printf("Node deleted from list");
                free(temp2);
                temp2 = head = NULL;
                return;
            }
        }
        if (temp2->next == NULL)
        {
            temp2->pre->next = NULL;
            free(temp2);
            printf("Node deleted from list");
            return;
        }
        temp2->next->pre = temp2->pre;
        if (i != 1)
            temp2->pre->next = temp2->next;
        if (i == 1)
            head = temp2->next;
        printf("\n Node deleted");
        free(temp2);
    }
    count--;
}
 
void traversebeg()
{
    temp2 = head;
 
    if (temp2 == NULL)
    {
        printf("List empty to display \n");
        return;
    }
    printf("\n Linked list elements from begining : ");
 
    while (temp2->next != NULL)
    {
        printf(" %d ", temp2->n);
        temp2 = temp2->next;
    }
    printf(" %d ", temp2->n);
}
 
void traverseend(int i)
{
    if (temp2 != NULL)
    {
        i = temp2->n;
        temp2 = temp2->next;
        traverseend(i);
        printf(" %d ", i);
    }
}
