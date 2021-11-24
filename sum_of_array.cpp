#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int a[] = {1, 3, 5, 7, 9};
  int total = accumulate(begin(a), end(a), 0, plus<int>());

  cout << "The total sum is: " << total;
} 
