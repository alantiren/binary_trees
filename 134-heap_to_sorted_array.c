#include "binary_trees.h"

/**
 * heap_to_sorted_array - Converts a Binary Max Heap to a sorted array
 * of integers.
 *
 * @heap: Pointer to the root node of the heap to convert.
 * @size: Address to store the size of the array.
 *
 * Return: Pointer to the sorted array of integers, or NULL on failure.
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
if (!heap)
{
*size = 0;
return (NULL);
}
size_t count = 0;
heap_t *current = NULL;
int *sorted_array = NULL;
count = binary_tree_size(heap);
sorted_array = malloc(sizeof(int) * count);
if (!sorted_array)
{
*size = 0;
return (NULL);
}
for (size_t i = 0; i < count; i++)
{
current = heap_extract(&heap);
sorted_array[i] = current->n;
free(current);
}
*size = count;
return (sorted_array);
}
