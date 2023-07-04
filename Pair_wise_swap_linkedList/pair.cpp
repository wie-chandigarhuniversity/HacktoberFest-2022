
#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
};

node *pairWiseSwap(node *head)
{

	if (head == NULL || head->next == NULL)
		return head;

	node *prev = head;
	node *curr = head->next;

	head = curr;

	while (true)
	{
		node *next = curr->next;
		curr->next = prev;

		if (next == NULL || next->next == NULL)
		{
			prev->next = next;
			break;
		}

		prev->next = next->next;

		prev = next;
		curr = prev->next;
	}
	return head;
}

void push(node **head_ref, int new_data)
{

	node *new_node = new node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printList(node *node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{
	node *start = NULL;

	push(&start, 7);
	push(&start, 6);
	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	cout << "Linked list before "
		 << "calling pairWiseSwap() ";
	printList(start);

	start = pairWiseSwap(start);

	cout << "\nLinked list after calling"
		 << "pairWiseSwap() ";
	printList(start);

	return 0;
}
