#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    // 1. Створення та ініціалізація однозв'язного списку для Варіанту 11
    forward_list<string> cities = {"Київ", "Львів", "Вінниця", "Одеса", "Харків"};

    cout << "Міста України:" << endl;

    // 2. Виведення всіх елементів списку за допомогою ітератора
    for (auto it = cities.begin(); it != cities.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
