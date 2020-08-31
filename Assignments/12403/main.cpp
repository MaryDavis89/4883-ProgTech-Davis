#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream infile;
  infile.open("input.txt");

string test;
int c;
int sum = 0;
int num = 0;
infile >> c;
for(int a = 0; a < c; a++){
  infile >> test;
  if(test == "donate"){
    infile >> num;
    sum = sum + num;
    }
  else
    cout << sum << endl;
  }
 
  
}
