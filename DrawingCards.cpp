#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

string Cards();

int main() {
cout<<"Your Card is \n"
    << Cards();


    return 0;
}
string Cards()
{


    string Suits[]={ "Clubs", "Hearts","Spades","Diamonds"};
    string Deck[] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };
    string card;
    srand(time(0));
    int DeckValue = 1+(rand() % 13);
    int CardSuit = 1+(rand() % 4);
    card += Deck[DeckValue];
    card += " of ";
    card += Suits[CardSuit];
    return card;


}