#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insertInMiddle(struct Node* head, int x){
    int counter=0;
    struct Node* p = head;
    while(p!=NULL){
        p=p->next;
        counter++;
    }
    p = head;
    if(counter%2==0){
        counter = counter/2;
    }else{
        counter = counter/2 +1;
    }
    for(int i=1;i<counter;i++){
        p = p->next;
    }
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = p->next;
    p->next = temp;

    return head;

}

void printList(struct Node* node){
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int first;
        scanf("%d", &first);
        struct Node *head;
        head = (struct Node *)malloc(sizeof(struct Node));
        head->data = first;
        head->next = NULL;
        struct Node *tail = head;

        for(int i=1;i<n;++i){
            int data;
            scanf("%d", &data);
            struct Node *temp;
            temp = (struct Node *)malloc(sizeof(struct Node));
            temp->data = data;
            temp->next = NULL;
            tail->next = temp;
            tail = tail->next;
        }

        int x;
        scanf("%d", &x);
        head = insertInMiddle(head, x);
        printList(head);
    }
    return 0;
}

