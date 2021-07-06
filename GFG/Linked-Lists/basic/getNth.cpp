#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;

    node(int x){
        data=x;
        next = NULL;
    }
};

struct node* push(struct node* head, int d){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node -> data = d;
    new_node -> next = NULL;

    if(head==NULL) return new_node;

    struct node* h = head;
    while(head->next != NULL) head = head->next;
    head->next = new_node;

    return h;
}

int GetNth(struct node* head, int index);

int main(){
    int T,i,n,l,k;
    cin>>T;
    while(T--){
        struct node *head = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++){
            cin>>l;
            head = push(head,l);
        }
        cout<<GetNth(head,k)<<endl;
        getchar();
    }
    return 0;
}

int GetNth(struct node* head, int index){
    int counter = 1;
    while(head!=NULL){
        if(counter == index){
            return head->data;
        }
        head = head->next;
        counter++;
    }
    return -1;
}

