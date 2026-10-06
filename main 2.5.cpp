#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    // 1. Створити однозв'язний список відповідно до Варіанту 11
    forward_list<string> cities = {"Київ", "Львів", "Вінниця", "Одеса", "Харків"};

    string searchElement = "Вінниця";
    string newElement = "Дніпро";

    auto it = cities.begin();
    bool found = false;

    // 2. Пошук заданого елемента за допомогою ітератора
    while (it != cities.end()) {
        if (*it == searchElement) {
            // Вставка нового елемента після знайденого
            cities.insert_after(it, newElement);
            found = true;
            break;
        }
        ++it;
    }

    // Перевірка та виведення відповідного повідомлення, якщо елемент відсутній
    if (!found) {
        cout << "Заданий елемент не знайдено у списку." << endl;
    }

    // 3. Виведення оновленого списку на екран
    cout << "Оновлений список: ";
    for (auto i = cities.begin(); i != cities.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}