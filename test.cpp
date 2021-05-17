#include<iostream>

#include<string>

#include<cstdlib>

#include<ctime>

using namespace std;

void StoryText(int CodeSum, int CodeProduct, int Difficulty) {

  if (Difficulty == 1) {

    cout << "You find yourself trapped in a well secured cement basement with 3 other captives. \n";
    cout << "You all don't know how you ended up here, but you do know that there is a way out. \n";
    cout << "By the door is a security padlock with a keypad. \n";
    cout << "On the wall to your left is a message stating that you must guess the right passcode. \n";
    cout << "If you guess right, the door will open to your safety, \n";
    cout << "if you guess wrong, then toxic gas will be released in the room leading you and your fellow captives to doom. \n";
    cout << "Since no one in the room decided to take responsibility for their lives by trying to figure out the code, \n you all decided to play rock paper scissors. \n";
    cout << "It turns out that you are the one to try and open the door.\n";
    cout << endl;
    cout << "You kept in mind the hint at the end of the message on the wall: \n";
    cout << "There are 3 numbers needed to open the door \n" << "three of the numbers multiplied together make: " << CodeProduct << endl;
    cout << "the numbers added together makes: " << CodeSum << endl;
  } else if (Difficulty == 2) {
    cout << "Please move onto the next level! \n";
    cout << "\"Next Level?\" \n";
    cout << "Before we could even rejoice, a voice from the speaker tells us to move to the next level. \n";
    cout << "Which means, our nightmare isn't over yet... \n";
    cout << "We reluctantly move to the next room.  It was all white with nothing inside. \n";
    cout << "The door behind us closes and we all black out. \n";
    cout << "We come too in order to find ourselves strapped in a chair...an electric chair. \n";
    cout << "'Why is this happening to us?!' Yells one of the prisoners. \n";
    cout << "You pay no heed and focus on the message in front of everyone.  \n";
    cout << "There are 3 numbers needed to open the door \n" << "three of the numbers multiplied together make: " << CodeProduct << endl;
    cout << "the numbers added together makes: " << CodeSum << endl;
    cout << "Guess right, and you move on to the next level.  Guess wrong, and you all get electricuted!  \n";
    cout << "You notice the problem got harder...  \n";

  } else if (Difficulty == 3) {

    cout << "Please move onto the next level! \n";
    cout << "This is driving you insane.  You feel you're not the only one who feels the same way. \n";
    cout << "The cuffs to your wrists and ankles get unbuckled and you all rise out of your chairs. \n";
    cout << "Moving on to the next stage, we find ourselves surrounded by water.  The door closes behind you. \n";
    cout << "Oh great, a water level.  you say silently to yourself... \n";
    cout << "\"Is it me, or is the water level rising?!\" One of the captives say in a panic. \n";
    cout << "Answer the next problem before you drown in this underwater cage. \n";
    cout << "You swallow your nerves and read the message in front of everyone.  \n";
    cout << "There are 3 numbers needed to open the door \n" << "three of the numbers multiplied together make: " << CodeProduct << endl;
    cout << "the numbers added together makes: " << CodeSum << endl;
  } else {

    cout << "Please move onto the Final level! \n";
    cout << "You all rejoice at the words \"final\". \n";
    cout << "The water levels recede and on the platform you see steps leading to a door. \n";
    cout << "Moving on to the last stage, You find yourselves in a cage surrounded by fire. \n";
    cout << "It feels so hot, like you're all in hell \n";
    cout << "You look at the final message and focus on your ticket to freedom.  \"I can do this\" \n";
    cout << "Answer the next problem before you all fry to a crisp! \n";
    cout << "There are 3 numbers needed to open the door \n" << "three of the numbers multiplied together make: " << CodeProduct << endl;
    cout << "the numbers added together makes: " << CodeSum << endl;
  }

  cout << "The level " << Difficulty << " death game is about to begin. \n";

}

bool PlayGame(int Difficulty, int Lives) {

  int CodeA = rand() % Difficulty + Difficulty;
  int CodeB = rand() % Difficulty + Difficulty;
  int CodeC = rand() % Difficulty + Difficulty;
  int CodeSum = CodeA + CodeB + CodeC;
  int CodeProduct = CodeA * CodeB * CodeC;

  StoryText(CodeSum, CodeProduct, Difficulty);

  int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
  string Retry;

  cout << "You make your first guess: \n";
  cin >> GuessA >> GuessB >> GuessC;

  GuessSum = GuessA + GuessB + GuessC;
  GuessProduct = GuessA * GuessB * GuessC;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct) {

    cout << "You Win!\n";

    return true;
  } else {
    cout << "You Lose! \n";

  }

  return false;

}

int main() {

  srand(time(NULL));

  int Difficulty = 1;
  int
  const MaxLevel = 4;
  int Lives = 3;
  string Retry;

  while (Difficulty <= MaxLevel) {

    bool bLevelComplete = PlayGame(Difficulty, Lives);
    cin.clear();
    cin.ignore();

    if (bLevelComplete) {
      // increase the level difficulty

      ++Difficulty;

    } else {

      cout << "Continue?  y/n \n";
      cin >> Retry;
      if (Retry == "y") {

        --Lives;
        cout << "You have " << Lives << "Lives left. \n";
      } else if (Retry == "n") {
        cout << "Game Over! \n";
        return 0;
      }
    }

  }

  cout << "You're home free, congrats! \n";

}