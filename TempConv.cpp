#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}
int main() {
    double temperature;
    char unit;
    cout << "Enter Temperature:";
    cin >> temperature;
    cout << "Enter unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;
    
    switch (unit) {
        case 'C':
        case 'c':
            cout << "Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
            cout << "Kelvin: " << celsiusToKelvin(temperature) << endl;
            break;
        case 'F':
        case 'f':
            cout << "Celsius: " << fahrenheitToCelsius(temperature) << endl;
            cout << "Kelvin: " << fahrenheitToKelvin(temperature) << endl;
            break;
        case 'K':
        case 'k':
            cout << "Celsius: " << kelvinToCelsius(temperature) << endl;
            cout << "Fahrenheit: " << kelvinToFahrenheit(temperature) << endl;
            break;
        default:
            cout << "Invalid unit of measurement " << endl;
    }
    
    return 0;
}
