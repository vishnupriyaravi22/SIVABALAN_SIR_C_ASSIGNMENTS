#include <stdio.h>
#include <stdlib.h>
struct n
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct n node;
node *root;
void insert(node *temp,int data)
{
    node *newnode;
    if(temp->data > data&& temp->left!=NULL)
    {
        printf("travel left");
        insert(temp->left,data);
    }
    else if(temp->data < data && temp->right!=NULL)
    {
        printf("travel right");
        insert(temp->right,data);
    }
    
    newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->left=NULL;
    newnode->right=NULL;
    
if(temp->data > data && temp-> left== NULL)
{
    temp->left= newnode;
    printf("insert left");
}
else if(temp-> data < data && temp->right == NULL)
{
    temp->right= newnode;
    printf("insert right");
}

}
void preorder(node *temp)
{
    if(temp==NULL)
    return;
    printf(" %d ",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(node *temp)
{
    if(temp==NULL)
    return;
    postorder(temp->left);
    postorder(temp->right);
    printf(" %d",temp->data);
}
void inorder(node *temp)
{
    if(temp==NULL)
    return;
    inorder(temp->left);
    printf(" %d",temp->data);
    inorder(temp->right);
}

 
 int main()
{
    int choice,data;
    root=(node*)malloc(sizeof(node));
    printf("Enter root node : ");
    scanf("%d",&root->data);
    root->left=NULL;
    root->right=NULL;
 
    while(1)
    {
        printf("\nEnter your choice:\n1. Insert\n2.preorder\n3.postorder\n4.inorder\nChoice: ");
        scanf("%d", &choice);
        switch(choice)
        {
                case 1:
           printf("enter the data");
           scanf("%d",&data);
           insert(root,data);
           break;
           
                case 2:
            preorder(root);
            break;
                case 3:
            postorder(root);
            break;
                case 4:
            inorder(root);
            break;
            
        case 5: 
            exit(0);
        }
    }
}
