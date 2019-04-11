#include <iostream>
#define MAX_STACK_SIZE 10

struct Element {
    int data;
};

class MyStack {
    private:
    Element stack[MAX_STACK_SIZE];

    int top=-1;

    public:
    bool isEmpty(){
        return (top<0); 
    }
    bool isFull(){
        return top == MAX_STACK_SIZE-1;
    }
    void push(int data){
        Element item;
        item.data=data;
        if (!isFull()){
            stack[++top]=item;
        } else {
            std::cout<<"Stack Penuh"<<std::endl;
        }
    }
    Element pop(){
        Element item;
        if (!isEmpty()){
            item = stack[top--];
        } else {
            std::cout<<"Stack Kosong"<<std::endl;
        }
        return item;
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
