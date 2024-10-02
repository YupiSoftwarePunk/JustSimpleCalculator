#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru");
    //calculator
    float num1, num2, percent, result;
    char sign;
    int num11{}, num22{};
    cout << "Добро пожаловать в самый лучший калькулятор" << "\n";
    cout << "Введите 1 число:";
    cin >> num1;
    cout << "Введите знак:";
    cin >> sign;
    cout << "Введите 2 число:";
    cin >> num2;
    if (sign == '+')
    {
        result = num1 + num2;
        cout << "Сумма = " << result << "\n";
    }
    else if (sign == '-')
    {
        result = num1 - num2;
        cout << "Разность = " << result << "\n";
    }
    else if (sign == '*')
    {
        result = num1 * num2;
        cout << "Произведение = " << result << "\n";
    }
    else if (sign == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Частное = " << result << "\n";
        }
        else
        {
            cout << "Деление на 0 запрещено" << "\n";
        }
    }
    else if (sign == '%')
    {
        cout << "Процент от числа = " << num1 * num2 / 100 << "\n";
    }


    //how to reverse number 
    cout << "Enter number like 00:";
    cin >> num11;
    while (num11 > 0)
    {
        num22 = num22 * 10 + num11 % 10;
        num11 /= 10;
    }
    cout << num22 << endl;


    return 0;
}