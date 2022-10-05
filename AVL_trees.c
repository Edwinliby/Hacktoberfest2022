#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
    int height;
} *root = NULL;

struct node *create_new_node(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->leftchild = NULL;
    ptr->rightchild = NULL;
    ptr->height = 0;
    return ptr;
}

int find_maximum(int a, int b)         
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}

int find_height_of_node(struct node *ptr)     // countiong number of nodes ( height of subtrees + 1)
{
    if (ptr == NULL)
    {
        return 0;
    }
    return 1 + find_maximum(find_height_of_node(ptr->leftchild), find_height_of_node(ptr->rightchild));
}

int find_balance_factor(struct node *ptr)     //finding balancing factor
{
    if (ptr == NULL)
    {
        return 0;
    }
    return find_height_of_node(ptr->leftchild) - find_height_of_node(ptr->rightchild);
}

struct node *rotate_RR_Imbalance(struct node *ptr)  //Left Rotation  // FUNCTION FOR QUESTION 1
{
    struct node *ptr1 = ptr->rightchild;
    struct node *ptr2 = ptr1->leftchild;
    ptr1->leftchild = ptr;
    ptr->rightchild = ptr2;

    ptr->height = find_height_of_node(ptr);
    ptr1->height = find_height_of_node(ptr1);
    return ptr1;
}

struct node *rotate_LL_Imbalance(struct node *ptr) //Right Rotation // FUNCTION FOR QUESTION 1
{
    struct node *ptr1 = ptr->leftchild;
    struct node *ptr2 = ptr1->rightchild;
    ptr1->rightchild = ptr;
    ptr->leftchild = ptr2;

    ptr->height = find_height_of_node(ptr);
    ptr1->height = find_height_of_node(ptr1);
    return ptr1;
}

struct node *rotate_RL_Imbalance(struct node *ptr) //Right Left Rotation // FUNCTION FOR QUESTION 1
{
    ptr->rightchild = rotate_LL_Imbalance(ptr->rightchild);
    return rotate_RR_Imbalance(ptr);
}

struct node *rotate_LR_Imbalance(struct node *ptr) //Left Right Rotation // FUNCTION FOR QUESTION 1
{
    ptr->leftchild = rotate_RR_Imbalance(ptr->leftchild);
    return rotate_LL_Imbalance(ptr);
}

struct node *insert_to_AVL(struct node *ptr, int data) // FUNCTION FOR QUESTION 1
{

    { // for insertion into tree

        if (ptr == NULL)
        {
            return create_new_node(data);
        }
        if (data < ptr->data)
        {
            ptr->leftchild = insert_to_AVL(ptr->leftchild, data);
        }
        else if (data > ptr->data)
        {
            ptr->rightchild = insert_to_AVL(ptr->rightchild, data);
        }
        else
        {
            return ptr;
        }
    }

    { // for rotation in case of unbalanced tree after inserting a node

        ptr->height = find_height_of_node(ptr);
        int check_balance_factor = find_balance_factor(ptr);
        if ((check_balance_factor < -1) && (ptr->rightchild->data < data)) // for RR imbalance
        {
            printf("\nInserting %d causes RR imbalance in AVL tree : Left rotation(single) performed", data);
            return rotate_RR_Imbalance(ptr);
        }
        if ((check_balance_factor < -1) && (ptr->rightchild->data > data)) // for RL imbalance
        {
            printf("\nInserting %d causes RL imbalance in AVL tree : Right-Left rotation(double) performed", data);
            return rotate_RL_Imbalance(ptr);
        }
        if ((check_balance_factor > 1) && (ptr->leftchild->data > data)) // for LL imbalance
        {
            printf("\nInserting %d causes LL imbalance in AVL tree : Right rotation(single) performed", data);
            return rotate_LL_Imbalance(ptr);
        }
        if ((check_balance_factor > 1) && (ptr->leftchild->data < data)) // for LR imbalance
        {
            printf("\nInserting %d causes LR imbalance in AVL tree : Left-Right rotation(double) performed", data);
            return rotate_LR_Imbalance(ptr);
        }
        return ptr;
    }


}

