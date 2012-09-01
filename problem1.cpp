#include <iostream>

using std::cout;
using std::endl;

int euler1(int n);

int main() {
  cout << euler1(1000) << endl;
  return 0;
}

int euler1(int n) {
  int sum = 0;

  for(int i = 0; i < n; ++i) {
    if(i%3 ==0 || i%5 == 0) {
      sum += i;
    }
  }  
  return sum;
}
