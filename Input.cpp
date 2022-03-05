#include <iostream>
#include <random>
#include "Input.h"
using namespace std;

void Input::getMapFile(){
  string input, fileName;
  cout << "Would you like to provide a map file? ";
  cin >> input;
  if (input == "yes" || input == "Yes"){
    cout << "Enter the file name: ";
    cin >> fileName;
  }
  else{
    generateRandomNumber();
  }
}

double Input::generateRandomNumber(){
  cout << "How many rows would you like? ";
  cin >> rows;
  cout << "How many columns would you like? ";
  cin >> columns;
  double population = random();
  return population;
}
