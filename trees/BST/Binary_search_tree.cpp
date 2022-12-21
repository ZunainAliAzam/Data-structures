// writing bst implementation in cpp
#include <iostream>
using namespace std;
class BSTnode
{
public:
    int data;
    BSTnode *left;
    BSTnode *right;
    BSTnode *root;
    BSTnode *getnewnode(int data)
    {
        BSTnode *newnode = new BSTnode();
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    BSTnode *insert(BSTnode *root, int data)
    {
        if (root == NULL)
        { // empty tree
            root = getnewnode(data);
        }
        else if (data <= root->data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }
        return root;
    };
    BSTnode* Search(BSTnode* root, int data)
    {
        if (root == NULL)
        {
            return NULL;
        }
        else if (root->data == data)
        {
            return root;
        }
        else if (data <= root->data)
        {
            return Search(root->left, data);
        }
        else
        {
            return Search(root->right, data);
        }
    };
     // find min element in bst
    BSTnode* findmin(BSTnode *root)
    {
        if (root == NULL)
        {
            cout << "tree is empty";
            return NULL;
        }
        else if (root->left == NULL)
        {
            return root;
        }
        else
        {
            return findmin(root->left);
        }
    };
    // finding max element in bst
    BSTnode* findmax(BSTnode *root)
    {
        if (root == NULL)
        {
            cout << "tree is empty";
            return NULL;
        }
        else if (root->right == NULL)
        {
            return root;
        }
        else
        {
            return findmax(root->right);
        }
    };
    BSTnode* deletenode(BSTnode *root, int data)
    {
        if (root == NULL)
            return root;
        else if (data < root->data)
        {
            return root->left = deletenode(root->left, data);
        }
        else if (data > root->data)
        {
           return root->right = deletenode(root->right, data);
        }
        else
        {
            // case 1: no child
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                root = NULL;
            }
            // case 2: one child
            else if (root->left == NULL)
            {
                BSTnode *temp = root;
                root = root->right;
                delete temp;
            }
            else if (root->right == NULL)
            {
                BSTnode *temp = root;
                root = root->left;
                delete temp;
            }
            // case 3: 2 children
            else
            {
                BSTnode *temp = findmin(root->right);
                root->data = temp->data;
                root->right = deletenode(root->right, temp->data);
            }
        }
        root->deletenode(root, data);
    };
};

int main()
{
    BSTnode *root = NULL;
    root->insert(root, 15);
    root->insert(root, 10);
    root->insert(root, 20);
    root->insert(root, 25);
    root->insert(root, 8);
    root->insert(root, 12);
    //root->deletenode(root,15);
    root->findmin(root);
    root->findmax(root);
    int number;
    cout << "Enter number be Searched" << endl;
    cin >> number;
    if (root->Search(root, number) == 1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
