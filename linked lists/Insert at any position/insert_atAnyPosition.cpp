#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int data, int n)
{
    struct Node *temp;
    temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(n==1){
        temp->next = head;
        head = temp;
        return;
    }
    Node* temp1 = head;
    for (int i; i < n-2; i++)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
    printf("\n");
};
void Display()
{
    struct Node *temp = head;
    printf("The list is: ");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
};
int main()
{
    head = NULL;  // empty list
    insert(2,1);  // List: 2
    insert(3,2);  // List: 2,3
    insert(4,1);  // List: 2,3,4
    insert(5,2);  // List: 4,5,2,3
    Display();
}