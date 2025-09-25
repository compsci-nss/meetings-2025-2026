#include <iostream>
using namespace std;

int main() {
  int D, E, Q;
  cin >> D >> E;
  char o;

  for (int i = 0; i < E; i++) {
    cin >> o;
    cin >> Q;
    if (o == '+') D += Q;
    else D -= Q;
  }

  cout << D << endl;
}
