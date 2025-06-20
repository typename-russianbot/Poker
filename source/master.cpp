#include "../includes/master.h"

//& Global Functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ @overload: Suit
ostream &operator<<(ostream &out, Suit suit)
{
    switch (suit)
    {
    case Diamonds:
        out << "♦";
        break;

    case Spades:
        out << "♠";
        break;

    case Hearts:
        out << "♥";
        break;

    case Clubs:
        out << "♣";
        break;

    default:
        break;
    }
    return out;
}

//~ @overload: Rank
ostream &operator<<(ostream &out, Rank rank)
{
    switch (rank)
    {
    case Two:
        out << 2;
        break;

    case Three:
        out << 3;
        break;

    case Four:
        out << 4;
        break;

    case Five:
        out << 5;
        break;

    case Six:
        out << 6;
        break;

    case Seven:
        out << 7;
        break;

    case Eight:
        out << 8;
        break;

    case Nine:
        out << 9;
        break;

    case Ten:
        out << 10;
        break;

    case Ace:
        out << "Ace";
        break;

    case Jack:
        out << "Jack";
        break;

    case Queen:
        out << "Queen";
        break;

    case King:
        out << "King";
        break;

    default:
        break;
    }
    return out;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////