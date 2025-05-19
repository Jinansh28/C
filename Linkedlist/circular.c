#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void traversal(struct Node * head){
    struct Node * ptr=head;
    while(ptr->next!=head){
        printf("Element :%d \n",ptr->data);
        ptr=ptr->next;
    }
    printf("Element :%d\n\n",ptr->data);
}

struct Node* insertionAtN(struct Node*head,int n){
    struct Node *ptr=head;
    int i=1;
    while(i<n){
        ptr=ptr->next;
        i++;
    }
    struct Node * p=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&p->data);
    p->next=ptr->next;
    ptr->next=p;
    return head;
}

struct Node * insertionAtFirst(struct Node*head){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&ptr->data);
    struct Node *p=head;
    while(p->next!=head){
        p=p->next;
    }
    ptr->next=head;
    p->next=ptr;
    return ptr;
}
int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *first=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *forth=(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=forth;
    forth->data=50;
    forth->next=head;
    traversal(head);
    head=insertionAtN(head,3);
    traversal(head);
    head=insertionAtFirst(head);
    traversal(head);
}