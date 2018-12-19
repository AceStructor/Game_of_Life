#ifndef GENERATION_H
#define GENERATION_H

/*
*	Class Generation.h
*	This Class inherits all functions from generationRuleset.h and implemets them in generation.cpp
*
*	Author: Patrick Ohlsen
*	Last Changed: 17.12.2018
*/

#include <GenerationRuleset.h>


class Generation : public GenerationRuleset
{
    public:
        /** Default constructor */
        Generation();
        /** Default destructor */
        ~Generation();

    protected:

    private:
};

#endif // GENERATION_H
