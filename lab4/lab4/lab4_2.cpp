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
    ~Weapon()
    {
        cout << endl;
        cout << *this << " Было удалено." << endl;
    }

    bool takeThis(float maxWeight) {
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

int main()
{
    Weapon* AWP = new Weapon("AWP", 96, 15);
    Weapon M4A4("M4A4", 23, 8);
    cout << M4A4 << endl;
    cout << *AWP << endl;

    cout <<endl<<"Можете ли вы поднять \"M4A4\" весом 8 КГ, если выдерживаете 10 КГ?"<<(M4A4.takeThis(10) ? "\n - Да" : "\n - Нет")<<endl;
    cout<<"\nВы дейсвительно хотите поднять \"M4A4\" весом 8 КГ, ведь Вам будет не так просто передвигаться?\nТеперь вы нагружены на " << M4A4.whatTheSum(0) << " КГ"<<endl;
    cout<<"\nВы подобрали \"AWP\" весом 15 КГ к уже поднятой \"M4A4\" весом 8 КГ.\nТеперь Вы нагружены на "<<M4A4.whatTheSum(*AWP)<<" КГ"<<endl;

}
