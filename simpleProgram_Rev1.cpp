#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void runCalculator();
void runDice();
int showMenu();
void runCheckGrade();
void runOddEven();
void runCelToFah();
void runCelToKel();

int main() {
  char isContinue;
  enum option { CALC = 1, DICE, GRADE, OE, CELFAH, CELKEL, FINISH = 99 };

  do {
    int select = showMenu();
    switch (select) {
    case CALC:
      runCalculator();
      break;
    case DICE:
      runDice();
      break;
    case GRADE:
      runCheckGrade();
      break;
    case OE:
      runOddEven();
      break;
    case CELFAH:
      runCelToFah();
      break;
    case CELKEL:
      runCelToKel();
      break;
    case FINISH:
      cout << "See You!!" << endl;
      return 1;
    default:
      cout << "Pilihan tidak diketahui" << endl;
      break;
    }

    cout << "Kembali Ke Menu?(y/n) ";
    cin >> isContinue;
  } while (isContinue == 'y' || isContinue == 'Y');

  return 0;
}

void clearScr() {
  if (system("clear"))
    system("cls");
}

int showMenu() {
  int input;

  clearScr();

  cout << "##-------------------------------------------------##" << endl;
  cout << "#---- SELAMAT DATANG DI PROGRAM SEDIKIT KOMPLEKS ---#" << endl;
  cout << "##-------------------------------------------------##" << endl
       << endl;

  cout << "--------------------------------" << endl;
  cout << "Silahkan pilih menu: " << endl;
  cout << "1. Kalkulator" << endl;
  cout << "2. Dadu Digital" << endl;
  cout << "3. Cek Grade Nilai" << endl;
  cout << "4. Cek Ganjil Genap" << endl;
  cout << "5. Konversi Celcius Ke Fahrenheit" << endl;
  cout << "6. Konversi Celcius Ke Kelvin" << endl;
  cout << "99. Keluar" << endl;
  cout << "--------------------------------" << endl;
  cout << ">> ";
  cin >> input;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  return input;
}

void runCalculator() {
  double num1, num2;
  char operation;

  clearScr();

  cout << "#---- Kalkulator CLI ----#" << endl;

  cout << "Masukkan operasi yang diinginkan (+,-,*,/,s, p, a) [s untuk menukar "
          "posisi, p untuk pemangkatan, a untuk akar]"
       << endl
       << ">> ";
  cin >> operation;

  cout << "Masukkan nilai yang dibutuhkan untuk melanjutkan operasi ("
       << operation << ")" << endl;

  if (operation == 'a') {
    cout << "Masukkan akar: ";
    cin >> num1;
  } else {
    cout << "Angka pertama: ";
    cin >> num1;

    cout << "Angka kedua: ";
    cin >> num2;
  }

  // filter operation
  cout << endl;
  switch (operation) {
  case '+':
    cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2
         << endl;
    break;
  case '-':
    cout << num1 << " " << operation << " " << num2 << " = " << num1 - num2
         << endl;
    break;
  case '*':
    cout << num1 << " " << operation << " " << num2 << " = " << num1 * num2
         << endl;
    break;
  case '/':
    if (num2 == 0) {
      cout << "pembagi tidak boleh nol" << endl;
    }
    cout << num1 << " " << operation << " " << num2 << " = " << num1 / num2
         << endl;
    break;
  case 's':
    cout << "Nilai sebelum di tukar: " << num1 << ", " << num2 << endl;
    swap(num1, num2);
    cout << "Nilai sesudah ditukar: " << num1 << ", " << num2 << endl;
    break;
  case 'p':
    cout << num1 << "^" << num2 << " = " << pow(num1, num2) << endl;
    break;
  case 'a':
    cout << "Akar dari " << num1 << " adalah " << sqrt(num1) << endl;
    break;
  default:
    cout << "Perintah tidak diketahui" << endl;
    break;
  }
}

