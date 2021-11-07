#include <iostream>
using namespace std;

void ConvertToFahrenheit(float celcius, float fahrenheit);

void ConvertToKelvin(float celcius, float kelvin);

int main() {
  float celcius = 0.0;
  float fahrenheit = 0.0;
  float kelvin = 0.0;
  cout << "Please input the temperature in celsius: ";
  cin >> celcius;
  ConvertToFahrenheit(celcius, fahrenheit);
  ConvertToKelvin(celcius, kelvin);
  system("Pause");
  return 0;
}

void ConvertToFahrenheit(float celcius, float fahrenheit) {
  fahrenheit = (celcius * 9 / 5) + 32;

  cout << "Fahrenheit: " << fahrenheit << endl;
}

void ConvertToKelvin(float celcius, float kelvin) {
  kelvin = (celcius + 273.15);

  cout << "Kelvin: " << kelvin << endl;
}
