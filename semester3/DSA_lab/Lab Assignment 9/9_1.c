/*  Write a program to create a binary search tree of n data elements using linked list and perform the 
following menu driven operations:
i. preorder traversal 
ii. postorder traversal
iii. inorder traversal
iv. search an element   */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node
{
    int data;
    struct Node*left,*right;
};
struct Node*create_Node(int x)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct Node*Create_BST(struct Node*root,int x)
{
    if(root==NULL)
    {
        return create_Node(x);
    }
    else if(root->data>x)
    {
        root->left=Create_BST(root->left,x);
    }
    else
    {
        root->right=Create_BST(root->right,x);
    }
    return root;
}
void PreorderTraversal(struct Node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
}
void postorderTraversal(struct Node*root)
{
        if(root!=NULL)
        {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ",root->data);
        }
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
bool Search(struct Node*root,int element)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==element)
    {
        return true;
    }
    else if(root->data>element)
    {
        return Search(root->left,element);
    }
    else
    {
        return Search(root->right,element);
    }
}
int main()
{
    struct Node*root=NULL;
    int n;
    printf("Enter the numbers of nodes you want to enter\n ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        root=Create_BST(root,x);
    }
    printf("Traversals \n");
    printf("Pre order Traversal \n");
    PreorderTraversal(root);
    printf("\nPost order traverfsal \n");
    postorderTraversal(root);
    printf("\nInorder Traversal \n");
    inorderTraversal(root);
    int element;
    printf("Enter the element to be search \n");
    scanf("%d",&element);
    if(Search(root,element))
    {
        printf("Element : %d is found \n",element);
    }
    else
    {
        printf("Element : %d is not found \n",element);
    }
    return 0;
}