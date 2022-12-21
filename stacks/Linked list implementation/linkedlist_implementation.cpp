#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};
class Stack
{
    Node* top;
public:
    Stack()
    {
        top = NULL;
    }
    void push(int x)
    {
        Node* temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        Node* temp;
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else
        {
            temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void topElement()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << top->data << endl;
        }
    }
    bool isempty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        Node* temp;
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }
    void reverse(){
        stack<struct Node*> S;
        Node* temp= top;
        while(temp !=NULL){
            S.push(temp);
            temp= temp->next;
        }
        Node* temp= S.top();
        top= temp;
        S.pop();
        while(S.empty()){
            temp->next=S.top();
            S.pop();
            temp=temp->next;
        }
        temp->next=NULL;
    };
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    cout << endl;
    s.pop();
    s.display();
    cout << endl;
    s.topElement();
    cout << endl;
    cout << s.isempty();
    return 0;
}