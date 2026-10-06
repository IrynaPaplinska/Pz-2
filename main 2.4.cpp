#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    // 1. Створити однозв'язний список із початкових елементів відповідно до Варіанту 11
    forward_list<string> cities = {"Київ", "Львів", "Вінниця", "Одеса", "Харків"};

    int total_length = 0;

    // 2. Переглянути всі елементи списку за допомогою ітератора
    // 3. Обчислити загальну кількість символів у назвах усіх елементів
    for (auto it = cities.begin(); it != cities.end(); ++it) {
        total_length += it->length();
    }

    // 4. Вивести результат на екран
    cout << "Загальна кількість символів: " << total_length << endl;

    return 0;
}