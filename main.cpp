#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
string red = "\x1b[32m";
string reset = "\x1b[0m";

int main() 
{
  vector<double> vect{100, 55.27, 200.78, 17.5, 144.7 };

  sort(vect.begin(), vect.end());
  cout << red << "Sorted the Values from least to Greatest: \n" << reset;
  for (auto x: vect)
    cout << x << ", ";

    return 0;
}