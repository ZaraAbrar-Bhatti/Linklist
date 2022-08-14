#include <iostream>
#include <string>
using namespace std;
class Node{
public:
	int data;
	Node*next;
};
class linklist{
public:
	Node *head;
	Node *tail;
	linklist(){
		head == NULL;
		tail == NULL;
	}
	void addnode(int posi){
		Node *ptr = new Node;
		ptr->data = posi;
		ptr->next = NULL;
		if (head == NULL){
			head = ptr;
			tail = ptr;
			ptr == NULL;
		}
		else{
			tail->next = ptr;
			tail = ptr;
			ptr == NULL;
			delete ptr;
		}
	}
	void print(){
		for (Node *i = head; i != tail;){
			cout << i->data;
			i = i->next;
		}
		cout << tail->data;
	}
};
int main(){
	linklist l;
	l.addnode(1);
	l.addnode(2);
	l.addnode(3);
	l.addnode(4);
	l.addnode(5);
	l.print();
	system("pause");
	return 0;
}