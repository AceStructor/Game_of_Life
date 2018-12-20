#include "RowLinkedList.h"
#include "FreeList.h"
//#include "Cell.h"

RowLinkedList::RowLinkedList()
{
    h = new Item(0, h, h);
    freeList = new FreeList();
}

RowLinkedList::~RowLinkedList()
{
    delete h;
    //freeList.~FreeList();
}

Item * RowLinkedList::head()
{
    return h;
}

bool RowLinkedList::isEmpty()
{
    return (h->next == h);
}

Item * RowLinkedList::first()
{
    return h->next;
}

Item * RowLinkedList::last()
{
    return h->prev;
}

void RowLinkedList::moveToBack(Item * b)
{
    moveAfter(b, last());
}

void RowLinkedList::moveToFront(Item * b)
{
    moveAfter(b, head());
}

void RowLinkedList::remove(Item * b)
{
    moveAfter(b, freeList->head());
}

void RowLinkedList::popFront()
{
    remove(first());
}

void RowLinkedList::popBack()
{
    remove(last());
}

Item * RowLinkedList::insertAfter(long x, Item * a)
{
    freeList->checkFreeList();
    Item * b = freeList->first();
    moveAfter(b, a);
    b->row = x;
    b->columnDummy = new Item(0, b->columnDummy, b->columnDummy);
    return b;
}

Item * RowLinkedList::insertBefore(long x, Item * b)
{
    return insertAfter(x, b->prev);
}

void RowLinkedList::pushFront(long x)
{
    insertAfter(x, head());
}

void RowLinkedList::pushBack(long x)
{
    insertBefore(x, head());
}

Item * RowLinkedList::find(long x)
{
    Item * b = head()->next;
    while(b != head())
    {
        if(b->row == x)
        {
            return b;
        }
        else
        {
            b = b->next;
        }
    }
    return head();
}

long RowLinkedList::size()
{
    long i=0;
    Item * b = head()->next;
    while(b != head())
    {
        b = b->next;
        i++;
    }
    return i;
}
