// This program plays a guessing game where you try to guess the number 
// the computer has picked.
#include <iostream>
#include <cstdlib>

int main()
{
   int seed;
   std::cout << "Random Seed?" << std::endl << "? ";
   std::cin >> seed;
   srand(seed);
   
   int numberToGuess = (rand() % 100) + 1;

   std::cout << "Guess a number between 1 and 100." << std::endl << "? ";
  
   int guess;
   std::cin >> guess;
 
   while (numberToGuess != guess)
   {
      if (guess > numberToGuess)
      {
         std::cout << "Try lower." << std::endl << "? ";
      }
      else if (guess < numberToGuess)
      {
         std::cout << "Try higher." << std::endl << "? ";
      }
      std::cin >> guess;
   }

   std::cout << "You guessed right!!!" << std::endl;
   return 0;
}