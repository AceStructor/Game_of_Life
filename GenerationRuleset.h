#ifndef GENERATIONRULESET_H
#define GENERATIONRULESET_H

/*
*	Class GenerationRuleset.h
*	This Class defines all functions a cell item needs to be created properly. The Class generation.h will inherit these functions and they will be implemented in generation.cpp
*
*	Author: Patrick Ohlsen
*	Last Changed: 19.12.2018
*/

#include <Cell.h>

class GenerationRuleset
{
    public:
        virtual Cell * getUpCell(Cell * a);
        virtual Cell * getDownCell(Cell * a);
        virtual Cell * getRightCell(Cell * a);
        virtual Cell * getLeftCell(Cell * a);
        virtual Cell * getUpRightCell(Cell * a);
        virtual Cell * getUpLeftCell(Cell * a);
        virtual Cell * getDownRightCell(Cell * a);
        virtual Cell * getDownLeftCell(Cell * a);

        virtual void setUpCell(Cell * a, Cell * b); // Set Up pointer of Cell a to Cell b
        virtual void setDownCell(Cell * a, Cell * b); //...
        virtual void setRightCell(Cell * a, Cell * b); //...
        virtual void setLeftCell(Cell * a, Cell * b); //...
        virtual void setUpRightCell(Cell * a, Cell * b); //...
        virtual void setUpLeftCell(Cell * a, Cell * b); //...
        virtual void setDownRightCell(Cell * a, Cell * b); //...
        virtual void setDownLeftCell(Cell * a, Cell * b); //...

        virtual long getPosX();
        virtual long getPosY();

        virtual void setPosX(long x);
        virtual void setPosY(long y);

        virtual bool getState();
        virtual void setState(bool state);
    
        virtual Cell * findCell(long posX, long posY); //see findCellFlowchart.pdf
        virtual void createNewLivingCell(Cell * a); //see createNewLivingCellFlowchart.pdf
    
        virtual void killCell(Cell * a); //Sets state to dead. If an adacient cell is living, the memory stays allocated. If all adacient cells are dead, the memory must be cleared AND the function has to be called for ALL adacient cells. The cell then also has to be deleted from row and column list.
        virtual void connectCells(Cell * a, Cell * b); //Connects the cell a to cell b by calculating the realtive position and setting the pointer on each cell to the other one

        virtual void checkRules(Cell * a); //When planning the next generation, all cells must be tested according to the rules.
    protected:

    private:
};

#endif // GENERATIONRULESET_H
