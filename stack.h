#include <iostream>
#include "node.h"

using namespace std;

template <class ItemType>
class stack
{
private:
	NodeType<ItemType> *topPtr;


public:

	stack();
	~stack();

	void push(ItemType item);
	void pop();
	
	ItemType getTop();
	bool IsFull();
	bool IsEmpty();



};

template <class ItemType>   ///constructor
stack <ItemType> :: stack()   //signature for constructor all the constructor does is set top pointer to null which meean stack is empty 
{
	topPtr = NULL;
};

template <class ItemType>  //destructor
stack <ItemType> :: ~stack()   
{
	NodeType<ItemType> *tempPtr;     //makes new pointer of type NodeType!!! points to top most node
	while (topPtr != NULL)
	{
		tempPtr = topPtr;
		topPtr = topPtr->next;       //this is the internal pointer!!! you find inside of each node
		delete tmpPtr;
				
	}
};

template <class ItemType>   ///constructor
void stack<ItemType> :: push(ItemType item)   //signature for constructor all the constructor does is set top pointer to null which meean stack is empty 
{
	if (isFull() == false)
	{
		NodeType<ItemType> *temPtr; //create a temp pointer
		temPtr = new NodeType<ItemType>;  //makes temppointer point to new node created
		tempPtr->info = item;    //dereference pointer to info and set info = to item you pushed in
		temPtr->next = topPtr;

};
