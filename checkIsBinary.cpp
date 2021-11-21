#include <iostream>

using namespace std;

int main() {
  char a;

  cin >> a;

  if (a == '0' || a == '1') {
    cout << "Biner dan Desimal" << endl;
  } else {
    cout << "Desimal" << endl;
  }

  return 0;
}
