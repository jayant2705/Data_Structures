#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insertfirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn->next = NULL;
    newn -> prev = NULL;    //$

    if(*first ==NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        (*first) -> prev = newn;
        *first = newn;
    }
}

void Insertlast(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn->next = NULL;
    newn -> prev = NULL;    //$

    if(*first ==NULL)
    {
        *first = newn;
    }
    else
    {
        
    }
}

void InsertAtPos(PPNODE first, int no , int pos)
{}

void Deletefirst(PPNODE first)
{}

void Deletelast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int no , int pos)
{}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | <=> ",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return 0;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    Insertfirst(&head,51);
    Insertfirst(&head,21);
    Insertfirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("Number of NOdes are : %d\n",iRet);
    
    return 0;
}