#include <iostream>

int main() {
  int a;

  std::cout << "Masukkan Angka: ";
  std::cin >> a;

  std::cout << "Pola 1" << std::endl;
  // baris
  for (int i = 1; i <= a; i++) {
    // kolom
    for (int j = 1; j <= i; j++) {
      std::cout << i * j << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "\n\nPola 2" << std::endl;
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= i; j++) {
      std::cout << i + j << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "\n\nPola 3" << std::endl;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= i; j += 2) {
      std::cout << i * j << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
