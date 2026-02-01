#include "binary_trees.h"

/**
 * binary_tree_size - return size of tree by nodes
 * @tree: pointer to exact node
 * Return: returns size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (0);
}
