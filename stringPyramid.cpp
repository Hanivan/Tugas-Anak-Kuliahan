#include <iostream>
#include <string.h>

int main() {

  char str[11] = "POLITEKNIK";

  for (int i = 0; i < strlen(str); i++) {
    for (int j = 0; j <= i; j++) {
      std::cout << str[j];
    }
    std::cout << std::endl;
  }

  return 0;
}
