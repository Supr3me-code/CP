#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, int newData){
    struct Node* new_node = new Node(newData);
    struct Node* last = *headRef;
    if(*headRef == NULL){
        *headRef = new_node;
        return;
    }
    while(last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

int modularNode(Node* head, int k);

int main(){
    int t;
    cin>>t;
    while(t--)
}