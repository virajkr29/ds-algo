#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
}*new_node,*head,*tail,*temp;

int main(){
    int val;
    char ch;
    int array[] = {67,78,89,45,56,23,34,78,12};
    do{

        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node: \n");
        scanf("%d",&val);
        new_node->data = val;
        new_node->next = NULL;

        if(head==NULL){
            head=new_node;
            tail=new_node;
        }else{
          tail->next = new_node;
          tail=new_node;
        }

        printf("Enter y to continue and n to exit : \n");
        scanf("\n%c",&ch);

    }while(ch=='y');

    printf("Display the data of all the nodes: \n");

    temp = head;
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }


 return 0;
}
