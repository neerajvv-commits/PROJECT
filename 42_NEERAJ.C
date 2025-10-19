 #include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node * next;
};
//node creation
struct node * createnode(int d){
 struct node * temp=(struct node *)malloc(sizeof(struct node));
 temp->data=d;
 temp->next=NULL;
 
 return temp;
}
//insertion of element at the end of the list
struct node * insert(struct node * head,int d){
 struct node * temp=head;
 while(temp->next!=NULL){
 temp=temp->next;
 }
 struct node * temp1=createnode(d);
 temp->next=temp1;
 return head;
}
//print function
void print(struct node * head){
 struct node * temp=head;
 while(temp!=NULL){
 printf("%d ",temp->data);
 temp=temp->next;
 }
}
//code for deletion of element from the end of the list

//main function
int main(){
 struct node * head=createnode(41);
 insert(head,42);
 insert(head,0);

 print(head);
}


