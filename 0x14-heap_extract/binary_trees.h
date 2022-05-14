#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
} heap_t;

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s binary_tree_j;
typedef struct binary_tree_s heap_t;

int heap_extract(heap_t **root);
int heightNodeCount(heap_t *root);
void heapIt(heap_t *root);
heap_t *last(heap_t *root);
void binary_tree_print(const heap_t *);

#endif /* BINARY_TREES_H */