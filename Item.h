#ifndef ITEM_H
#define ITEM_H

/*
*	Class item.h
*	This Class contains the basic elements of a List Item that is used in a double Linked List for identification of the cells.
*
*	Author: Patrick Ohlsen
*	Last Changed: 19.12.2018
*/

#include <Cell.h>

class Item
{
public:
	public:
	Item() {}

	Item(long x, Item * b, Item * c)
	{
		next = b;
		prev = c;
		row = x;
	}

	Item(Cell * a, long x, Item * b, Item * c)
	{
		pointer = a;
		next = b;
		prev = c;
		column = x;
	}

	Item(Item * a, long x, Item * b, Item * c)
	{
		columnDummy = a;
		next = b;
		prev = c;
		row = x;
	}

	~Item() {}

	Cell * pointer;
	Item * columnDummy; //the column pointer will point to the dummy Element of the column list of this row.
	long column;
	long row;
	Item * next;
	Item * prev;
};

#endif // ITEM_H
