#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of the exact node
 * @tree: pointer to the node
 * Return: the depth of the exact node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		depth = binary_tree_depth(tree->parent);
		depth++;
	}
	return (depth);
}
