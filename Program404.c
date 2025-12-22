//Circular Linkedlist Using C.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE first , PPNODE last , int no)
{
    PNODE  newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;


    if((*first)==NULL && (*last)== NULL)
    {
        *first = newn;
        *last = newn;
    }

    else
    {
        newn->next = *first;
        *first = newn;
    
    }
    (*last)->next = *first;
}

void InsertLast(PPNODE first , PPNODE last , int no)
{
     PNODE  newn = NULL;
     PNODE temp =NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;


    if((*first)==NULL && (*last)== NULL)
    {
        *first = newn;
        *last = newn;
    }

    else
    {

        
        (*last)->next = newn;// @
        *last = newn;       //  @
    }

    (*last)->next = *first;
}



void DeleteFirst(PPNODE first , PPNODE last )
{

    PNODE temp = NULL;

    if(*first == NULL && *last == NULL) //case 1 
    {   
        return;
    }

    else if(*first == *last)    //case 2
    {
            free(*first);
            *first = NULL;
            *last = NULL;
    }


    else                       //case 3 
    {
        temp = *first;
        *first  = (*first)->next;
        free(temp);


        (*last)->next = *first;
    }
}



void DeleteLast(PPNODE first , PPNODE last)
{
    PNODE temp = NULL;

     if(*first == NULL && *last == NULL) //case 1 
    {   
        return;
    }

    else if(*first == *last)    //case 2
    {
            free(*first);
            *first = NULL;
            *last = NULL;
    }


    else                       //case 3 
    {
        temp = *first;

        while(temp->next != *last)
        {
            temp = temp->next;
           
            

        }

        free(*last);

        *last = temp;

        (*last)->next = *temp;
    }
}
void DeleteAtPos(PPNODE first , PPNODE last ,int pos)
{}

void Display(PNODE first , PNODE last )
{   
    do
    {
        printf("| %d |->",first->data);
        first = first ->next;

    } while(first != last->next);

    printf("\n");
}

int Count(PNODE first , PNODE last )
{ 
    int iCnt = 0 ;
     do
    {
        iCnt++;
        first = first ->next;

    } while(first != last->next);

    printf("\n");

}

void InsertAtPos(PPNODE first , PPNODE last , int no, int pos)
{
    int iCount = 0;

    iCountnt = Count(*first,*last);

     iSize = Count(*first);

    if(pos<1 || pos> iSize +1 )
    {
        printf("Invalid position");
    }

    if(pos == 1 )
    {
        InsertFirst(*first);
    }
    
     else if(pos = iSize +1 )
     {
        Insertlast(*first);
     }

     else
     {
        PNODE newn = NULL;
        PNODE temp = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *first;

        for(iCnt = 1 ; iCnt <pos -1 ; iCnt ++)
        {
            temp = temp->next;
        }

        newn->next = temp ->next; 
        temp->next= newn;
     }

    
    
}

void DeleteAtPos(PPNODE first , PPNODE last , int pos)
{

}





int main()
{

    int iRet = 0 ;
    PNODE head  = NULL; 
    PNODE tail  =NULL; // @


    InsertFirst(&head , &tail, 11);
    InsertFirst(&head , &tail, 34);
    InsertFirst(&head , &tail, 45);


    InsertLast(&head, &tail , 111);
    InsertLast(&head, &tail , 121);
      InsertLast(&head, &tail , 151);


      Display(head, tail);


    iRet = Count(head,tail);

    printf("Number of nodes are %d\n", iRet);

    DeleteFirst(&head, &tail);
    DeleteFirst(&head, &tail);

    DeleteLast(&head, &tail);
    DeleteFirst(&head, &tail);

    Delete(&head, &tail);
    DeleteFirst(&head, &tail);

    return 0 ;
}