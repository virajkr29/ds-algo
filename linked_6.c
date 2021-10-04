#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;

};
 struct node *p;


void add(struct node **q,int num){
   struct node *temp,*r;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = num;
   temp->link = *q;
   *q = temp;
   display(p);

   }
void display(struct node *q){
  while(q != NULL){
    printf("%d ",q->data);
    q = q->link;
  }
  printf("\n\n");
}
int main(){

    p = NULL;
    add(&p,56);
    add(&p,67);
    add(&p,88);


 return 0;
}
