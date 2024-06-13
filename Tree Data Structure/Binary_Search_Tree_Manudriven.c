#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// function Prototyping
struct node *tree;
void create_tree(struct node *);
struct node *insertElement(struct node *, int);
void preorderTraversal(struct node *);
void inorderTraversal(struct node *);
void postorderTraversal(struct node *);
struct node *findSmallestElement(struct node *);
struct node *findLargestElement(struct node *);
struct node *deleteElement(struct node *, int);
struct node *mirrorImage(struct node *);
int totalNodes(struct node *);
int totalExternalNodes(struct node *);
int totalInternalNodes(struct node *);
int Height(struct node *);
struct node *deleteTree(struct node *);

int main()
{
    int option, val;
    struct node *ptr;
    create_tree(tree);
    do
    {
        printf("\n\n");
        printf(" ******MAIN MENU******* \n");
        printf("Enter 1. Insert Element\n");
        printf("Enter 2. Preorder Traversal\n");
        printf("Enter 3. Inorder Traversal\n");
        printf("Enter 4. Postorder Traversal\n");
        printf("Enter 5. Find the smallest element\n");
        printf("Enter 6. Find the largest element\n");
        printf("Enter 7. Delete an element\n");
        printf("Enter 8. Count the total number of nodes\n");
        printf("Enter 9. Count the total number of external nodes\n");
        printf("Enter 10. Count the total number of internal nodes\n");
        printf("Enter 11. Determine the height of the tree\n");
        printf("Enter 12. Find the mirror image of the tree\n");
        printf("Enter 13. Delete the tree\n");
        printf("Enter 14. Exit\n\n");

        printf("Enter your option : ");
        scanf("%d", &option);
        printf("\n");
        switch (option)
        {
        case 1:
            printf("Enter the value of the New node : ");
            scanf("%d", &val);
            tree = insertElement(tree, val);
            break;
        case 2:
            printf("The elements of the tree in Preorder Traversal : ");
            preorderTraversal(tree);
            break;
        case 3:
            printf("The elements of the tree in Inorder Traversal : ");
            inorderTraversal(tree);
            break;
        case 4:
            printf("The elements of the tree in Postorder Traversal : ");
            postorderTraversal(tree);
            break;
        case 5:
            ptr = findSmallestElement(tree);
            printf("Smallest element is : %d", ptr->data);
            break;
        case 6:
            ptr = findLargestElement(tree);
            printf("Largest element is : %d", ptr->data);
            break;
        case 7:
            printf("Enter the element to be deleted : ");
            scanf("%d", &val);
            tree = deleteElement(tree, val);
            break;
        case 8:
            printf("Total no. of nodes = %d", totalNodes(tree));
            break;
        case 9:
            printf("Total no. of external nodes = %d",
                   totalExternalNodes(tree));
            break;
        case 10:
            printf("Total no. of internal nodes = %d",
                   totalInternalNodes(tree));
            break;
        case 11:
            printf("The height of the tree = %d", Height(tree));
            break;
        case 12:
            mirrorImage(tree);
            break;
        case 13:
            deleteTree(tree);
            printf("Tree Deleted Successfull\n");
            break;
        }
    } while (option != 14);
    getch();
    return 0;
}
void create_tree(struct node *tree)
{
    tree = NULL;
}
struct node *insertElement(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
    return tree;
}
void preorderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        printf("%d\t", tree->data);
        preorderTraversal(tree->left);
        preorderTraversal(tree->right);
    }
}
void inorderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        inorderTraversal(tree->left);
        printf("%d\t", tree->data);
        inorderTraversal(tree->right);
    }
}
void postorderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        postorderTraversal(tree->left);
        postorderTraversal(tree->right);
        printf("%d\t", tree->data);
    }
}
struct node *findSmallestElement(struct node *tree)
{
    if ((tree == NULL) || (tree->left == NULL))
        return tree;
    else
        return findSmallestElement(tree->left);
}
struct node *findLargestElement(struct node *tree)
{
    if ((tree == NULL) || (tree->right == NULL))
        return tree;
    else
        return findLargestElement(tree->right);
}
struct node *deleteElement(struct node *tree, int val)
{
    struct node *cur, *parent, *suc, *psuc, *ptr;
    if (tree->left == NULL)
    {
        // printf("The tree is empty\n");
        return (tree);
    }
    parent = tree;
    cur = tree->left;
    while (cur != NULL && val != cur->data)
    {
        parent = cur;
        cur = (val < cur->data) ? cur->left : cur->right;
    }
    if (cur == NULL)
    {
        printf("The value to be deleted is Not present in the tree\n");
        return (tree);
    }
    if (cur->left == NULL)
        ptr = cur->right;
    else if (cur->right == NULL)
        ptr = cur->left;
    else
    {
        // Find the in–order successor and its parent
        psuc = cur;
        cur = cur->left;
        while (suc->left != NULL)
        {
            psuc = suc;
            suc = suc->left;
        }
        if (cur == psuc)
        {
            // Situation 1
            suc->left = cur->right;
        }
        else
        {
            // Situation 2
            suc->left = cur->left;
            psuc->left = suc->right;
            suc->right = cur->right;
        }
        ptr = suc;
    }
    // Attach ptr to the parent node
    if (parent->left == cur)
        parent->left = ptr;
    else
        parent->right = ptr;
    free(cur);
    return tree;
}
int totalNodes(struct node *tree)
{
    if (tree == NULL)
        return 0;
    else
        return (totalNodes(tree->left) + totalNodes(tree->right) + 1);
}
int totalExternalNodes(struct node *tree)
{
    if (tree == NULL)
        return 0;
    else if ((tree->left == NULL) && (tree->right == NULL))
        return 1;
    else
        return (totalExternalNodes(tree->left) +
                totalExternalNodes(tree->right));
}
int totalInternalNodes(struct node *tree)
{
    if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
        return 0;
    else
        return (totalInternalNodes(tree->left) + totalInternalNodes(tree->right) + 1);
}
int Height(struct node *tree)
{
    int leftheight, rightheight;
    if (tree == NULL)
        return 0;
    else
    {
        leftheight = Height(tree->left);
        rightheight = Height(tree->right);
        if (leftheight > rightheight)
            return (leftheight + 1);
        else
            return (rightheight + 1);
    }
}
struct node *mirrorImage(struct node *tree)
{
    struct node *temp;
    if (tree != NULL)
    {
        mirrorImage(tree->left);
        mirrorImage(tree->right);
        temp = tree->left;
        tree->left = tree->right;
        tree->right = temp;
        printf("%d ", *tree->right);
    }
}
struct node *deleteTree(struct node *tree)
{
    if (tree != NULL)
    {
        deleteTree(tree->left);
        deleteTree(tree->right);
        free(tree);
    }
}