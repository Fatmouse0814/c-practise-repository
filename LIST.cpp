#include <iostream>
using namespace std;
struct node *head = NULL;
struct node *tail, *newnode;

struct node
{
	int data;
	struct node *next;
};

struct node *create(int n)
{
	for (int i = 0; i < n; i++)
	{
		newnode = new node;
		cin >> newnode->data;
		if (head == NULL)
			head = newnode;
		else
			tail->next = newnode;
		tail = newnode;
	}
	tail->next = NULL;
	return(head);
}

void print(struct node *head)
{
	struct node *p = head;
	while (p != NULL)
	{
		cout << p->data << '\t';
		p = p->next;
	}
}