#include "../../includes/poker/Suits.h"

//& Resources:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//* @public: Clubs(void)
//* @def: Constructor

Club::Club(void) : mSuit(Suit::Clubs)
{
    int x = 0;
    for (int i = 0; i < 13; i++)
    {
        mCards[i].move({static_cast<float>(x + 150), 0});
        switch (i)
        {
        case 0:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 1:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 2:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 3:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 4:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 5:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 6:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 7:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 8:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 9:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 10:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 11:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        case 12:
            mCards[i] = Card{"resources/textures/Clubs/two.png"};
            break;

        default:
            break;
        }
    }
    return;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//* @public: ~Clubs(void)
//* @def: Destructor

Club::~Club(void) { return; }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//& Functions
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//* @public:
//* @def:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
