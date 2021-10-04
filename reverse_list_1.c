#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *link;
};

void add(struct node **q,int num){
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 temp->data = num;
 temp->link = *q;
 *q = temp;
}

int count(struct node *q){
   int count=0;
  while(q !=NULL){
     count ++;
     q = q->link;
  }
  printf("Node Counted: %d \n",count);
}


void display(struct node *q){
  while(q !=NULL){
    printf("%d ",q->data);
    q = q->link;
  }
  printf("\n\n");
}

void reverse(struct node **x){
   struct node *q,*r,*s;
   q = *x;
   r = NULL;
   while(q !=NULL){
    s = r;
    r = q;
    q = q->link;
    r->link = s;
   }
   *x = r;
}
int main(){
    struct node *p;
    p = NULL;

    add(&p,56);
    add(&p,12);
    add(&p,23);
    add(&p,33);
    add(&p,98);
    add(&p,98);

    display(p);

    reverse(&p);
    display(p);
    count(p);

   return 0;
}