void runDice() {
  int count;
  char repeat;

  while (true) {
    clearScr();
    cout << "#---- Dadu Digital ----#" << endl;

    cout << "Mau berapa kali lempar? ";
    cin >> count;

    // if input user is not integer
    if (cin.fail()) {
      cout << "Harap masukkan angka" << endl;
      break;
    }

    for (int i = 1; i <= count; i++) {
      cout << "Lemparan " << i << ": " << 1 + rand() % 6 << endl;
    }

    cout << "Lempar dadu lagi?(y/n) ";
    cin >> repeat;
    if (repeat == 'n' || repeat == 'N') {
      break;
    }
  }
}

void runCheckGrade() {
  string nama;
  float n_hadir, n_tugas, n_uts, n_uas, total_nilai;
  char grade[5] = {'A', 'B', 'C', 'D', 'E'};

  clearScr();
  cout << "#---- Cek Grade Nilai ----#" << endl;

  cout << "Masukkan nama anda: ";
  getline(cin, nama);

  cout << "Masukkan nilai kehadiran anda: ";
  cin >> n_hadir;

  cout << "Masukkan nilai tugas anda: ";
  cin >> n_tugas;

  cout << "Masukkan nilai UTS anda: ";
  cin >> n_uts;

  cout << "Masukkan nilai UAS anda: ";
  cin >> n_uas;

  total_nilai =
      (0.10 * n_hadir) + (0.25 * n_tugas) + (0.30 * n_uts) + (0.35 * n_uas);

  clearScr();

  if (cin.fail()) {
    cout << "\nHarap masukkan data dengan benar" << endl;
  } else {
    cout << "====== Hasil Passing Grade ======" << endl;

    cout << "Nama\t\t: " << nama << endl;
    cout << "Nilai kehadiran\t: " << n_hadir << endl;
    cout << "Nilai UTS\t: " << n_uts << endl;
    cout << "Nilai UAS\t: " << n_uas << endl;
    cout << "Total nilai anda: " << total_nilai << endl << endl;

    // check grade, pick character from array
    if (total_nilai < 45) {
      cout << "Nilai dalam huruf: " << grade[4] << endl;
    } else if (total_nilai < 57) {
      cout << "Nilai dalam huruf: " << grade[3] << endl;
    } else if (total_nilai < 68) {
      cout << "Nilai dalam huruf: " << grade[2] << endl;
    } else if (total_nilai < 80) {
      cout << "Nilai dalam huruf: " << grade[1] << endl;
    } else {
      cout << "Nilai dalam huruf: " << grade[0] << endl;
    }
  }
}

void runOddEven() {
  int num;
  char repeat;

  do {
    clearScr();
    cout << "#---- Cek Genap Ganjil ----#" << endl;

    cout << "Masukkan angka: ";
    cin >> num;

    // if user input is not integer
    if (cin.fail()) {
      cout << "Inputan tidak dikenali" << endl;
    } else {
      if (num % 2 == 0) {
        cout << num << " adalah angka genap" << endl;
      } else {
        cout << num << " adalah angka ganjil" << endl;
      }

      cout << "Ulangi?(y/n) ";
      cin >> repeat;
      if (repeat == 'n' || repeat == 'N') {
        break;
      }
    }
  } while (repeat == 'y' || repeat == 'Y');
}

double execCelToFah(double &celcius) {
  double fahrenheit = 0.0;

  fahrenheit = (celcius * 9 / 5) + 32;
  return fahrenheit;
}

double execCelToKel(double celcius) {
  double kelvin = 0.0;

  kelvin = (celcius + 273.15);
  return kelvin;
}

void runCelToFah() {
  double num_cel;

  clearScr();
  cout << "#---- Konv. Celcius Ke Fahrenheit ----#" << endl;

  cout << "Masukkan suhu dalam celcius: ";
  cin >> num_cel;

  cout << endl
       << "Suhu setelah diubah ke fahrenheit: " << execCelToFah(num_cel)
       << endl;
}

void runCelToKel() {
  double num_cel;

  clearScr();
  cout << "#---- Konv. Celcius Ke Kelvin ----#" << endl;

  cout << "Masukkan suhu dalam celcius: ";
  cin >> num_cel;

  cout << endl
       << "Suhu setelah diubah ke kelvin: " << execCelToKel(num_cel) << endl;
}
