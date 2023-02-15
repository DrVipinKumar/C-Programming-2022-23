#include"stdio.h"

typedef struct node {
    int x, y;
    struct node *next;
}LinkList;
int main(int argc, char const *argv[])
{
    LinkList node1 ={2,3,NULL};
    LinkList node2 ={4,5,NULL};
    LinkList node3 ={6,7,NULL};
    LinkList *start=&node1;
    node1.next=&node2;
    node2.next=&node3;
    LinkList *temp=start;
    int i=0;
    while(temp!=NULL){
    i++;
    printf("Node %d\n",i);
    printf("X=%d\n",temp->x);
    printf("Y=%d\n",temp->y);
    temp=temp->next;
    }
    
    
    return 0;
}
