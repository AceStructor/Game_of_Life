#ifndef ROWLINKEDLIST_H
#define ROWLINKEDLIST_H

#include <LinkedList.h>
#include <FreeList.h>

class RowLinkedList : public LinkedList
{
    public:
        /** Default constructor */
        RowLinkedList();
        /** Default destructor */
        ~RowLinkedList();

        Item * head();
        bool isEmpty();
        Item * first();
        Item * last();
        void moveToFront(Item * b);
        void moveToBack(Item * b);
        void remove(Item * b);
        void popFront();
        void popBack();
        Item * insertAfter(long x, Item * a);
        Item * insertBefore(long x, Item * b);
        void pushFront(long x);
        void pushBack(long x);
        Item * find(long x);
        long size();
    protected:

    private:
        Item * h;
        FreeList * freeList;

};

#endif // ROWLINKEDLIST_H
