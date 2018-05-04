#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root,*temp=NULL;
void serch(struct node *root);
void ins()
{
    temp=new node;
    int item;
    cout<<"\nEnter Element : ";
    cin>>item;
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    else
    {
        serch(root);
    }
}

void serch(struct node *root)
{
    if((temp->data < root->data) && (root->left==NULL))
    {
        root->left=temp;
    }
    else if((temp->data > root->data) && (root->right==NULL))
    {
        root->right=temp;
    }
    else if((temp->data < root->data) && (root->left!=NULL))
    {
        serch(root->left);
    }
    else if((temp->data > root->data) && (root->right!=NULL))
    {
        serch(root->right);
    }
}


void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"\n1. Insert \n2. Preorder\n3. Inorder\n4. Postorder \nChoose your options - >";
        cin>>choice;
        switch(choice)
        {
        case 1:
            ins();
            break;

        case 2:
            preorder(root);
            break;

        case 3:
            inorder(root);
            break;

        case 4:
            postorder(root);
            break;

        default:
            cout<<"Wrong Choice.";
        }
    }
}
