#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream infile;
  infile.open("input.txt");

  int c = 0;
  int m, l, k = 0;
  bool size;
  infile >> c;
  for(int a = 1; a <= c; a++){
    infile >> m;
    infile >> l;
    infile >> k;
    if( m <= 20 && l <= 20 && k <= 20)
      cout << "Case " << a << ": good" << endl;
    else
      cout << "Case " << a << ": bad" << endl;
  }
  
}
