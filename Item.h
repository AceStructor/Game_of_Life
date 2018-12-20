#ifndef ITEM_H
#define ITEM_H

/*
*	Class item.h
*	This Class contains the basic elements of a List Item that is used in a double Linked List for identification of the cells.
*
*	Author: Patrick Ohlsen
*	Last Changed: 20.12.2018
*/

//#include <Cell.h>

class Item
{
public:
	public:
	Item() {}

	Item(long y, Item * b, Item * c)
	{
		next = b;
		prev = c;
		row = y;
	}

	Item(bool state, long x, Item * b, Item * c)
	{
		living = state;
		next = b;
		prev = c;
		column = x;
	}

	Item(Item * a, long y, Item * b, Item * c)
	{
		columnDummy = a;
		next = b;
		prev = c;
		row = y;
	}

	~Item() {}

	bool living;
	Item * columnDummy; //the column pointer will point to the dummy Element of the column list of this row.
	long column;
	long row;
	Item * next;
	Item * prev;
};

#endif // ITEM_H
