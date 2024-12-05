#include <iostream>
#include <string>

class Vehicle {
public:
    virtual double calculateRentalFee(int days) const = 0;
    virtual ~Vehicle() {}
};
