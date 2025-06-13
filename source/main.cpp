#include "../includes/poker/Suits.h"

//~ @fn: testbench(void)
int testbench(void)
{
    //? @vars:
    RenderWindow window(DISPLAY, "P.O.K.E.R");
    Card club("resources/textures/Clubs/ten.png");
    Club c; 

    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        // window.draw(club);
        window.draw(c); 
        window.display();
    }

    return 0;
}

//~ @fn: main(void)
int main(void)
{
    return testbench();
}