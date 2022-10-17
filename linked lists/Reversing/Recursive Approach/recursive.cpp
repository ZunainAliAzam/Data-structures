// reversing the list using recursion
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}; // creating a node
struct Node* head;
void insert(int x)
{ // inserting a node at the last position
    struct Node* temp;
    temp = new Node;
    temp->data = x;
    temp->next = NULL;
    ;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        struct Node* lastnode = head;
        while (lastnode->next != NULL)
        {
            lastnode = lastnode->next;
        }
        lastnode->next = temp;
    }
};
void Display()
{ // print all the elements in the list
    struct Node* temp = head;
    printf("The list is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
};
void Reverse(struct Node* p)
{ // reversing a linked list using recursion
    if (p->next == NULL)
    {
        head = p;
        return;
    }  // exit condition
    Reverse(p->next); // recursive call
    struct Node* q = p->next; // reversing the link
    q->next = p; 
    p->next = NULL; // breaking the link
};
int main()
{
    head = NULL;
    insert(2); // 2
    insert(4); // 2 4
    insert(6); // 2 4 6
    insert(8); // 2 4 6 8
    Display(); // list is: 2 4 6 8
    printf("After reversing the list\n");
    Reverse(head);
    Display(); // reversed list is: 8 6 4 2
}
