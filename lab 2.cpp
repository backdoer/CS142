#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Test Cases:
// People: 10 Tip: 5 Large pizzas: 1 Medium Pizzas: 1 Small Pizzas: 0 Total Area: 515.2207 Pizza/Person: 51.52207 Cost: 27
//People: 20 Tip: 9 Large Pizzas: 2 Medium Pizzas: 2 Small Pizzas: 0 Total Area: 1030.44152 Pizza/Person: 51.52207 Cost: 57
//People: 1000 Tip: 15 Large Pizzas: 142 Medium Pizzas: 2 Small Pizzas: 0 Total Area: 45012.70152 Pizza/Person: 45.01270 Cost: 2424

const int LARGE_PIZZA_SIZE = 7;
const int MEDIUM_PIZZA_SIZE = 3;
const int SMALL_PIZZA_SIZE = 1;
const int LARGE_PIZZA_RADIUS = 10;
const int MEDIUM_PIZZA_RADIUS = 8;
const int SMALL_PIZZA_RADIUS = 6;
const double PI = 3.14159;
const double LARGE_PIZZA_PRICE = 14.68;
const double MEDIUM_PIZZA_PRICE = 11.48;
const double SMALL_PIZZA_PRICE = 7.28;


int main()
{
    
    int number_of_guests;
    cout << "How many people are attending the event: ";
    cin >> number_of_guests;
    
    int large_pizzas;
    int medium_pizzas;
    int small_pizzas;
    
    large_pizzas = number_of_guests / LARGE_PIZZA_SIZE;
    number_of_guests = number_of_guests % LARGE_PIZZA_SIZE;
    medium_pizzas = number_of_guests / MEDIUM_PIZZA_SIZE;
    number_of_guests = number_of_guests % MEDIUM_PIZZA_SIZE;
    small_pizzas = number_of_guests;
    
    cout << "Large Pizzas: " << large_pizzas << endl;
    cout << "Medium Pizzas: " << medium_pizzas << endl;
    cout << "Small Pizzas: " << small_pizzas << endl << endl;
    
    double large_pizza_area;
    double medium_pizza_area;
    double small_pizza_area;
    
    large_pizza_area = (PI * (LARGE_PIZZA_RADIUS * LARGE_PIZZA_RADIUS)) * large_pizzas;
    medium_pizza_area = (PI * (MEDIUM_PIZZA_RADIUS * MEDIUM_PIZZA_RADIUS)) * medium_pizzas;
    small_pizza_area = (PI * (SMALL_PIZZA_RADIUS * SMALL_PIZZA_RADIUS)) * small_pizzas;
    
    double total_area = large_pizza_area + medium_pizza_area + small_pizza_area;
    
    double pizza_per_person;
    number_of_guests = (large_pizzas*LARGE_PIZZA_SIZE) + (medium_pizzas*MEDIUM_PIZZA_SIZE) + (small_pizzas*SMALL_PIZZA_SIZE);
    pizza_per_person = total_area / number_of_guests;
    
    cout << "Total Area :" << fixed << total_area << endl;
    cout << "Pizza/Person: " << fixed << pizza_per_person << endl << endl;
    
    double tip_percent;
    cout << "What percentage tip will you pay: ";
    cin >> tip_percent;
    tip_percent = tip_percent/100;
    
    double pizza_cost;
    pizza_cost = (large_pizzas * LARGE_PIZZA_PRICE) + (medium_pizzas * MEDIUM_PIZZA_PRICE) + (small_pizzas * SMALL_PIZZA_PRICE);
    int total_cost;
    total_cost = pizza_cost + (pizza_cost * tip_percent) +.5; //the .5 is so it rounds right
    
    cout << "Cost: " << total_cost;
    
    return 0;
}

