#pragma once
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:
    string title;
    float damage;
    float weight;

public:
    Weapon();

    Weapon(string, float, float);

    friend ostream& operator<<(ostream&, Weapon&);

    ~Weapon();

    bool takeThis(float);

    float whatTheSum(float);

    float whatTheSum(Weapon&);
};