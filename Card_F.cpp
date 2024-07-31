#include <iostream>
#include <string>
#include <fstream>


using namespace std;

void Cards();

int main() {

    Cards();


    return 0;
}
void Cards()
{

    const int Rows=4 , Columns= 13;
    string Suits[4]={ "Clubs", "Hearts","Spades","Diamonds"};
    string Deck[Rows][Columns] = {{"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" },
                         {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" },
                         {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" },
                         {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" }};
    ofstream Cards_File;
    Cards_File.open("Cards_File.txt");
    if (Cards_File.is_open())
    {
        for (int i = 0; i <Rows ;i++) {

            for (int j = 0; j < Columns; j++) {
                Cards_File<<Deck[i][j]<<" of " << Suits[i]<<" ";
                Cards_File<<endl;
            }

        }

        Cards_File.close();
    }
    else{
        cout << "Unable to open file";
    }
}




