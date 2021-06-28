#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Solution{
    public:
    Node* deleteNode(Node *head_ref, int x){
        x = x-1;
        struct Node *temp = head_ref;
        while(x--){
            temp = temp->next;
        }
        if(head_ref==NULL || temp == NULL){
            return NULL;
        }

        if(head_ref == temp){
            head_ref = head_ref->next;
        }

        if(temp->prev!=NULL){
            temp->prev->next = temp->next;
        }

        if(temp->next!=NULL){
            temp->next->prev = temp->prev;
        }

        free(temp);
        return head_ref;
    }
};

void printList(struct Node *node){
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    int t,x,n,i;
    scanf("%d",&t);

    while(t--){
        struct Node *temp,*head = NULL;
        scanf("%d",&n);
        temp = NULL;

        for(i=0;i<n;i++){
            scanf("%d",&x);

            if(head == NULL){
                head = new Node(x);
                temp = head;
            }
            else{
                Node *temp1 = new Node(x);
                temp->next = temp1;
                temp1->prev = temp;
                temp = temp->next;
            }
        }

        scanf("%d",&x);

        Solution ob;
        head = ob.deleteNode(head,x);

        printList(head);
        while(head->next!=NULL){
            temp = head;
            head = head->next;
            free(temp);
        }
        free(head);
    }
    return 0;
}