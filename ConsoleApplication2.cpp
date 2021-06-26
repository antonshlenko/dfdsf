#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");

    double x, y, z;

    double* px, * py, ** prx, ** pry;

    cout << "Введите первое число: " << endl;

    cin >> x;

    cout << "Введите второе число: " << endl;

    cin >> y;

    px = &x;
    py = &y;

    prx = &px;
    pry = &py;

    z = **prx + **pry;

    cout << "Сумма: " << z << endl;
}



#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");

    double x, y, * px, * py;

    char key, * pkey;

    cout << "Введите первое число: " << endl;

    cin >> x;

    cout << "Введите второе число: " << endl;

    cin >> y;

    px = &x;
    py = &y;

    cout << "Выберите действие '+' '-' '*' '/' " << endl;

    cin >> key;

    pkey = &key;

    switch (*pkey)
    {
    case '+':
        cout << *px << " + " << *py << " = " << *px + *py << endl;
        break;
    case '-':
        cout << *px << " - " << *py << " = " << *px - *py << endl;
        break;
    case '*':
        cout << *px << " * " << *py << " = " << (*px) * (*py) << endl;
        break;
    case '/':
        cout << *px << " / " << *py << " = " << (*px) / (*py) << endl;
        break;

    default:
        cout << "Введенный Вами символ некорректен " << endl;
        break;
    }

}






