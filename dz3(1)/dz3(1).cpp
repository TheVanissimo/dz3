#include <iostream>;
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    double S, n, p, r, m;
    cout << "Введите сумму займа (S) руб." << endl;
    cin >> S;
    cout << "Введите количество (n) лет" << endl;
    cin >> n;
    cout << "Введите процент по займу (p)" << endl;
    cin >> p;
    if ((S > 0) && (n > 0) && (p > 0)) {
        r = p / 100;
        m = (S * r * (pow((1 + r), n))) / (12 * (pow((1 + r), n) - 1));
        cout << "Месячная выплата равна: " << m << "руб" << endl;
    }
    else {
        cout << "Неверно заданы переменные.\nСумма займа/кол-во лет/процент по займу должны быть больше нуля." << endl;
    }
}