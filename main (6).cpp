/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

// Функція для сортування трьох чисел у порядку зростання
void SortInc3(double& A, double& B, double& C) {
   // Міняємо місцями A і B, якщо A більше B
    if (A > B) swap(A, B); 
    // Міняємо місцями B і C, якщо B більше C
    if (B > C) swap(B, C); 
    // Повторно перевіряємо A і B
    if (A > B) swap(A, B); 
}

int main() {
    // Перший набір чисел
    double A1, B1, C1;
    cout << "Enter three numbers for the first set (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;

    // Другий набір чисел
    double A2, B2, C2;
    cout << "Enter three numbers for the second set (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    // Сортування першого набору
    SortInc3(A1, B1, C1);
    cout << "Sorted first set: " << A1 << " " << B1 << " " << C1 << endl;

    // Сортування другого набору
    SortInc3(A2, B2, C2);
    cout << "Sorted second set: " << A2 << " " << B2 << " " << C2 << endl;


    // Введення координат першого поля
    int x1, y1;
    cout << "Enter coordinates of the first field (x1, y1): ";
    cin >> x1 >> y1;

    // Введення координат другого поля
    int x2, y2;
    cout << "Enter coordinates of the second field (x2, y2): ";
    cin >> x2 >> y2;

    // Перевірка коректності введення
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        cout << "Coordinates must be in the range 1-8." << endl;
        return 1; // Завершення програми через некоректне введення
    }

    // Визначення кольору полів
    bool firstColor = (x1 + y1) % 2 == 0; // true для чорного, false для білого
    bool secondColor = (x2 + y2) % 2 == 0; // true для чорного, false для білого

    // Перевірка, чи поля мають однаковий колір
    if (firstColor == secondColor) {
        cout << "The fields have the same color." << endl;
    } else {
        cout << "The fields have different colors." << endl;
    }

    int number;
    
    // Введення тризначного числа
    cout << "Введіть тризначне число: ";
    cin >> number;

    // Витягуємо сотні, десятки і одиниці
    int hundreds = number / 100;       // Сотні
    int tens = (number / 10) % 10;     // Десятки
    int ones = number % 10;            // Одиниці

    // Переставляємо сотні і десятки
    int new_number = tens * 100 + hundreds * 10 + ones;

    // Виведення результату
    cout << "Число після перестановки: " << new_number << endl;

   
    return 0;
}