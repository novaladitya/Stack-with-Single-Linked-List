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
    
    Element pop(){
        nodeStack *rmNode;
        if(isEmpty())
            cout << "Stack is NULL\n";
        else{
            rmNode = top;
            cout << "Element : " << rmNode->data << ", popped.\n"
            top = top->next;
            delete rmNode;
        }
    }
    
    void printStackList(){
        if (!isEmpty()){
            for (int i=top;i>=0;i--)
                std::cout<<stack[i].data<<std::endl;
        } else {
            std::cout<<"Stack Kosong"<<std::endl;
        }
    }
    int getTop(){
        return top;
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
