// C++ program to count number of nodes
// in loop in a linked list if loop is
// present
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

// Returns count of nodes present in loop.
int countNodes(struct Node* n)
{
	int res = 1;
	struct Node* temp = n;
	while (temp->next != n) {
		res++;
		temp = temp->next;
	}
	return res;
}

/* This function detects and counts loop
nodes in the list. If loop is not there
in then returns 0 */
int countNodesinLoop(struct Node* list)
{
	struct Node *slow_p = list, *fast_p = list;

	while (slow_p && fast_p && fast_p->next) {
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		/* If slow_p and fast_p meet at
		some point then there is a loop */
		if (slow_p == fast_p)
			return countNodes(slow_p);
	}

	/* Return 0 to indicate that
	there is no loop*/
	return 0;
}

struct Node* newNode(int key)
{
	struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));
	temp->data = key;
	temp->next = NULL;
	return temp;
}

// Driver Code
int main()
{
	struct Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);

	/* Create a loop for testing */
	head->next->next->next->next->next = head->next;

	cout << countNodesinLoop(head) << endl;

	return 0;
}

// This code is contributed by SHUBHAMSINGH10
