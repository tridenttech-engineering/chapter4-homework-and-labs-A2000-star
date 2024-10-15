// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  int smallPizza = 0;
  int mediumPizza = 0;
  int largePizza = 0;
  int familyPizza = 0;
  int totalPizza = 0;
  double smallPizzaPercent = 0.0;
  double mediumPizzaPercent = 0.0;
  double largePizzaPercent = 0.0;
  double familyPizzaPercent = 0.0;

  cout << "Small pizzas sold: ";
  cin >> smallPizza;
  cout << "Medium pizzas sold: ";
  cin >> mediumPizza;
  cout << "Large pizzas sold: ";
  cin >> largePizza;
  cout << "Family pizzas sold: ";
  cin >> familyPizza;
  cout << "smallPizzaPercent: ";
  cin >> smallPizza;
  cout << "mediumPizzaPercent: ";
  cin >> mediumPizza;
  cout << "largePizzaPercent: ";
  cin >> largePizza;
  cout << "familyPizzaPercent: ";
  cin >> familyPizza;

  totalPizza = smallPizza + mediumPizza + largePizza + familyPizza;
  
  smallPizzaPercent = static_cast<double >(smallPizza) / totalPizza * 100;
  mediumPizzaPercent = static_cast<double >(mediumPizza) / totalPizza * 100;
  largePizzaPercent = static_cast<double >(largePizza) / totalPizza * 100;
  familyPizzaPercent = static_cast<double >(familyPizza) / totalPizza * 100;
  cout << "Total pizzas sold: " << totalPizza << endl;
  
  cout << "Small pizzas sold: " << smallPizza << endl;
  cout << "Medium pizzas sold: " << mediumPizza << endl;
  cout << "Large pizzas sold: " << largePizza << endl;
  cout << "Family pizzas sold: " << familyPizza << endl;
  cout << "smallPizzaPercent: " << smallPizzaPercent << endl;
  cout << "mediumPizzaPercent: " << mediumPizzaPercent << endl;
  cout << "largePizzaPercent: " << largePizzaPercent << endl;
  cout << "familyPizzaPercent: " << familyPizzaPercent << endl;
   
   return 0;
} // end of main function