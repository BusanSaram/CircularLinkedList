#pragma once
#include<iostream>

using namespace std;

struct Node { // circularlinkedlist는 일단 singleLinkedList와 똑같이 단방향이다. 
	int data;
	Node* next;
};
// single linked list는 마지막 노드의 next가 nullptr인데 원형리스트는 마지막 노드의
// next가 다시 첫 노드(head)를 가리킨다. 그래서 tail에서 한칸만 가면 바로 head가 나온다.
// 이 성질 덕분에 tail 하나만 들고 있어도 head를 O(1)에 구할 수 있다.
class CircularLinkedList
{
public:
	Node* tail; //head가 아니라 왜 tail을 남기냐면, 이렇게 하면 앞 뒤 양쪽 삽입이 둘다 O(1)이 되기 때문이다.
public:
	void AddNode(int _data);
	void InsertNode(int _index, int _data);
	void UpdateNode(int _index, int _data);
	void DeleteNodeData(int _data);
	void DeleteIndex(int _index);
	int GetNodeData(int _index);
	bool IsEmpty();
	void printAll();
	int Count();
public:
	CircularLinkedList();
	~CircularLinkedList();
};

