#ifndef PAYOFF_H
#define PAYOFF_H

class PayOff
{
public:
    enum OptionType {call, put};
    PayOff(double Strike_, OptionType TheOptionType_); // the constructot
    double operator()(double Spot) const; // main method- given a value of a spot, return the value of the payoff
    //use function objects or functors here
    //define operator() as const, this method would not modify the object
private:
    double Strike;
    OptionType TheOptionType;
};


#endif
