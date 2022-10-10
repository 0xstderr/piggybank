// Libraries

#include <iostream>

// main function

int main()
{

//variables for foreign currencies

  double pesos, reais, soles;

  double dollars;

//asking and prompting the user for the amount of each currency

  std::cout << "Enter number of Colombian Pesos :";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais : ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian soles : ";
  std::cin >> soles;

/* 1 COP = 0,000225 USD
   1 BRL = 0,19 USD
   1 PEN = 0,26 USD
*/

//declaring and initializing the conversion rate variables
  
  double cop = 0.000225;
  double brl = 0.19;
  double pen = 0.26;

//doing the math
  
  dollars = (pesos * cop)+(reais * brl)+(soles * pen);

//outputting the result in dollars

  std::cout << "US Dollars = $" << dollars << "\n";
  return 0;

}
