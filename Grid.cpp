#include "Input.h"
#include "Grid.h"
#include <iostream>
#include <random>
#include <fstream>
using namespace std;

Grid::~Grid(){
  for(int i=0;i<rows;i++){
      delete[] boardcurr[i];
    }
    delete[] boardcurr;
}

void Grid::print(){
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cout << boardcurr[i][j];
    }
    cout << endl;
  }
}

void Grid::randomGrid(){
  Input instance;
  double randomNumber = instance.generateRandomNumber();
  cout << randomNumber << endl;
  rows = instance.rows;
  columns = instance.columns;
  boardcurr = new char* [rows];
  cout << rows << endl;
  cout << columns << endl;
  for(int i=0;i<rows;i++)
    boardcurr[i] = new char[columns];
  //fill the board randomly (THIS PART IS WRONG)
  for(int i = 0; i < rows; i++){
    for(int j = 0; i < columns; j++){
      if (randomNumber < 0.5){
        boardcurr[i][j] = '-';
      }
      else if (randomNumber > 0.5){
        boardcurr[i][j] = 'X';
      }
    }
  }
}

void Grid::userGrid(string fileName){
  ifstream in_file;
  string line;
  char c;
  in_file.open(fileName);
  in_file >> rows >> columns; //store the first two lines as the number of rows and columns
  boardcurr = new char* [rows];
  for(int i=0;i<rows;i++)
      boardcurr[i] = new char[columns];
  while(in_file){
    for(int i=0;i<rows;i++){
      for(int j=0;j<columns;j++){
        in_file >> boardcurr[i][j];
      }
    }
  }
  in_file.close();
}
