//array implementation of queue
#include <iostream>
using namespace std;
#define MAX 5
class queue
{
    int front, rear;
    int arr[MAX];
public: 
    queue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};


void queue::enqueue(int x)
{
    if (rear == MAX - 1)
        cout << "Queue is full";
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = x;
    }
}
int queue::dequeue()
{
    int x = -1;
    if (front == -1 || front > rear)
        cout << "Queue is empty";
    else
    {
        x = arr[front];
        front++;
    }
    return x;
}

void queue::display()
{
    if (front == -1)
        cout << "Queue is empty";
    else
    {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    cout << q.dequeue() << endl;
    q.display();
    return 0;
}