#include<bits/stdc++.h>
using namespace std;

int fractional_node(struct Node* head, int k);

struct Node{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        Node* ptr, *start = NULL, *ptr1;
        int n,i;
        cin>>n;

        for(i=0;i<n;i++){
            int value;
            cin>>value;
            ptr = new Node(value);
            if(start==NULL){
                start = ptr;
                ptr1 = ptr;
            }
            else{
                ptr1->next = ptr;
                ptr1 = ptr1->next;
            }
        }
        ptr->next = NULL;
        int k;
        cin>>k;
        int p = fractional_node(start, k);
        cout<<p<<endl;
    }
}

int fractional_node(struct Node *head, int k){
    int length = 0;
    struct Node* tmp = head;
    while(tmp!=NULL){
        tmp = tmp->next;
        length++;
    }
    if(length%k==0) k = length/k;
    else k = length/k + 1;
    int counter = 1;
    while(head!=NULL){
        if(counter == k){
            return head->data;
        }
        head = head->next;
        counter++;
    }
    return -1;
}