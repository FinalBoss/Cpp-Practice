
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


void StoryText(int CodeSum, int CodeProduct, int Difficulty)
{
   
   if (Difficulty == 1)
   {

    cout <<"You find yourself trapped in a well secured cement basement with 3 other captives. \n";
    cout <<"You all don't know how you ended up here, but you do know that there is a way out. \n";
    cout <<"By the door is a security padlock with a keypad. \n";
    cout <<"On the wall to your left is a message stating that you must guess the right passcode. \n";
    cout <<"If you guess right, the door will open to your safety, \n";
    cout <<"if you guess wrong, then toxic gas will be released in the room leading you and your fellow captives to doom. \n";
    cout <<"Since no one in the room decided to take responsibility for their lives by trying to figure out the code, \n you all decided to play rock paper scissors. \n";
    cout <<"It turns out that you are the one to try and open the door.\n";
    cout << endl;
    cout << "You kept in mind the hint at the end of the message on the wall: \n";
    cout <<"There are 3 numbers needed to open the door \n" << "three of the numbers multiplied together make: " << CodeProduct << endl;
    cout <<"the numbers added together makes: "<< CodeSum << endl;
   } else if (Difficulty == 2) {
       cout << "\"Next Level?\" \n";
       cout << "Before we could even rejoice, a voice from the speaker tells us to move to the next level. \n";
       cout << "Which means, our nightmare isn't over yet... \n";
   }
    cout << "The level " << Difficulty << " death game is about to begin. \n";
}

bool PlayGame(int CodeSum, int CodeProduct, int Difficulty)
{

    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;


        cout << "You make your first guess: \n";
        cin >> GuessA >> GuessB >> GuessC;

        GuessSum = GuessA + GuessB + GuessC;
        GuessProduct = GuessA * GuessB * GuessC;

        if (GuessSum == CodeSum && GuessProduct == CodeProduct)
        {
            if(Difficulty <= 1){
            cout << "You Win! Move on to the next level. \n";
            } else {
                cout << "You're home free, congrats! \n";
            }
            return true;
        } else {
            cout << "You Lose!  Continue?  \n";
            return false;
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
    int LevelDifficulty = 1;
    int const MaxLevel = 4;

    while(LevelDifficulty <= MaxLevel) 
    {

        StoryText(CodeSum, CodeProduct, LevelDifficulty);
        bool bLevelComplete = PlayGame(CodeSum, CodeProduct, LevelDifficulty);
        cin.clear();
        cin.ignore();

        if (bLevelComplete)
        {
            // increase the level difficulty
           
            ++LevelDifficulty;
    
        }
        
    
    }


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
