#include "CircularLinkedList.h"

void CircularLinkedList::AddNode(int _data) //head에 값을 넣는거 하지만 tail밖에 없어서 tail부터 시작
{
	Node* newNode = new Node;
	newNode->data = _data;
	if (tail == nullptr) {
		newNode->next = newNode;
	}
	else {
		newNode->next = tail->next;
		tail->next = newNode;
	}
	tail = newNode;
}

void CircularLinkedList::InsertNode(int _index, int _data)
{
}

void CircularLinkedList::UpdateNode(int _index, int _data)
{
}

void CircularLinkedList::DeleteNodeData(int _data)
{
}

void CircularLinkedList::DeleteIndex(int _index)
{
}

void CircularLinkedList::ClearAllNode()
{
}

int CircularLinkedList::GetNodeData(int _index)
{
	return 0;
}

bool CircularLinkedList::IsEmpty()
{
	return Count() == 0;
}

void CircularLinkedList::printAll()
{
}

int CircularLinkedList::Count()
{
	return 0;
}

CircularLinkedList::CircularLinkedList()
{
	tail = nullptr;
}

CircularLinkedList::~CircularLinkedList()
{
	ClearAllNode();
}
