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
