#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void insert(int x)
{ // inserting a node at the last position
    struct Node *temp;
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
void Delete(int n)
{ // delete the node at position n
    struct Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
};
int main()
{
    head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5); // List: 2,4,6,5
    Display();
    int n;
    printf("Enter a position\n");
    scanf("%d", &n);
    Delete(n);
    Display();
}