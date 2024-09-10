/*  In addition to 9.2, perform deletion of an element in the BST using function. */
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*left,*right;
};
struct Node*Create_Node(int x)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct Node*Insert_BST(struct Node*root,int x)
{
    if(root==NULL)
    {
        return Create_Node(x);
    }
    else if(root->data>x)
    {
        root->left=Insert_BST(root->left,x);
    }
    else
    {
        root->right=Insert_BST(root->right,x);
    }
    return root;
}
void inorderTraversal(struct Node*root)
{
        if(root!=NULL)
        {
        inorderTraversal(root->left);
        printf("%d ",root->data);
        inorderTraversal(root->right);
        }
}
struct Node*getSuccessor(struct Node*curr)
{
    curr=curr->right;
    while(curr!=NULL&&curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
struct Node*DelNode(struct Node*root,int x)
{
    if(root==NULL)
        return;
    if(root->data>x)
    {
        root->left=DelNode(root->left,x);
    }
    else if(root->data<x)
    {
        root->right=DelNode(root->right,x);
    }
    else
    {
        if(root->left==NULL)
        {
            struct Node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct Node*temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            struct Node*succ=getSuccessor(root);
            root->data=succ->data;
            root->right=DelNode(root->right,succ->data);
        }
        return root;
    }
}
int main()
{
    struct Node*root=NULL;
    int n;
    printf("Enter the numbers of nodes you want to enter\n ");
    scanf("%d",&n);
    printf("Enter the data for each node according to BST \n");
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        root=Insert_BST(root,x);
    }
    printf("Inorder Traversal \n");
    inorderTraversal(root);
    printf("\n");
    printf("Enter the element you want to delete \n");
    int ele;
    scanf("%d",&ele);
    root=DelNode(root,ele);
    printf("Displaying after Deletion \n");
    inorderTraversal(root);
    return 0;
}