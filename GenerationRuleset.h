#ifndef GENERATIONRULESET_H
#define GENERATIONRULESET_H

/*
*	Class GenerationRuleset.h
*	This Class defines all functions a cell item needs to be created properly. The Class generation.h will inherit these functions and they will be implemented in generation.cpp
*
*	Author: Patrick Ohlsen
*	Last Changed: 21.12.2018
*/

class GenerationRuleset
{
    public:
        virtual long getPosX();
        virtual long getPosY();
    
        virtual bool findCell(long posX, long posY); //see findCellFlowchart.pdf Returns True if Cell exists.
	    virtual bool getCellState(long posX, long posY); //returns true for living and false for dead.
        virtual void createNewLivingCell(long posX, long posY); //see createNewLivingCellFlowchart.pdf
    
        virtual void killCell(long posX, long posY); //Sets state to dead. If an adacient cell is living, the memory stays allocated. If all adacient cells are dead, the memory must be cleared AND the function has to be called for ALL adacient cells. The cell then also has to be deleted from row and column list.
        
        virtual void checkRules(long posX, long posY); //When planning the next generation, all cells must be tested according to the rules.
    protected:

    private:
};

#endif // GENERATIONRULESET_H
