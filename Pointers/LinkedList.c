#include"stdio.h"
#include"stdlib.h"
typedef struct node {
  int x, y;
  struct node *next;
}LinkedList;
int main(int argc, char const *argv[])
{
    LinkedList *start=NULL;
    LinkedList *newNode=(struct node *)malloc(sizeof(LinkedList));
    newNode->x=10;
    newNode->y=12;
    newNode->next=NULL;
    start=newNode;
    LinkedList *newNode2=(struct node *)malloc(sizeof(LinkedList));
    newNode2->x=20;
    newNode2->y=12;
    newNode2->next=NULL;
    newNode->next=newNode2;
    LinkedList *temp=start;
    while(temp!=NULL){
        printf("%d ",temp->x);
        temp=temp->next;
    }
    return 0;
}
