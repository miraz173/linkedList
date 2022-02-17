/*Linked List practise1*/
#include <iostream>
using namespace std;

struct Node
{
	int data = 0;
	Node* link = NULL;	
};


int main(int argc, char const *argv[])
{
	int nodeNumber;
	cout<<"Number of Nodes: ";
	cin>> nodeNumber;
	if (nodeNumber == 0)
	{
		return 0;
	}
	/*the code below is fixed. don't change it. head is a constant from now on, providing the address of list's node1*/
	struct Node* newNode = new Node();
	struct Node* head = newNode;
	struct Node* prevNode = newNode;
	/*the code above is fixed. don't change it. head is a constant from now on, providing the address of list's node1*/

	/*setting data to first node (node1)*/
	cout<<"input data : ";
	cin >> prevNode->data;

	/*input later data*/
	for (int i = 1; i < nodeNumber; ++i)
	{
		/*the segment below creates new nodes and set the newnodes address to the previous node link.*/	
		newNode = new Node;
		prevNode->link = newNode;
		prevNode = newNode;

		/*inputs data*/
		cout<<"input data : ";
		cin >> prevNode->data;
	}

	/* output the data*/
	while(head!=NULL)
	{
		cout<< head->data<<" -> ";
		head = head->link;
	}

	int i;
	cin >>i;
	return 0;
}