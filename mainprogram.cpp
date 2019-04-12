#include <iostream>
using namespace std;

void intro(){
     cout << "Nama        : Noval Aditya Marlon" << endl
          << "NPM         : 1817051019" << endl
          << "Kelas       : B" << endl
          << "===============================================================================\n\n";
}

struct nodeStack{
    int data;
    nodeStack *next;
};
int menu;
char choice;

class myStack{
    private:
    nodeStack *top;

    public:
    myStack(){
        top = NULL;
    }
    
    bool isEmpty(){
        return (top==NULL); 
    }
    
    void push(int newData){
        nodeStack *newNode = (nodeStack*) malloc(sizeof(nodeStack));
        newNode->data = newData;
        newNode->next = top;
        top = newNode;
        cout << "Element : " << top->data << ", pushed.\n";
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
                cout << node->data << endl;
                node = node->next;
            }
        }
        cout << endl;
    }
    
    int mainMenu(){
        do{
            cout << "####Stack with Singly Linked List####\n"
                << "1. Push Stack\n"
                << "2. Pop Stack\n"
                << "3. Print My Stack\n"
                << "4. Exit\n"
                << "Your Choice : ";
            cin >> menu;
            system("clear");
        }while(menu<1 || menu>4); 
        return menu;
    }

    char userChoice(){
        cout << "Wanna do again (y/n) : ";
        cin >> choice;
        return choice;
    }
};

int main()
{
    myStack s;
    int elementValue;

    do{
        system("clear");
        intro();
        s.mainMenu();
        switch (menu){
        case 1:
            do{
                cout << "Enter Element Value : ";
                cin >> elementValue;
                s.push(elementValue);
                s.userChoice();
            }while(choice=='Y' || choice=='y' || choice=='1');
            break;
        
        case 2:
            do{
                s.pop();
                s.userChoice();
            }while(choice=='Y' || choice=='y' || choice=='1');
            break;
        
        case 3:
            do{
                s.printStackList();
                s.userChoice();
            }while(choice=='Y' || choice=='y' || choice=='1');
        }
    }while(menu!=4);
    return 0;
}
