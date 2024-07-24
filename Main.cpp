#include <iostream>
#include <stdlib.h>

using namespace std;

class Sphinx {
    public:
        int guesses;

        Sphinx(){
            guesses = 3;
        }
            //method to display the guesses
            void displayGuesses(){
                
                cout << "You have ";
                cout << guesses;
                cout << " guesses left!";
            }
            void displayIntro(){
                cout << "\n";
                cout << intro;
            }

    private:
        string intro = "(A game by Hieu Ngo)\nYou are exploring the jungles of Brazil. You pass a sphinx on the way and it asks you a question.";
};




int main(){
    Sphinx test;

    test.displayGuesses();

    int input;
    cin >> input;
    if (input = 1){
        test.displayIntro();
    }
};