#include <iostream>
#include <string>
using namespace std;

// Function for Car fuel efficiency (in miles per gallon)
double fuelEfficiency(int engineCC, double fuelRate, double weight) {
    double efficiency = (10000.0 / (fuelRate * (engineCC / 1000.0 + weight / 1000.0)));
    return efficiency;
}

// Function for Truck fuel efficiency (in km per liter)
double fuelEfficiency(int cargoWeight, float enginePower, double dragCoeff) {
    double efficiency = (1000.0 / (cargoWeight / 100.0 + enginePower / 10.0 + dragCoeff * 10.0));
    return efficiency;
}

// Function for Airplane fuel efficiency (in gallons per hour)
double fuelEfficiency(string aircraftType, double altitude, float airspeed) {
    double baseEfficiency;
    if (aircraftType == "private" || aircraftType == "Private") baseEfficiency = 50.0; // private planes burn less
    else baseEfficiency = 200.0; // commercial planes burn more
    double efficiency = baseEfficiency * (airspeed / 400.0) * (altitude / 30000.0);
    return efficiency; // returns gallons/hour
}

int main() {
    int choice;
    cout << "Vehicle Fuel Efficiency Calculator\n";
    cout << "1. Car\n";
    cout << "2. Truck\n";
    cout << "3. Airplane\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        int engineCC;
        double fuelRate, weight;

        cout << "Enter engine displacement (in CC): ";
        cin >> engineCC;
        cout << "Enter fuel consumption rate (L/100KM): ";
        cin >> fuelRate;
        cout << "Enter vehicle weight (in kg): ";
        cin >> weight;

        double efficiency = fuelEfficiency(engineCC, fuelRate, weight);
        cout << "\nEstimated Fuel Efficiency (Car): " << efficiency << " miles per gallon (MPG)\n";
    }

    else if (choice == 2) {
        int cargoWeight;
        float enginePower;
        double dragCoeff;

        cout << "Enter cargo weight (in kg): ";
        cin >> cargoWeight;
        cout << "Enter engine power (in HP): ";
        cin >> enginePower;
        cout << "Enter aerodynamic drag coefficient: ";
        cin >> dragCoeff;

        double efficiency = fuelEfficiency(cargoWeight, enginePower, dragCoeff);
        cout << "\nEstimated Fuel Efficiency (Truck): " << efficiency << " km per liter (km/L)\n";
    }

    else if (choice == 3) {
        string type;
        double altitude;
        float airspeed;

        cout << "Enter aircraft type (Private/Commercial): ";
        cin >> type;
        cout << "Enter cruising altitude (in feet): ";
        cin >> altitude;
        cout << "Enter airspeed (in knots): ";
        cin >> airspeed;

        double efficiency = fuelEfficiency(type, altitude, airspeed);
        cout << "\nEstimated Fuel Efficiency (Airplane): " << efficiency << " gallons per hour (GPH)\n";
    }

    else {
        cout << "Invalid choice! Please enter a number between 1 and 3.\n";
    }

    return 0;
}
