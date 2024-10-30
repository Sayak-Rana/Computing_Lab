#include "common.h"
#include "bst.h"

int compare(BSTNODE *n, DATA d)
{
    if(d<n->data)
    {
        return -1;
    }
    else if(d>n->data)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inorder(BSTNODE *root)
{
    inorder(root->left);
    printf("%d " ,root->data);
    inorder(root->right);
}

BSTNODE * search(BSTNODE *root, DATA d)
{
    if(root -> data == d)
    {
        return root;
    }
    else if(d<root->data)
    {
        return search(root->left,d);
    }
    else
    {
        return search(root->right,d);
    }
}

BSTNODE * insert_Tree(BSTNODE * root, DATA d)
{
    if(root == NULL)
    {
        root = Malloc(1,BSTNODE);
        root -> data = d;
        root -> left = NULL;
        root -> right = NULL;
        return root;
    }
    int x = compare(root,d);
    if(x<0)
    {
        root->left = insert_Tree(root->left,d);
    }
    else
    {
        root->right = insert_Tree(root->right,d);
    }
    return root;
}



int main()
{
    int capacity;
    scanf("%d",&capacity);
    BSTNODE * root = NULL;
    for(int i = 0;i<capacity;i++)
    {
        int val;
        scanf("%d ",&val);
        root = insert_Tree(root,val);
    }
    
    int val;
    printf("Enter the value to search : ");
    scanf("%d",&val);
    if(NULL == search(root,val))
    {
        printf("\nElement not found !!! ");
    }
    else
    {
        printf("\nElement found !!! ");
    }
}
