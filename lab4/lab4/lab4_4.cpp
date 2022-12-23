#include <iostream>
#include "Weapon.h"
#include "Characteristic.h"
#include "Math.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    Weapon glock("USP-S", 27, 2);

    //проверка работы нового функционала (#4)
    cout << "Название оружия:" << glock.getName() << endl;
    cout << "Урона оружием: " << glock.getDamage() << endl;
    cout << "Масса оружия: " << glock.getWeight() << endl;

    //проверка функционала класса Characteristics (#8)
    Characteristic glockCharacteristic(7);
    cout << "\nХарактеристики оружия USP-S: " << glockCharacteristic.getDamage(glock) << endl;

    //проверка работы функционала (#12)
    cout << "\nФункция сложения: 17 + 24" << Math::add(17, 24) << endl;
    cout << "Функция вычитания: 18 - 25" << Math::sub(18, 25) << endl;
    cout << "Функция умножения: 19 * 26" << Math::mult(19, 26) << endl;
    cout << "Функция деления: 20 / 27" << Math::div(20, 27) << endl;

    //вывод статической переменной методов MyMath в консоль (#13)
    cout << "Количество вызова методов MyMath: " << MyMath::numberofcalls << endl;

}
