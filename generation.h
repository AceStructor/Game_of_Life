#ifndef GENERATION_H
#define GENERATION_H

/*
*	Class generation.h
*	This Class inherits all functions from generationRuleset.h and implemets them in generation.cpp
*
*	Author: Patrick Ohlsen
*	Last Changed: 17.12.2018
*/

#include <generationRuleset.h>


class generation : public generationRuleset
{
    public:
        /** Default constructor */
        generation();
        /** Default destructor */
        ~generation();

    protected:

    private:
};

#endif // GENERATION_H
