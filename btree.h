struct node *create(struct node *head, int data)
{

	if (head == NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->data = data;
		head->left = NULL;
		head->right = NULL;
		return head;
	}
	else if (data < head->data)
	{
		head->left = create(head->left, data);
	}
	else if (data > head->data)
	{
		head->right = create(head->right, data);
	}
	else
	{
		printf("duplicate value are not allowed!");
	}

	return head;
}

struct node *reSearch(struct node *head, int key)
{
	struct node *temp = head;

	if (temp == NULL || temp->data == key)
	{
		return temp;
	}
	else if (key < temp->data)
	{
		reSearch(temp->left, key);
	}
	else
	{
		reSearch(temp->right, key);
	}
}

void postOrder(struct node *head)
{
	if (head)
	{
		postOrder(head->left);
		postOrder(head->right);
		printf("%d ", head->data);
	}
}
void preOrder(struct node *head)
{
	if (head)
	{
		printf("%d", head->data);
		preOrder(head->left);
		preOrder(head->right);
	}
}
void inOrder(struct node *head)
{
	if (head)
	{
		inOrder(head->left);
		printf("%d ", head->data);
		inOrder(head->right);
	}
}

struct node *insert (struct node *head, int data) {

	if (head == NULL)
	{
		head = (struct node  *)malloc(sizeof(struct node));
		head->data = data;
		head->left = NULL;
		head->right = NULL;
		return head;
	}
	else if (data < head->data)
	{
		head->left = create(head->left, data);
	}
	else if (data > head->data)
	{
		head->right = create(head->right, data);
	}
	else
	{
		printf("duplicate value are not allowed!");
	}

	return head;
}