void inorder_traversal(struct node *ptr)      // FUNCTION FOR QUESTION 1 and QUESTION 2
{
    if (root == NULL)
    {
        printf("NULL\n");
    }
    if (ptr->leftchild != NULL)
    {
        inorder_traversal(ptr->leftchild);
    }
    printf("%d ", ptr->data);
    if (ptr->rightchild != NULL)
    {
        inorder_traversal(ptr->rightchild);
    }
}

void  print_height_inorder_traversal(struct node *ptr) // FUNCTION FOR QUESTION 1 and QUESTION 2
{
    if (ptr->leftchild != NULL)
    {
         print_height_inorder_traversal(ptr->leftchild);
    }
    printf("%d ", find_height_of_node(ptr) - 1);
    if (ptr->rightchild != NULL)
    {
         print_height_inorder_traversal(ptr->rightchild);
    }
}

struct node *inorder_successor(struct node *ptr)             // FUNCTION FOR QUESTION 2
{
    // inorder successor = left most node of the right subtree of the root.
    ptr = ptr->rightchild;
    while (ptr->leftchild != NULL)
    {
        ptr = ptr->leftchild;
    }
    return ptr;
}

struct node *delete_element_from_AVL(struct node *ptr, int element)          // FUNCTION FOR QUESTION 2
{
    { // for deleting node from tree

        if (ptr == NULL)
        {
            return ptr;
        }
        if (ptr->data > element)
        {
            ptr->leftchild = delete_element_from_AVL(ptr->leftchild, element);
        }
        else if (ptr->data < element)
        {
            ptr->rightchild = delete_element_from_AVL(ptr->rightchild, element);
        }
        else
        {
            if (ptr->leftchild == NULL)
            {
                struct node *ptr1 = ptr->rightchild;
                free(ptr);
                return ptr1;
            }
            else if (ptr->rightchild == NULL)
            {
                struct node *ptr1 = ptr->leftchild;
                free(ptr);
                return ptr1;
            }
            else
            {
                struct node *ptr1 = inorder_successor(ptr);
                ptr->data = ptr1->data;
                ptr->rightchild = delete_element_from_AVL(ptr->rightchild, ptr->data);
            }
        }
        if (ptr == NULL)
        {
            return ptr;
        }
    }

    { // for rotation in case of unbalanced tree after deleting a node
        ptr->height = find_height_of_node(ptr);
        int check_balance_factor = find_balance_factor(ptr);
        if ((check_balance_factor < -1) && (find_balance_factor(ptr->rightchild) <= 0)) // for RR imbalance
        {
            return rotate_RR_Imbalance(ptr);
        }
        if ((check_balance_factor < -1) && (find_balance_factor(ptr->rightchild) > 0)) // for RL imbalance
        {
            return rotate_RL_Imbalance(ptr);
        }
        if ((check_balance_factor > 1) && (find_balance_factor(ptr->leftchild) >= 0)) // for LL imbalance
        {
            return rotate_LL_Imbalance(ptr);
        }
        if ((check_balance_factor > 1) && (find_balance_factor(ptr->leftchild) < 0)) // for LR imbalance
        {
            return rotate_LR_Imbalance(ptr);
        }
        return ptr;
    }
}

int main()
{
    {
        // QUESTION 1 
        printf("----------QUESTION 1 ----------\n");
        // 12, 14, 15, 17, 3, 4, 9, 10, 20
        root = insert_to_AVL(root, 12);
        root = insert_to_AVL(root, 14);
        root = insert_to_AVL(root, 15);
        root = insert_to_AVL(root, 17);
        root = insert_to_AVL(root, 3);
        root = insert_to_AVL(root, 4);
        root = insert_to_AVL(root, 9);
        root = insert_to_AVL(root, 10);
        root = insert_to_AVL(root, 20);

        printf("\nInorder traversal of the constructed AVL tree :\n");
        inorder_traversal(root);
        printf("\nHeights of all respective nodes:\n");
        print_height_inorder_traversal(root);
    }

    {
        // QUESTION 2
        printf("\n----------QUESTION 2 ----------\n");

        for (int i = 0; i < 9; i++)
        {
            printf("\nInorder traversal of AVL tree after deleting root node = %d: ", root->data);
            root = delete_element_from_AVL(root, root->data);
            inorder_traversal(root);
        }
    }

    return 0;
}
