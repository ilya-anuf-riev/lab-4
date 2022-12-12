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
};

int main()
{
    Weapon AWP("AWP", 96, 15);
    Weapon uknownWeapon;
    cout << "Через конструктор: " <<AWP<< endl;
    cout << "Без конструктора: " << uknownWeapon <<endl;
}
