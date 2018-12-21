#include "Generation.h"
#include "RowLinkedList.h"
#include "ColumnLinkedList.h"

Generation::Generation()
{
    rowLinkedList = new RowLinkedList();
}

Generation::~Generation()
{
    //dtor
}

/*
* Important Note: I will create an instance of the RowLinkedList in Generation.h, 
* so if I want to check the position of any Cell, I have to reach into this Class.
*/

bool Generation::findCell(long posX, long posY, bool genCheck)
{
	rowLinkedList.find(posY)->columnDummy
}
