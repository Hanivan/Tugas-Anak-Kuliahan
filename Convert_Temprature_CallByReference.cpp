#include <iostream>
using namespace std;

void ConvertToFahrenheitAndKelvin(float &celcius, float &fahrenheit,
                                  float &kelvin);

int main() {
  float celcius = 0.0;
  float fahrenheit = 0.0;
  float kelvin = 0.0;
  cout << "Please input the temperature in celsius: ";
  cin >> celcius;
  ConvertToFahrenheitAndKelvin(celcius, fahrenheit, kelvin);
  system("Pause");
  return 0;
}

void ConvertToFahrenheitAndKelvin(float &celcius, float &fahrenheit,
                                  float &kelvin) {
  fahrenheit = (celcius * 9 / 5) + 32;
  kelvin = (celcius + 273.15);

  cout << "Fahrenheit : " << fahrenheit << endl;
  cout << "Kelvin : " << kelvin << endl;
}
