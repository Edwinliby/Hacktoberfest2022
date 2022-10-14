// C++ implementation of De-queue using circular
// array
#include <iostream>
using namespace std;

// Maximum size of array or Dequeue
#define MAX 100

// A structure to represent a Deque
class Deque {
	int arr[MAX];
	int front;
	int rear;
	int size;

public:
	Deque(int size)
	{
		front = -1;
		rear = 0;
		this->size = size;
	}

	// Operations on Deque:
	void InsertFront(int key);
	void InsertRear(int key);
	void DeleteFront();
	void DeleteRear();
	bool IsFull();
	bool IsEmpty();
	int GetFront();
	int GetRear();
};

// Checks whether Deque is full or not.
bool Deque::IsFull()
{
	return ((front == 0 && rear == size - 1)
		|| front == rear + 1);
}

// Checks whether Deque is empty or not.
bool Deque::IsEmpty() { return (front == -1); }

// Inserts an element at front
void Deque::InsertFront(int key)
{
	// check whether Deque if full or not
	if (IsFull()) {
		cout << "Overflow\n" << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1) {
		front = 0;
		rear = 0;
	}

	// front is at first position of queue
	else if (front == 0)
		front = size - 1;

	else // decrement front end by '1'
		front = front - 1;

	// insert current element into Deque
	arr[front] = key;
}

// function to inset element at rear end
// of Deque.
void Deque::InsertRear(int key)
{
	if (IsFull()) {
		cout << " Overflow\n " << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1) {
		front = 0;
		rear = 0;
	}

	// rear is at last position of queue
	else if (rear == size - 1)
		rear = 0;

	// increment rear end by '1'
	else
		rear = rear + 1;

	// insert current element into Deque
	arr[rear] = key;
}

// Deletes element at front end of Deque
void Deque::DeleteFront()
{
	// check whether Deque is empty or not
	if (IsEmpty()) {
		cout << "Queue Underflow\n" << endl;
		return;
	}

	// Deque has only one element
	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else
		// back to initial position
		if (front == size - 1)
			front = 0;

		else // increment front by '1' to remove current
			// front value from Deque
			front = front + 1;
}

// Delete element at rear end of Deque
void Deque::DeleteRear()
{
	if (IsEmpty()) {
		cout << " Underflow\n" << endl;
		return;
	}

	// Deque has only one element
	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else if (rear == 0)
		rear = size - 1;
	else
		rear = rear - 1;
}

// Returns front element of Deque
int Deque::GetFront()
{
	// check whether Deque is empty or not
	if (IsEmpty()) {
		cout << " Underflow\n" << endl;
		return -1;
	}
	return arr[front];
}

// function return rear element of Deque
int Deque::GetRear()
{
	// check whether Deque is empty or not
	if (IsEmpty() || rear < 0) {
		cout << " Underflow\n" << endl;
		return -1;
	}
	return arr[rear];
}

// Driver code
int main()
{
	Deque dq(10);

	// Function calls
	cout << "Insert element at rear end : 5 \n";
	dq.InsertRear(8);

	cout << "insert element at rear end : 10 \n";
	dq.InsertRear(19);

	cout << "get rear element "
		<< " " << dq.GetRear() << endl;

	dq.DeleteRear();
	cout << "After delete rear element new rear"
		<< " become " << dq.GetRear() << endl;

	cout << "inserting element at front end \n";
	dq.InsertFront(100);

	cout << "get front element "
		<< " " << dq.GetFront() << endl;

	dq.DeleteFront();

	cout << "After delete front element new "
		<< "front become " << dq.GetFront() << endl;
	return 0;
}
