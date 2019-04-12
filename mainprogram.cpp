#include <iostream>
using namespace std;

struct nodeStack{
    int data;
    nodeStack *next;
};

class myStack{
    private:
    nodeStack *top;

    public:
    myStack(){
        top == NULL;
    }
    
    bool isEmpty(){
        return (top==NULL); 
    }
    
    void push(int newData){
        nodeStack *newNode = (nodeStack*) malloc(sizeof(nodeStack));
        newNode->data = newData;
        newNode->next = top;
        top = newNode;
    }
    
    void pop(){
        nodeStack *rmNode;
        if(isEmpty())
            cout << "Stack is NULL\n";
        else{
            rmNode = top;
            cout << "Element : " << rmNode->data << ", popped.\n";
            top = top->next;
            delete rmNode;
        }
    }
    
    void printStackList(){
        nodeStack *node;
        if(isEmpty())
            cout << "Stack is NULL\n";
        else{
            node = top;
            while(node!=NULL){
                cout << node->data << " ";
                node = node->next;
            }
        }
        cout << endl;
    }
};

int main()
{
    MyStack s;
    s.push(8);
    s.push(3);
    s.push(2);
    s.push(9);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.printStackList();
    return 0;
} 
