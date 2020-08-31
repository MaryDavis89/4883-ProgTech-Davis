#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream infile;
  infile.open("input.txt");

  int c = 0;
  int m, l = 0;
  infile >> c;
  for(int a = 1; a <= c; a++){
    infile >> m;
    infile >> l;
    if( m < l)
      cout << "<" << endl;
    else if(l < m )
      cout << ">" << endl;
    else 
      cout << "=" << endl;
  }
  
}
