#include<stdio.h>
#include<stdlib.h>

typedef struct tnode
{
    int data;
    int left,right;
    int parent;
    int parent_val;
}TNODE;

typedef struct tree
{
    int capacity,no_nodes,root;
    TNODE * nodelist;
}TREE;

int init_tree(TREE * t,int capacity)
{
    t->capacity = capacity;
    t->no_nodes = 0;
    t->root = 0;
    t->nodelist = (TNODE*)malloc(capacity*sizeof(TNODE));
    if(t->nodelist == NULL) return -1;
    return 1;
}

// void read_tree(TREE * t,int data,int left,int right,int i)
void read_tree(TREE * t,int capacity)
{
    t->nodelist[0].parent = -1;
    for(int i = 0;i<capacity;i++)
    {
        //int data, left, right;
        scanf("%d %d %d",&t->nodelist[i].data,&t->nodelist[i].left,&t->nodelist[i].right);
        // TNODE node ;
        // node.data = data;
        // node.left = left;
        // node.right = right;
        // t->nodelist[i] = node;
        if(t->nodelist[i].left != -1)
        {
            //t->nodelist[t->nodelist[i].left].parent_val = t->nodelist[i].data;
            t->nodelist[t->nodelist[i].left].parent = i;
        }
        if(t->nodelist[i].right != -1)
        {
            //t->nodelist[t->nodelist[i].right].parent_val = t->nodelist[i].data;
            t->nodelist[t->nodelist[i].right].parent = i;
        }
    }
    t->no_nodes = capacity; 
}

void print_tree(TREE * t,int capacity)
{
    for(int i = 0;i<capacity;i++)
    {
        printf("%d %d %d\n",t->nodelist[i].data,t->nodelist[i].left,t->nodelist[i].right);
    }
}

// void preorder(TREE * t,TNODE * root)
// {
//     printf("%d ")
// }

int main()
{
    TREE t;
    int capacity;
    scanf("%d",&capacity);
    int x = init_tree(&t,capacity);
    if(x == 1)
    {
        read_tree(&t,capacity);
    }
    printf("Tree is : \n");
    print_tree(&t,capacity);
    printf("Parent of nodes are : \n");
    for(int i = 0;i<capacity;i++)
    {
        printf("%d ",t.nodelist[i].parent);
    }
    return 0;
}


