#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru");
    //calculator
    float num1, num2, percent, result;
    char sign;
    int num11{}, num22{};
    cout << "����� ���������� � ����� ������ �����������" << "\n";
    cout << "������� 1 �����:";
    cin >> num1;
    cout << "������� ����:";
    cin >> sign;
    cout << "������� 2 �����:";
    cin >> num2;
    if (sign == '+')
    {
        result = num1 + num2;
        cout << "����� = " << result << "\n";
    }
    else if (sign == '-')
    {
        result = num1 - num2;
        cout << "�������� = " << result << "\n";
    }
    else if (sign == '*')
    {
        result = num1 * num2;
        cout << "������������ = " << result << "\n";
    }
    else if (sign == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "������� = " << result << "\n";
        }
        else
        {
            cout << "������� �� 0 ���������" << "\n";
        }
    }
    else if (sign == '%')
    {
        cout << "������� �� ����� = " << num1 * num2 / 100 << "\n";
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