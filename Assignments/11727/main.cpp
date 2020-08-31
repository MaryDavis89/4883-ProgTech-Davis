#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream infile;
  infile.open("input.txt");

  int c = 0;
  int m, l, k = 0;
  infile >> c;
  for(int a = 1; a <= c; a++){
    infile >> m;
    infile >> l;
    infile >> k;
    int mid;
    if(m > l && m < k)
      mid = m;
    if(m > k && m < l)
      mid = m;
    if(l > m && l < k)
      mid = l;
    if(l > k && l < m)
      mid = l;
    if(k > l && k < m)
      mid = k;
    if(k > m && k < l)
      mid = k;
    if(k == l && l == m)
      mid =k;

    cout << "Case " << a << ": " << mid << endl;

  }
}
