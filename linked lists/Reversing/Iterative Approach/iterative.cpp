// reversing a linked list by iterative approach
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}; // creating a node
struct Node *head;
void insert(int x)
{ // inserting a node at the last position
    struct Node *temp;
    temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        struct Node *lastnode = head;
        while (lastnode->next != NULL)
        {
            lastnode = lastnode->next;
        }
        lastnode->next = temp;
    }
};
void Display()
{ // print all the elements in the list
    struct Node *temp = head;
    printf("The list is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
};
void Reverse()
{ // reversing a linked list using iteration
    struct Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
};
int main()
{
    head = NULL;
    insert(2); // 2
    insert(4); // 2 4
    insert(6); // 2 4 6
    insert(5); // 2 4 6 5
    Display(); // list is: 2 4 6 5
    printf("After Reversing the list\n");
    Reverse(); // reversing a list
    Display(); // reversed list: 5 6 4 2
    return 0;
}