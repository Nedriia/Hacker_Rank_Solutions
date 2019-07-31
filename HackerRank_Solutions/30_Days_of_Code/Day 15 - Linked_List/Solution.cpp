#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};
class Solution {
public:
	Node *head, *tail;

	Solution()
	{
		head = NULL;
		tail = NULL;
	}
	Node* insert(Node *head, int data)
	{
		//Complete this method
		Node *temp = new Node(data);
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		return head;
	}




	void display(Node *head)