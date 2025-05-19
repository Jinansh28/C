#include<stdio.h>
#include<stdlib.h>

struct heap{
    int size;
    int *arr;
};

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int a[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[largest]){
        largest=l;
    }
    if(r<n && a[r]>a[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(&a[i],&a[largest]);
        heapify(a,n,largest);
    }
}

void heapsort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    struct heap *h=(struct heap *)malloc(sizeof(struct heap));
    h->size=6;
    h->arr=(int *)malloc(sizeof(int)*h->size);
    h->arr[0] = 1;
    h->arr[1] = 9;
    h->arr[2] = 8;
    h->arr[3] = 2;
    h->arr[4] = 4;
    h->arr[5] = 5;
    heapsort(h->arr,h->size);
    printArray(h->arr,h->size);
}