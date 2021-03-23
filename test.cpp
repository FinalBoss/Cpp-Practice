
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


void StoryText(int CodeSum, int CodeProduct)
{
    cout <<"You find yourself trapped in a well secured cement basement with 3 other captives." << endl;
    cout <<"You all don't know how you ended up here, but you do know that there is a way out." << endl;
    cout <<"By the door is a security padlock with a keypad." << endl;
    cout <<"On the wall to your left is a message stating that you must guess the right passcode." << endl;
    cout <<"If you guess right, the door will open to your safety, " << endl;
    cout <<"if you guess wrong, then toxic gas will be released in the room leading you and your fellow captives to doom." << endl;
    cout <<"Since no one in the room decided to take responsibility for their lives by trying to figure out the code, you all decided to play rock paper scissors." << endl;
    cout <<"It turns out that you are the one to try and open the door." << endl;
    cout << endl;
    cout << "You kept in mind the hint at the end of the message on the wall: " << endl;
    cout <<"There are 3 numbers needed to open the door" << endl << "three of the numbers multiplied together make: " << CodeProduct << endl;
    cout <<"the numbers added together makes: "<< CodeSum << endl;
}

int PlayGame(int CodeSum, int CodeProduct)
{

    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;


        cout << "You make your first guess: " << endl;
        cin >> GuessA;
        cin >> GuessB;
        cin >> GuessC;

        GuessSum = GuessA + GuessB + GuessC;
        GuessProduct = GuessA * GuessB * GuessC;

        if (GuessSum == CodeSum && GuessProduct == CodeProduct)
        {
            cout << "You Win!";
        } else {
            cout << "You Lose!";
        }

        return 0;

    // int random = rand() % 251;
    // cout<<"Guess a number: ";
    // while(true)
    // {
    //     int guess;
    //     cin>>guess;
    //     if(guess == random)
    //     {
    //         cout<<"You win!\n";
    //         break;
    //     }else if (guess < random)
    //     {
    //         cout<<"Too low \n";
    //     }else
    //     {
    //         cout<<"Too High\n";
    //     }
    // }
}

int main()
{

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;


    StoryText(CodeSum, CodeProduct);
    PlayGame(CodeSum, CodeProduct);



    //     srand(time(NULL));
    //     int choice;

    
    // do
    // {
    //     cout<<"0.Quit"; 
    // cout<< endl;
    // cout<<"1.play game\n";
    // cin >> choice;
    
    // switch(choice)
    // {
    //     case 0:
    //     cout<< "Thanks for nothing\n";
    //     return 0;
    //     case 1:
    //     play_game();
    //     break;
        
    // }

    // }while(choice != 0);
    
    
    
}
