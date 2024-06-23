#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>


int main() {
   
    std::vector<int> numbers;

 
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand() % 41 - 20);
    }

    std::cout << "Исходный вектор: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";


    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int num) {
        return num <= 0;
        }), numbers.end());

    std::cout << "Вектор после удаления отрицательных и нулей: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

   

    sort(numbers.begin(), numbers.end());

    std::cout << "Отсортированный вектор: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    

    std::vector<int> sortedNumbers(numbers.begin(), numbers.end());

    std::cout << "Второй вектор с отсортированными данными: ";
    for (int num : sortedNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    system("pause");
    return 0;
}
