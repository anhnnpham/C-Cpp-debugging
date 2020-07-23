#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int val;
  struct node * left;
  struct node * right;
} node_t;

void insert(node_t *tree, int val);
void print_tree(node_t * current);
void printDFS(node_t * current);

int main()
{
  node_t * test_list = (node_t *) malloc(sizeof(node_t)); // root
  // malloc check
  /* set values explicitly, alternative would be calloc() */
  test_list->val = 0; // initialisation not val
  test_list->left = NULL;
  test_list->right = NULL;

  // unbalanced tree
  insert(test_list, 5); // root
  insert(test_list, 8); // 8 > 5 -> right
  insert(test_list, 4); // left
  insert(test_list, 3); // left

  printDFS(test_list);
  printf("\n");
}

void insert(node_t * tree, int val)
{
  if (tree->val == 0)
  {
    /* insert on current (empty) position */
    tree->val = val;
  }
  else
  {
    if (val < tree->val) // less than = left
    {
      /* insert left */
      if (tree->left)
        insert(tree->left, val);
      else
      {
        tree->left = (node_t *) malloc(sizeof(node_t));
        /* set values explicitly, alternative would be calloc() */
        tree->left->val = val;
        tree->left->left = NULL;
        tree->left->right = NULL;
      }
    }
    else // greater than or equal = right
      {
        /* insert right */
        if (tree->right)
          insert(tree->right,val);
        else
        {
          tree->right = (node_t *) malloc(sizeof(node_t));
          /* set values explicitly, alternative would be calloc() */
          tree->right->val = val;
          tree->right->left = NULL;
          tree->right->right = NULL;
        }
      }
  }
}
/* a binary tree that has insertion and printing capabilities.
 * This tree is ordered but not TODO: balanced. This example maintains its ordering at insertion time.
 * Change the print routine to depth-first search pre-order. */
/* depth-first search */
void printDFS(node_t * currentTree)
{ // inorder (Left, Root, Right)
  // if (currentTree == NULL)         return;   /* security measure - empty tree */
  
  // if (currentTree->left != NULL)   printDFS(currentTree->left);     // not at bottom
  // if (currentTree != NULL) // security measure - at bottom
  //   printf("%d ", currentTree->val);
  // if (currentTree->right != NULL)  printDFS(currentTree->right);    // not at bottom

  // preorder (Root, Left, Right)
  if (currentTree == NULL)         return;   /* security measure - empty tree */
  
  if (currentTree != NULL) // security measure - at bottom
    printf("%d ", currentTree->val);
  if (currentTree->left != NULL)   printDFS(currentTree->left);     // not at bottom
  if (currentTree->right != NULL)  printDFS(currentTree->right);    // not at bottom
  // return; here as a best practice???
}