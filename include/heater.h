//
// Created by user on 14.05.2022.
//

#ifndef THEREGULATORS_HEATER_H
#define THEREGULATORS_HEATER_H

class Heater{
public:
    Heater(float maxPower):maxPower_(maxPower) {};
    float getMaxPower(){return maxPower_;}
// in case of invalid input full power, the regulator will withstand
// todo: consider to throw exc for invalid power level
    float giveHeat(float powerLevel){return (powerLevel < 1 && powerLevel > 0) ? powerLevel * maxPower_ : maxPower_;}

private:
    const float maxPower_;
};
#endif //THEREGULATORS_HEATER_H
