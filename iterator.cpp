#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };

    // Умножаем каждый элемент на 2
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2;
    }

    // Выводим результат
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}