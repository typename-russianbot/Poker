#include "../includes/poker/Suit.h"

//~ @fn: testbench(void)
int testbench(void)
{
    //? @vars:
    RenderWindow window(DISPLAY, "P.O.K.E.R");
    Card club("resources/textures/Clubs/ten.png");
    Suit clubs(Clubs);
    clubs.add(&club);

    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(clubs); 
        window.display();
    }

    return 0;
}

//~ @fn: main(void)
int main(void)
{
    return testbench();
}