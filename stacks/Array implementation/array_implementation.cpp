// array implementation of stack
#include <iostream>
#include <stack>
#include<cstring>
using namespace std;
#define MAX 1000
class Stack
{
    int a[MAX]; // Maximum size of Stack
    int top;    // top of stack
public:
    // connstructor
    Stack() { top = -1; }; // top is -1 when stack is empty
    void push(int x)
    {
        if (top == MAX - 1) // if stack is full
        {
            cout << "Stack overflow";
            return;
        }
        else
        {
            a[++top] = x;                        // increment top and add element
            cout << x << " pushed into stack\n"; // print the element
        }
    }
    void pop()
    {
        if (top == -1) // if stack is empty
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else
        {
            int x = a[top--]; // decrement top and return element
            // return x; // return the element
        }
    }
    void peek() // return the top element
    {
        if (top == -1) // if stack is empty
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            int x = a[top]; // return element
            cout << "Top element is: " << x << endl;
        }
    }
    bool isempty() // check if stack is empty
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // function for reversing a string
    void Reverse(char *a,int n)
    {   
        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            s.push(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = (s).top();
            s.pop();
        }
    };
    void Display() // print all elements of stack
    {
        if (top == -1) // if stack is empty
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << "The stack is: ";
            for (int i = 0; i <= top; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);  // 10 pushed into stack
    s.Display(); // The stack is: 10
    s.push(20);  // 20 pushed into stack
    s.Display(); // The stack is: 10 20
    s.push(30);  // 30 pushed into stack
    s.Display(); // The stack is: 10 20 30
    s.peek();    // Top element is: 30
    cout << "Popped from stack \n"<< endl;
    s.pop();     // 30
    s.Display(); // print all elements of stack
    s.pop();     // remove the top element
    s.Display();
    s.pop();     // stack underflow
    s.Display(); // stack is empty
    s.pop();
    s.Display();
    // printing the reverse of a string using stack
    char c[10];
    cout << ("Enter a string") << endl;
    gets(c);
    s.Reverse(c,strlen(c));
    cout << "output=" << c << endl;
    return 0;
}