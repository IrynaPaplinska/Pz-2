#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

// Допоміжна функція для виведення елементів списку
void printList(const forward_list<string>& list) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 1. Створити однозв'язний список, використовуючи перший елемент ("Київ")[cite: 2, 4]
    forward_list<string> cities = {"Київ"};

    // 2. Додати на початок списку два нові елементи за допомогою push_front()[cite: 4]
    cities.push_front("Одеса");
    cities.push_front("Львів");

    // 3. Вивести всі елементи списку на екран[cite: 4]
    cout << "Список після додавання елементів: ";
    printList(cities);

    // 4. Видалити перший елемент списку за допомогою pop_front()[cite: 4]
    cities.pop_front();

    // 5. Повторно вивести всі елементи списку на екран[cite: 4]
    cout << "Список після видалення першого елемента: ";
    printList(cities);

    return 0;
}