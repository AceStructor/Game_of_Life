#ifndef GAMEBASE_H
#define GAMEBASE_H

/*
*	Class GameBase.h
*	This class defines the basic functions for the execution of game of life. Class Game.h will inherit these functions and Game.cpp will implement it.
*
*	Author: Patrick Ohlsen
*	Last Changed: 19.12.2018
*/

class GameBase
{
    public:
        /** Default constructor */
        GameBase();
        /** Default destructor */
        virtual ~GameBase();

        virtual bool gameLoop(); //returns true if cells are remaining
        virtual void gameInit();
        virtual void generationRecalc();

    protected:

    private:
};

#endif // GAMEBASE_H
