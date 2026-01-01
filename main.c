// implement a BST library btree.h with operations - create, search, insert, preorder, postorder, inOrder
//  write menu driven program

#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *left, *right;
	int data;
};

#include "./btree.h"

void main()
{
	struct node *head = NULL;

	head = create(head, 3);
	head = create(head, 4);
	head = create(head, 2);
	head = create(head, 1);
	head = create(head, 30);

	// inOrder(head);

	// struct node *result = reSearch(head, 39);
	// if (result != NULL)
	// {
	// 	printf("\nval is %d", result->data);
	// }
	// else
	// {
	// 	printf("\nKey not found");
	// }

	head = insert(head, 34);

	inOrder(head);

}
