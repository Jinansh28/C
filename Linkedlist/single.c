#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node * head){
    struct Node *ptr=head;
    int i=1;
    printf("\n");
    while(ptr!=NULL){
        printf("Element %d:%d\n",i++,ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct Node *insertionAtBeginning(struct Node* head){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=head->data;
    ptr->next=head->next;
    printf("Enter data: ");
    scanf("%d",&head->data);
    head->next=ptr;
    return head;
}

struct Node *insertionAtN(struct Node* head,int n){
    if(n==1) return insertionAtBeginning(head);
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&ptr->data);
    struct Node *p=head;
    int i=1;
    while(i<n){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *insertionAtEnd(struct Node *head){
    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    printf("Enter data: ");
    scanf("%d",&ptr->data);
    return head;
}

struct Node*insertionAfterNode(struct Node*head,struct Node* p){
    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&ptr->data);
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *deleteAtBeginning(struct Node *head){
    if(head==NULL){
        return NULL;
    }
    struct Node* ptr=head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtN(struct Node* head,int n){
    struct Node* ptr=head;
    int i=1;
    while(i<n){
        ptr=ptr->next;
        i++;
    }
    struct Node *q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;
}


struct Node * deleteAtEnd(struct Node *head){
    struct Node* ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    struct Node * q=ptr->next;
    ptr->next=NULL;
    free(q);
    return head;
}


struct Node *deleteAtData(struct Node *head,int d){
    struct Node*ptr=head;
    while(ptr->next->data!=d){
        ptr=ptr->next;
    }
    struct Node*p=ptr->next;
    ptr->next=p->next;
    free(p);
    return head;
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
    forth->next=NULL;
    traversal(head);
    head=insertionAtBeginning(head);
    traversal(head);
    head=deleteAtBeginning(head);
    traversal(head);
    head=insertionAtN(head,0);
    traversal(head);
    head=deleteAtN(head,0);
    traversal(head);
    head=insertionAtEnd(head);
    traversal(head);
    head=deleteAtEnd(head);
    traversal(head);
    head=insertionAfterNode(head,third);
    traversal(head);
    head=deleteAtData(head,0);
    traversal(head);
}