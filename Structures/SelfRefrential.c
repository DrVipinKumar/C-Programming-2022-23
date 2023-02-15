#include"stdio.h"
typedef struct node{
    int x, y;
    struct node *next;
}LinkedList;
int main(int argc, char const *argv[])
{
    
    LinkedList node1={2,4,NULL};
    LinkedList node2={3,6,NULL};
    LinkedList node3={20,6,NULL};
    LinkedList *start=&node1;
    node1.next=&node2;
    node2.next=&node3;
    // printf("%d ",node1.x);
    // printf("%d ",node1.next->x);
    // printf("%d ",node1.next->next->x);

    LinkedList temp =*start;
    while(temp.next!=NULL){
        printf("%d ",temp.x);
        temp=*temp.next;
        
    }
    printf("%d ",temp);
   

    return 0;
}
