#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node * insertionatend(struct node * head){
    if(head==NULL){
        return head;
    }
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&ptr->data);
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

void printList(struct node *head) {
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *deletionatbeginning(struct node * head){
    if(head==NULL){
        return NULL;
    }
    struct node *ptr=head->next;
    struct node *p=head;
    int val=p->data;
    free(p);
    head=ptr;
    return head;
}

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    head=insertionatend(head);
    head=insertionatend(head);
    head=insertionatend(head);
    printList(head);
}