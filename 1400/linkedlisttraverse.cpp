#include<bits/stdc++.h>
using namespace  std;

struct Node{
	int data;
	struct Node* next;
};

void printlist(Node* n){
	Node* temp = NULL;
	temp = n;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     #endif
	Node* head = NULL;
	head = new Node();

	Node* second = NULL;
	second = new Node();
	Node* third = NULL;
	third = new Node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;

	printlist(head);
	return 0;
}
