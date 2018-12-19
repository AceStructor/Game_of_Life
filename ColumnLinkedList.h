#ifndef COLUMNLINKEDLIST_H
#define COLUMNLINKEDLIST_H

#include <LinkedList.h>


class ColumnLinkedList : public LinkedList
{
    public:
        /** Default constructor */
        ColumnLinkedList();
        /** Default destructor */
        ~ColumnLinkedList();

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
};

#endif // COLUMNLINKEDLIST_H
