#include <iostream>

using namespace std;

void DayWeek(int a) {
    switch (a)
    {
    case 1: cout << "Понедельник  "; break;
    case 2: cout << "Вторник  "; break;
    case 3: cout << "Среда  "; break;
    case 4: cout << "Четверг  "; break;
    case 5: cout << "Пятница  "; break;
    case 6: cout << "Суббота  "; break;
    case 7: cout << "Воскресенье  "; break;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    const int WEEK = 7;
    double arr[WEEK];
    double enter, summ = 0;
    int maxDay = 0;
    cout << "Введите расход в \"$\" в каждый из дней недели. \n\n";
    for (int i = 1; i <= WEEK; i++) {
        DayWeek(i);
        cin >> enter;
        arr[i - 1] = enter;
    }
    system("cls");
    cout << endl;
    cout << "Дни, когда расходы превысили 100$ \n\n";
    for (int i = 1; i <= WEEK; i++) {
        summ += arr[i-1];
        if (arr[i - 1] > 100) {
            DayWeek(i);
            maxDay++;
            cout << endl;
        }
    }
    cout << "Количество дней - " << maxDay << endl;
    cout << "Средняя сумма расходов за неделю - " << summ / WEEK << " $ " << endl;
    cout << "Общая сумма расходов за неделю - " << summ << " $ " << endl;
}
