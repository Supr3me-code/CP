#include <bits/stdc++.h>
using namespace std;

struct StackNode{
    int data;
    StackNode *next;
    StackNode(int a){
        data = a;
        next = NULL;
    }
};

class MyStack{
    private:
    StackNode *top;

    public:
    void push(int);
    int pop();
    MyStack(){
        top = NULL;
    }
};

int main(){
    int T;
    cin >>T;
    while(T--){
        MyStack *sq = new MyStack();

        int Q;
        cin>>Q;
        while(Q--){
            int QueryType = 0;
            cin >> QueryType;
            if(QueryType == 1){
                int a;
                cin>>a;
                sq->push(a);
            }
            else if(QueryType==2){
                cout<<sq->pop()<<" ";
            }
        }
        cout<<endl;
    }
}

void MyStack ::push(int x){
    if(top == NULL){
        top = new StackNode(x);
    }
    else{
        StackNode *temp = new StackNode(x);
        temp->next = top;
        top = temp;
    }
    
}

int MyStack ::pop(){
    StackNode *temp = top;
    if(temp == NULL){
        return -1;
    }else{
        temp = top->next;
        int r = top->data;
        delete(top);
        top = temp;
        return r;
    }
}