#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
  vector<double> vect{25.2, 32.5, 15.7, 17.5, 44.7 };

  sort(vect.begin(), vect.end());
  cout << "Sorted the Values from least to Greatest: \n";
  for (auto x: vect)
    cout << x << ", ";

    return 0;
}