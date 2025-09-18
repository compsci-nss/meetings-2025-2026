#include <iostream>

int main() {
  int N, C, P;
  std::cin >> N >> C >> P;
  std::cout << ((N <= C * P) ? "yes" : "no") << std::endl;
}
