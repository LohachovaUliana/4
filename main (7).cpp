#include <iostream>
#include <cmath>
using namespace std;

// Функція введення координат
bool inputCoordinates(int& x, int& y) {
    cout << "Введіть координати поля (x, y): ";
    cin >> x >> y;
    if (x < 1 || x > 8 || y < 1 || y > 8) {
        cout << "Координати мають бути в діапазоні 1-8." << endl;
        return false;
    }
    return true;
}

// Функція визначення кольору поля
bool determineColor(int x, int y) {
    return (x + y) % 2 == 0; // true для чорного, false для білого
}

// Функція перевірки кольору полів
void checkFieldColors() {
    int x1, y1, x2, y2;
    if (!inputCoordinates(x1, y1) || !inputCoordinates(x2, y2)) {
        cout << "Некоректне введення." << endl;
        return;
    }
    bool firstColor = determineColor(x1, y1);
    bool secondColor = determineColor(x2, y2);
    if (firstColor == secondColor) {
        cout << "Поля мають однаковий колір." << endl;
    } else {
        cout << "Поля мають різний колір." << endl;
    }
}

// Функція введення тризначного числа
bool inputThreeDigitNumber(int& number) {
    cout << "Введіть тризначне число: ";
    cin >> number;
    if (number < 100 || number > 999) {
        cout << "Число має бути тризначним." << endl;
        return false;
    }
    return true;
}

// Функція перестановки сотень і десятків
void rearrangeDigits() {
    int number;
    if (!inputThreeDigitNumber(number)) return;

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;
    int new_number = tens * 100 + hundreds * 10 + ones;

    cout << "Число після перестановки: " << new_number << endl;
}

// Меню вибору задачі
void displayMenu() {
    cout << "Оберіть задачу:" << endl;
    cout << "1. Перевірка кольору полів на шахівниці." << endl;
    cout << "2. Перестановка сотень і десятків у тризначному числі." << endl;
    cout << "0. Вийти." << endl;
}

int main() {
    int choice;
    do {
        displayMenu();
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkFieldColors();
                break;
            case 2:
                rearrangeDigits();
                break;
            case 0:
                cout << "Вихід із програми." << endl;
                break;
            default:
                cout << "Некоректний вибір. Спробуйте ще раз." << endl;
        }
    } while (choice != 0);

    return 0;
}
