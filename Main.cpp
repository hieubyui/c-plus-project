#include <iostream>
#include <stdlib.h>

using namespace std;

class Sphinx
{
    public:
        int guesses;
        string pass;
        int riddleLocation;


        Sphinx(){
            guesses = 3;
        }

            //method to display the guesses
            void displayGuesses(){
                cout << "\nYou have ";
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
                cout << "Type anything to continue: ";
                cin >> pass;
            }
            void minusGuess(){
                guesses -= 1;
                if (guesses < 1){
                    cout << "\nYou ran out of guesses! You are banished to Brazil." << endl;
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

            void askriddle2(){
                displayGuesses();
                cout << riddle2 << endl;
            }

            void askriddle3(){
                displayGuesses();
                cout << riddle3 << endl;
            }

            
            void displayCorrect(){
                cout << correct << endl;
            }
            void displayWrong(){
                cout << wrong << endl;
            }

    private:
        string intro = "(A game by Hieu Ngo)\n\nYou are traveling in the deep jungles of Brazil. You pass a sphinx on the way and it asks you a question.";
        string correct = "Correct!";
        string wrong = "Wrong. -1 guess";
        string riddle1 = "\nHow many bits are in a byte? ";
        string riddle2 = "\nFinish this. 9 + 9 = ";
        string riddle3 = "\nIn the medical drama House, a female member of House's team is named after a number, what is her name? (type her number) ";
    
};




int main(){
    int riddleLocation;
    int riddle1input;
    int riddle2input;
    int riddle3input;


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
                quit = true;
                break;
            default:
                start.displayWrong();
                start.minusGuess();
        }

    }while (!quit);

    quit = false;

    do{
        start.askriddle2();
        cin >> riddle2input;

        switch (riddle2input)
        {
            case 18:
                start.displayCorrect();
                quit = true;
                break;
            default:
                start.displayWrong();
                start.minusGuess();
        }

    }while (!quit);

    quit = false;

    do{
        start.askriddle3();
        cin >> riddle3input;

        switch (riddle3input)
        {
            case 13:
                start.displayCorrect();
                quit = true;
                break;
            default:
                start.displayWrong();
                start.minusGuess();
        }

    }while (!quit);



}