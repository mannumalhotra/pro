#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

class nodeQueue
{
	struct node* arr[];
	int startPtr;
	int endPtr;
	int sizeOfQueue;
public:
	void push(struct node*);
	struct node* get(void);
	void pop(void);
	nodeQueue();
	
};

nodeQueue::nodeQueue()
{
	this->startPtr = 0;
	this->endPtr = 0;
	this->sizeOfQueue = 100;
	this->arr = (struct node**)malloc(sizeof(int)*100);
}

void nodeQueue::push(struct node* temp)
{
	arr[this->endPtr] = &temp;
	endPtr++;
}

void nodeQueue::pop(void)
{
	this->startPtr--;
}

struct node* nodeQueue::get(void)
{
	return arr[startPtr--];
}

int main(void)
{
	nodeQueue q1;
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	q1.push(root);
	q1.push(root->left);
	struct node*tmp = q1.get();
	printf("%d",tmp->data);
}
