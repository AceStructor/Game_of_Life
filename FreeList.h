#ifndef FREELIST_H
#define FREELIST_H

#include <LinkedList.h>


class FreeList : public LinkedList
{
    public:
        /** Default constructor */
        FreeList();
        /** Default destructor */
        ~FreeList();

        Item * head();
        bool isEmpty();
        Item * first();
        Item * last();
        void checkFreeList();
        void reallocate();
    protected:

    private:
        Item * allocated;
        long allocatedCounter;
        long spaceCounter;
};

#endif // FREELIST_H
