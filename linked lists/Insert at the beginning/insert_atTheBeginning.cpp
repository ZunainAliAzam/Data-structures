// inserting a node at the beginning
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
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
    cout<<"The list is: ";
    while (temp != NULL)
    {
        cout<< temp->data<<" "<<endl;
        temp = temp->next;
    }
};
int main()
{
    head = NULL;
    printf("how many numbers?\n");
    int n, x;
    cin>>n;
    for (int i; i < n; i++)
    {
        printf("enter the number\n");
        cin>>x;
        insert(x);
        Display(x);
    }
}