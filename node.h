#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>


using namespace std;
//container for the information and the pointer for the next object


template <class ItemType>
struct NodeType
{
	ItemType info;
	NodeType *next;
};



#endif