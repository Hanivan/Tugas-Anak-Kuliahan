#include <iostream>
#include <ostream>

int main() {

  int n;

  std::cout << "Masukkan panjang n: ";
  std::cin >> n;

  std::cout << "Pola 1\n";
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  std::cout << "Pola 2\n";
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}
