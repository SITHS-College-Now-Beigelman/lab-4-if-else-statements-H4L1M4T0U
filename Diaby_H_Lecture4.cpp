// Halimatou Diaby
//Lecture Four (If statements)
//10/1/24




#include <iostream>
#include <string> 

using namespace std;



int main(){

string FruitName;     
double NumberGrams;

int i = 0;
for (i=1; i<5; i++)
{

    cout << "Enter the Name of the fruit (Use Underscore to represent spaces)"<< endl ;   //asks the user for the fruit name
        cin >>FruitName;

    cout << " Enter the number of grams of sugar that this fruit has"<<endl; // Prompts user to input the number of grams of sugar
       cin>> NumberGrams;


    if (NumberGrams < 10 && NumberGrams > 0)
        cout << "THIS IS A LOW SUGAR FRUIT!🍇\n";


    if (NumberGrams > 10 && NumberGrams<14)
        cout << "THIS IS A MEDIUM SUGAR FRUIT.💯\n";

    if (NumberGrams > 14)
        cout<< " THIS IS A HIGH SUGAR FRUIT!!🎀\n";

    if (NumberGrams <0)
        cout << "This is not a valid input. Please try again\n";



}







return 0;
}