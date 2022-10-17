// inserting a node at the beginning
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void insert(int x)
{
    struct Node *temp;
    temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
};
void Display(int x)
{
    struct Node *temp = head;
    printf("The list is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
};
int main()
{
    head = NULL;
    printf("how many numbers?\n");
    int n, x;
    scanf("%d", &n);
    for (int i; i < n; i++)
    {
        printf("enter the number\n");
        scanf("%d", &x);
        insert(x);
        Display(x);
    }
}