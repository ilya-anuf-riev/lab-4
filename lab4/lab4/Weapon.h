#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:
    string name;
    float damage;
    float weight;

public:
    Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

    Weapon() : Weapon("Без названия", 0, 0) {}
    friend ostream& operator<<(ostream& output, Weapon& weapon)
    {
        output << "Оружие: \"" << weapon.name << "\": Наносимый урон = " << weapon.damage << ", Вес оружия = " << weapon.weight << endl;

        return output;
    }
public:
    ~Weapon()
    {
        cout << endl;
        cout << *this << " Было удалено." << endl;
    }
    
    bool takeThis(float maxWeight)
    {
        return maxWeight >= this->weight;
    }

    float whatTheSum(float loadWeight)
    {
        return this->weight + loadWeight;
    }

    float whatTheSum(Weapon& weapon)
    {
        return whatTheSum(weapon.weight);
    }

};
