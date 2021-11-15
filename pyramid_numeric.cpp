#include <iostream>
#include <ostream>

int main() {
  int a, b;

  std::cout << "Masukkan Angka: ";
  std::cin >> a;

  // baris
  for (int i = 1; i <= a; i++) {
    // kolom
    for (int j = 1; j <= i; j++) {
      std::cout << i * j << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
