#include<stdio.h>
#include<stdlib.h>

 typedef struct node{
     int data;
     struct node *left;
     struct node *right;

 }node;

 node *create(){
   node *p;
   int x;
   printf("Enter the data for the given node :");
   scanf("%d",&x);

   if(x==-1){
    return NULL;
   }
   p = (node *)malloc(sizeof(node));
   p->data = x;

   printf("Enter left child: of %d \n",x);
   p->left = create();

   printf("Enter right child: of %d \n",x);
   p->right = create();
   return p;
 }

 void preorder(node  *t){
   if(t !=NULL){
    printf("\n%d",t->data);
    preorder(t->left);
    preorder(t->right);

   }
 }

int main(){
    node *root;
    root = create();
    printf("The preorder traversal of tree is: \n");
    preorder(root);

   return 0;
}
