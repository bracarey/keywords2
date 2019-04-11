#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <vector>


using namespace std;


void overview();
void instructions();


int main()
{
    // Display Title of program to user
    cout << "Congratulations. If you are seeing this you passed the first test and moved on. This is the second round of the Code Breaker Training Simulation Program for CIA Recruits."
    // Ask the recruit to login using their name
         << " Now that you have made it this far, please enter your name for record keeping purposes.\n" ;
    // Hold the recruit's name in a var, and address them by it throughout the simulation.
    string recruitName;
    cin >> recruitName;
    // Display an overview of what Keywords II is to the recruit
    overview();
    // Display an directions to the recruit on how to use Keywords
    instructions();
    // Create a collection of 10 words you had wrote down manual.
    vector<string> wordList;  // collection of possible words to guess
    wordList.push_back("judas");//add the word to the back of the vector
    wordList.push_back("enigma");//add the word to the back of the vector
    wordList.push_back("deepthroat");//add the word to the back of the vector
    wordList.push_back("spook");//add the word to the back of the vector
    wordList.push_back("sleeper");//add the word to the back of the vector
    wordList.push_back("mole");//add the word to the back of the vector
    wordList.push_back("backstab");//add the word to the back of the vector
    wordList.push_back("radical");//add the word to the back of the vector
    wordList.push_back("betray");//add the word to the back of the vector
    wordList.push_back("operative");//add the word to the back of the vector
    srand((time(0)));//sets the time to the time of the users pc to seed the random generator
    const int maxWrong = 5;
    // Create an int var to count the number of simulations being run starting at
    for (int simulationNumber = 0; simulationNumber < 3; simulationNumber++)
    {
        char guess;
        // Display the simulation # is staring to the recruit.
        cout << "Simulation #" << simulationNumber + 1 << " is about to start.\n\n";
        // Pick new 3 random words from your collection as the secret code word the recruit has to guess.
        random_shuffle(wordList.begin(), wordList.end());
        const string wordToGuess = wordList[0];            // word to guess
        int wrongGuesses = 0;                               // number of incorrect guesses
        string soFar(wordToGuess.size(), '-');          // word guessed so far
        string used = "";
        int totalNumberOfGuesses;

        // While recruit hasn't made too many incorrect guesses and hasn't guessed the secret word
        while ((wrongGuesses < maxWrong) && (soFar != wordToGuess))
        {
        //     Tell recruit how many incorrect guesses he or she has left
            cout << "You have " << maxWrong - wrongGuesses << " incorrect guesses left.\n"
        //     Show recruit the letters he or she has guessed
                 << "You have guessed the following letters:\n" << used << "\n"
        //     Show player how much of the secret word he or she has guessed
                 << "You have guessed this much of the word so far:\n" << soFar << "\n"
        //     Get recruit's next guess
                 << "Please enter your guess.\n";
            cin >> guess;
            cout << "\n";
            totalNumberOfGuesses++;
            guess = tolower(guess);
        //     While recruit has entered a letter that he or she has already guessed
            while (used.find(guess) != string::npos)
            {
                cout << "\nYou've already guessed " << guess << endl;
                cout << "Enter your guess: ";
        //          Get recruit ’s guess
                cin >> guess;
                totalNumberOfGuesses++;
                guess = tolower(guess);
            }
        //     Add the new guess to the group of used letters
            used = used + guess + ", ";
        //     If the guess is in the secret word
            if (wordToGuess.find(guess) != string::npos)
            {
        //          Tell the recruit the guess is correct
                cout << "That's right! " << guess << " is in the word.\n";
        // update soFar to include newly guessed letter
            for ( int i = 0; i < wordToGuess.length(); ++i)
			{
        //          Update the word guessed so far with the new letter
                if (wordToGuess[i] == guess)
				{
                    soFar[i] = guess;
				}
			}
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrongGuesses;
        }
    }

        //          Update the word guessed so far with the new letter

        //     Otherwise

        //          Tell the recruit the guess is incorrect

        //          Increment the number of incorrect guesses the recruit has made

        // If the recruit has made too many incorrect guesses

        //     Tell the recruit that he or she has failed the Keywords II course.

        // Otherwise

        //     Congratulate the recruit on guessing the secret words

        // Ask the recruit if they would like to run the simulation again

        // If the recruit wants to run the simulation again

        //     Increment the number of simulations ran counter

        //     Move program execution back up to // Display the simulation # is staring to the recruit.

        // Otherwise

        //     Display End of Simulations to the recruit

        //     Pause the Simulation with press any key to continue
                system("Pause");
        }//ends the while loop
    }//ends of the for loop play the simulation how ever many times the user entered

void overview()
{

}
void instructions()
{

}
