
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


void play_game()
{
    int random = rand() % 251;
    cout<<"Guess a number: ";
    while(true)
    {
        int guess;
        cin>>guess;
        if(guess == random)
        {
            cout<<"You win!\n";
            break;
        }else if (guess < random)
        {
            cout<<"Too low \n";
        }else
        {
            cout<<"Too High\n";
        }
    }
}

int main()
{
        srand(time(NULL));
        int choice;

    
    do
    {
        cout<<"0.Quit"; 
    cout<< endl;
    cout<<"1.play game\n";
    cin >> choice;
    
    switch(choice)
    {
        case 0:
        cout<< "Thanks for nothing\n";
        return 0;
        case 1:
        play_game();
        break;
        
    }

    }while(choice != 0);
    
    
    
}
