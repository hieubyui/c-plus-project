#include <iostream>
#include <stdlib.h>

using namespace std;

class Sphinx {
    public:
        int guesses;

        string pass;
        int riddleLocation;


        Sphinx(){
            guesses = 3;


        }
            //method to display the guesses
            void displayGuesses(){
                cout << "\n\nYou have ";
                cout << guesses;
                cout << " guesses left!" << endl;
            }
            //method to display the intro
            void displayIntro(){
                cout << "\n";
                cout << intro << endl;
            }
            //method to stop and ask for user input
            void anythingToContinue(){
                cout << "\n\nType anything to continue: ";
                cin >> pass;
            }
            void minusGuess(){
                guesses -= 1;
                if (guesses < 1){
                    cout << "\nYou ran out of guesses! You are banished to Brazil.";
                    anythingToContinue();
                    exit(0);
                }
            }
            void addRiddleLocation(){

                riddleLocation++;
            }

            void askriddle(){

                displayGuesses();

                if (riddleLocation = 1){

                    addRiddleLocation();
                    cout << riddle1 << endl;

                }else if (riddleLocation = 2){

                    addRiddleLocation();
                    cout << riddle2 << endl;

                }else if (riddleLocation = 3){

                    addRiddleLocation();
                    cout << riddle3 << endl;

                }



            }
            void displayCorrect(){
                cout << correct << endl;
            }
            void displayWrong(){
                cout << wrong << endl;
            }

    private:
        string intro = "(A game by Hieu Ngo)\n\nYou are traveling in the deep jungles of Brazil. You pass a sphinx on the way and it asks you a question.";
        string correct = "\nCorrect!";
        string wrong = "\nWrong. -1 guess";
        string riddle1 = "\nHow many bits are in a byte? ";
        string riddle2 = "\nWhat has legs but doesn't walk? ";
        string riddle3 = "\nName a women. ";
};




int main(){
    int riddleLocation;
    int riddle1input = 0;
    cout << riddle1input;
    Sphinx start;

    bool quit = false;

    start.displayIntro();
    start.anythingToContinue();

    do{
        start.askriddle();
        cin >> riddle1input;

        switch (riddle1input)
        {
            case 8:
                start.displayCorrect();
                start.addRiddleLocation();
                quit = true;
                break;
            default:
                start.displayWrong();
                start.minusGuess();
        }

    }while (!quit);


    do{
        start.askriddle();
        cin >> riddle1input;

        switch (riddle1input)
        {
            case 8:
                start.displayCorrect();
                quit = true;
                break;
            default:
                start.displayWrong();
                start.minusGuess();
        }

    }while (!quit);

}