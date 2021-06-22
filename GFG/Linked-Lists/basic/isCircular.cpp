#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

bool isCircular(struct Node* head);

int main(){
    int T,i,n,l,k;
    cin>>T;
    while(T--){
        cin>>n>>k;
        Node *head = NULL, *tail =NULL;
        int x;
        cin>>x;
        head = new Node(x);
        tail = head;
        for(int i=0;i<n-1;i++){
            cin>>x;
            tail->next = newNode(x);
            tail = tail->next;
        }
        if(k==1 && n>=1){
            tail->next = head;
        }
        printf("%d\n", isCircular(head));
    }
    return 0;
}

bool isCircular(Node *head){
    struct Node *ref = head;
    while(ref->next!=head && ref->next!=NULL){
        ref = ref->next;
    }

    if(ref->next == head){
        return 1;
    }

    if(ref->next == NULL){
        return 0;
    }

}