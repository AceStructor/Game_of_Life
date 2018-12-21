#ifndef GENERATION_H
#define GENERATION_H

/*
*	Class Generation.h
*	This Class inherits all functions from generationRuleset.h and implemets them in generation.cpp
*
*	Author: Patrick Ohlsen
*	Last Changed: 21.12.2018
*/

#include <GenerationRuleset.h>
#include <RowLinkedList.h>
#include <ColumnLinkedList.h>

class Generation : public GenerationRuleset
{
    public:
        /** Default constructor */
        Generation();
        /** Default destructor */
        ~Generation();
		
		bool findCell(long posX, long posY, bool genCheck);
		bool getCellState(long posX, long posY);
        void createNewLivingCell(long posX, long posY);
    
        void killCell(long posX, long posY);
        
        void checkRules(long posX, long posY);
    protected:
		
		RowLinkedList rowLinkedList;
		
    private:
};

#endif // GENERATION_H
