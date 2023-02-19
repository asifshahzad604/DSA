#include<iostream>
#include<string>
using namespace std;
class Node {
public:
	int value;
	Node* next;
	Node()
	{
		int value=0;
		Node* next=NULL;
	}
};

void printList(Node* head) {
	while (head != NULL)
	{
		cout << head->value << " ";
		head = head->next;
	}
	cout<<endl;
}

void insertAtFront(Node** head, int newValue) {
    // Create a new Node
	Node* newNode = new Node();

	//Store the value in it
	newNode->value = newValue;

    // Copy the first one head in next 
	newNode->next = *head;
	// Explanation: next is pointer of class Node so It can store here all attributes (value, next) of head. So now all attributes of head is in next pointer of the newNode. Pora head he next mey hey

    // Finally newNode is copied in head
	*head = newNode;
	// Why we storing newNode in head?
	// Ans: If we don't point head to newNode then there is nothing wrong, we placed the new value at the front of the list but now the newNode is head of our link list but logically head always with the name of head not with the name of newNode. For example if do not point head = newNode and ask a new Programmer for printing the list he must use head to print the list. But you see instead list start from the new value that we placed in front of the list. It starts from the previous head.

	//2nd Ans: Actually we are swapping values of two pointers objects first we copy the head in newNode's pointer attribute which is next like newNode->next=head now head is free so we copy the newNode in head. Now you thinking about where is head values which is in the beginning right, the answer is head is copied in next if you want to check you can print newNode->next->value
}

int main(){
  
	Node* head = new Node();
	Node* first = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->value = 1;
	first->value = 2;
	second->value = 4;
	third->value = 3;

	head->next = first;
	first->next = second;
	second->next = third;
	insertAtFront(&head, 9);
	printList(head);
}
