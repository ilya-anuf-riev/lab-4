#include <iostream>

#include "Weapon.h"
int main()
{
    Weapon* AWP = new Weapon("AWP", 96, 15);
    Weapon M4A4("M4A4", 23, 8);
    cout << M4A4 << endl;
    cout << *AWP << endl;

    cout << "\nМожете ли вы положить в сумку \"M4A4\" весом 8 КГ, если ваша сумка выдерживает 10 КГ?" << (M4A4.takeThis(10) ? "\n - Да" : "\n - Нет") << endl;
    cout << "\nВы дейсвительно хотите поднять \"M4A4\" весом 8 КГ, ведь у вас отстанется мало места?\nТеперь вы нагружены на " << M4A4.whatTheSum(0) << " КГ" << endl;
    cout << "\nВы подобрали \"AWP\" весом 15 КГ к запасу уже существующей \"M4A4\" весом 8 КГ.\nТеперь ваш портфель нагружен на " << M4A4.whatTheSum(*AWP) << " КГ" << endl;

}
