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
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *headRef;
    new_node->data = newData;
    new_node->next = NULL;
    if(*headRef == NULL){
        *headRef = new_node;
        return;
    }
    while(last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

int sumOfLastN_Nodes(struct Node* head, int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n,m,tmp;
        cin>>m>>n;
        while(m--){
            cin>>tmp;
            append(&head, tmp);
        }
        cout<<sumOfLastN_Nodes(head, n)<<endl;
    }
    return 0;
}

int sumOfLastN_Nodes(struct Node* head, int n){
    int sum=0,length=0;
    struct Node* ref = head;
    while(head->next!=NULL){
        length++;
        head = head->next;
    }
    length++;
    int x = length - n;
    while(x--){
        ref = ref->next;
    }
    while(ref->next!=NULL){
        sum += ref->data;
        ref = ref->next;
    }
    sum += ref->data;
    return sum;
}