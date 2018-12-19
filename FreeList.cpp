#include "FreeList.h"

FreeList::FreeList()
{
    allocated = new Item[spaceCounter];
    allocated[0].row = 0;
    allocated[0].next = &allocated[0];
    allocated[0].prev = &allocated[0];
    allocatedCounter = 1;
    reallocate();
}

FreeList::~FreeList()
{
    delete allocated;
}

Item * FreeList::head()
{
    return &allocated[0];
}

bool FreeList::isEmpty()
{
    return (head()->next==head());
}

Item * FreeList::first()
{
    return head()->next;
}

Item * FreeList::last()
{
    return head()->prev;
}

void FreeList::checkFreeList()
{
    if(head()->next == head())
    {
        reallocate();
    }
}

void FreeList::reallocate()
{
    spaceCounter += 10;
    Item *new_allocated = new Item[spaceCounter];
    for(long i=0;i<spaceCounter;i++)
    {
        new_allocated[i] = allocated[i];
    }
    allocated = new_allocated;
    delete new_allocated;
    allocatedCounter--;
    for(allocatedCounter; allocatedCounter < spaceCounter; allocatedCounter++)
    {
        this->moveAfter(&allocated[allocatedCounter], this->head());
    }
}
