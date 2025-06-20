//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//? @author: Matthew J. Hong
//? @brief: Poker [SFML]

//? @paragraph
//? Want to create a poker program that can run 3-card or 5-card depending on the user's selection
//? Start w/ 3card
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//& Dependencies
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

//~ Includes

#include <iostream>
#include <string.h>
#include <complex>
#include <cstdlib>
#include <utility>
#include <vector>
#include <ctime>
#include <stack>

//~ Namespaces
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//& Macros
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ Display
#define DISPLAY \
    VideoMode { VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height } //? @var: DISPLAY

//~ Fonts
#define SixtyFourConvergence "resources/fonts/SixtyfourConvergence-Regular.ttf" //? @var: SixtyFourConvergence
#define RubikWetPaint "resources/fonts/RubikWetPaint-Regular.ttf"               //? @var: RubikWetPaint
#define Kablammo "resources/fonts/Kablammo-Regular.ttf"                         //? @var: Kablammo
#define BungeeSpice "resources/fonts/BungeeSpice-Regular.ttf"                   //? @var: BungeeSpice
#define Roboto "resources/fonts/Roboto-Regular.ttf"                             //? @var: Roboto
#define Kadawa "resources/fonts/Kadwa-Regular.ttf"                              //? @var: Kadawa

//~ Colors
#define Transparent Color::Transparent //? @var: Transparent
#define White Color::White             //? @var: White
#define Black Color::Black             //? @var: Black
#define Green Color::Green             //? @var: Green
#define Blue Color::Blue               //? @var: Blue
#define Red Color::Red                 //? @var: Red
#define Yellow Color{255, 255, 0}      //? @var: Yellow
#define Gray Color{128, 128, 128}      //? @var: Gray
#define DarkGray Color{64, 64, 64}     //? @var: DarkGray
#define Brown Color{165, 42, 42}       //? @var: Brown
#define Tan Color{210, 180, 140}       //? @var: Tan
#define Indigo Color{75, 0, 130}       //? @var: Indigo
#define Navy Color{0, 0, 128}          //? @var: Navy
#define DarkRed {139, 0, 0}            //? @var: DarkRed
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//& Enums
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ @enum: Suit
enum Suit
{
    Diamonds,
    Spades,
    Hearts,
    Clubs,
    NullSuit
};

//~ @enum: Rank
enum Rank
{
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Ace,
    Jack,
    Queen,
    King,
    NullRank
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//& Global Functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ Suit
//~ @overload: operator<<
ostream &operator<<(ostream &, Suit);

//~ Rank
//~ @overload: operator<<
ostream &operator<<(ostream &, Rank);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////