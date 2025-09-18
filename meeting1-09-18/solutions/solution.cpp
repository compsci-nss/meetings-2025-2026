#include <iostream>
using namespace std;

int main() {
  int N, C, P;

  cin >> N >> C >> P;

  if (N <= C * P) cout << "yes" << endl;
  else cout << "no" << endl;

  return 0;
}
