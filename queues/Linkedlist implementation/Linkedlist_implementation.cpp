// linked list implementation of queue
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class queue
{
    node *front, *rear;
public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};  
void queue::enqueue(int x)
{
    node *t = new node;
    if (t == NULL)
        cout << "Queue is full";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int queue::dequeue()
{
    int x = -1;
    if (front == NULL)
        cout << "Queue is empty";
    else if(front==NULL){
        x=front->data;
        delete front;
        front=rear=NULL;
    }
    else
    {
        node *t = front;
        x = front->data;
        front = front->next;
        delete t;
    }
    return x;
}
void queue::display()
{
    node *p = front;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << q.dequeue() << endl;
    q.display();
    return 0;
}