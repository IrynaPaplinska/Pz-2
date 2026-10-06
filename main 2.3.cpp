#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    // 1. Створити однозв'язний список із початкових елементів відповідно до Варіанту 11
    forward_list<string> cities = {"Київ", "Львів", "Вінниця", "Одеса", "Харків"};

    // Елемент для пошуку за Варіантом 11
    string target = "Вінниця";
    bool found = false;

    // 2. Ручна перевірка наявності елемента за допомогою ітератора у циклі
    for (auto it = cities.begin(); it != cities.end(); ++it) {
        if (*it == target) {
            found = true;
            break; // Перериваємо цикл, якщо елемент знайдено
        }
    }

    // 3. Вивести результат перевірки на екран
    if (found) {
        cout << "Елемент знайдено" << endl;
    } else {
        cout << "Елемент не знайдено" << endl;
    }

    return 0;
}