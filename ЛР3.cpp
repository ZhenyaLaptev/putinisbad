#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Перевірте чи ваше число парне та трьохзначне.";
    Sleep(5000);
    cout << "\nВведіть ціле позитивне число:\n";
    cin >> num;
    cout << "Зачекайте проводиться перевірка...";
    Sleep(5000);
    //cout << "\nЧисло парне:" << boolalpha << ((num % 2 == 0));
    //cout << "\nЧисло трьохзначне:" << boolalpha << ((num >= 100) && (num < 1000));
    ((num % 2 == 0)) ? cout << "\nВведене число є парним" : cout << "Введене число є непарним";
    ((num>=100) && (num<1000)) ? cout << "\nВведене число є трьохзначним" : cout << "\nВведене число не є трьохзначним";
    //cout << "\nЧисло трьохзначне?\t" << (num>=100 && num < 1000) << endl;
    //cout << "Число парне?\t" << (num % 2 == 0) << endl;
}

