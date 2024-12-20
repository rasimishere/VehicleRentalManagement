#include <iostream>
#include <string>

class Vehicle {
public:
    virtual double calculateRentalFee(int days) const = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    double dailyRate;

public:
    Car(double rate) : dailyRate(rate) {}

    double calculateRentalFee(int days) const override {
        return days * dailyRate;
    }
};

class Motorcycle : public Vehicle {
private:
    double dailyRate;

public:
    Motorcycle(double rate) : dailyRate(rate) {}

    double calculateRentalFee(int days) const override {
        return days * dailyRate;
    }
};

class Bicycle : public Vehicle {
private:
    double dailyRate;

public:
    Bicycle(double rate) : dailyRate(rate) {}

    double calculateRentalFee(int days) const override {
        return days * dailyRate;
    }
};

int main() {
    Vehicle* car = new Car(50.0);
    Vehicle* motorcycle = new Motorcycle(30.0);
    Vehicle* bicycle = new Bicycle(10.0);

    int rentalDays = 3;

    std::cout << "Car Rental Fee for " << rentalDays << " days: $" << car->calculateRentalFee(rentalDays) << "\n";
    std::cout << "Motorcycle Rental Fee for " << rentalDays << " days: $" << motorcycle->calculateRentalFee(rentalDays) << "\n";
    std::cout << "Bicycle Rental Fee for " << rentalDays << " days: $" << bicycle->calculateRentalFee(rentalDays) << "\n";

    delete car;
    delete motorcycle;
    delete bicycle;
    
    return 0;
}
