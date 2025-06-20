#include "../includes/poker/Deck.h"

//~ @fn: testbench(void)
int testbench(void)
{
    Deck deck;
    deck.reshuffle();

    return 0;
}

//~ @fn: main(void)
int main(void)
{
    return testbench();
}