/*   In addition to the 9.1, perform the following menu driven operations on BST.
i. insert an element to the BST
ii. display the largest element
iii. display the smallest element
iv. height of a node
v. count number of leaf nodes  */
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
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
int Largest(struct Node*root)
{
    if(root==NULL)
    {
        return -1;
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}
int Smallest(struct Node*root)
{
    if(root==NULL)
    {
        return -1;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}
int Height(struct Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return fmax(Height(root->left),Height(root->right))+1;
}
int CountLeaf(struct Node*root)
{
     if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    else
    {
        return CountLeaf(root->left)+CountLeaf(root->right);
    }
}
void Traversal(struct Node*root)
{
    if(root==NULL)
    {
        return;
    }
    Traversal(root->left);
    printf("%d ",root->data);
    Traversal(root->right);
}
int main()
{
    struct Node*root=NULL;
    printf("\tMENU BASED : \n");
    printf("Press 1 for Insert an element\n");
    printf("Press 2 for Displaying the Largest Element\n");
    printf("Press 3 for Displaying the smallest Element\n");
    printf("Press 4 for Height of the BST\n");
    printf("Press 5 for Count of the Leaf Node\n");
    printf("Press 6 for Displaying in the Sorted Order\n");
    printf("Press 7 for Exit\n");
    int choice;
    do
    {
        printf("Enter the choice :\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                printf("Enter the element to be inserted \n");
                int x;
                scanf("%d",&x);
                root=Insert_BST(root,x);
                printf("SuccessFully Inserted\n");
                break;
            }
            case 2:
            {
                printf("Largest Element is : %d \n",Largest(root));
                break;
            }
            case 3:
            {
                printf("Smallest Element is : %d \n",Smallest(root));
                break;
            }
            case 4:
            {
                printf("Height of the binary tree : %d \n",Height(root));
                break;
            }
            case 5:
            {
                printf("Total number of leaf Nodes : %d \n",CountLeaf(root));
                break;
            }
            case 6:
            {
                printf("Displaying your Tree in Sorted Order \n");
                Traversal(root);
                printf("\n");
                break;
            }
        }
    } while (choice!=7);
    
    return 0;
}