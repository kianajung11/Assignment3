#include <iostream>
using namespace std;

class Grid{
  int rows, columns;
  string fileName;
  char** boardcurr;
  char** boardnext;
public:
  ~Grid();
  void print();
  void randomGrid();
  void userGrid(string fileName);
  void set(int row, int column, char value);
  void classicMode();
  void doughnutMode();
  void mirrorMode();
};
