#include "../helper.h"

void task4() {

    bool isCorrect = false;
    int num = 0;
    while (!isCorrect) {
        std::cout << "How many elements would you like to add? ";
        std::cin >> num;
        isCorrect = num >= 0;
    }

    std::vector<int> list(num);
    int realSize = 0;
    while (num != 0) {
        int val;
        std::cout << "Enter number: ";
        std::cin >> val;
        list[realSize] = val;
        num--;
        realSize++;
    }

    outputVector(list);

    std::cout << "How many elements would you like to delete? ";
    std::cin >> num;
    isCorrect = num >= 0 && num < list.size();

    while (!isCorrect) {
        std::cout << "Wrong input, amount must be >= 0 and < list's size. Try again: ";
        std::cin >> num;
        isCorrect = num >= 0 && num < list.size();
    }

    while (num != 0) {
        int position;
        std::cout << "Which element do you want to delete? ";
        std::cin >> position;
        isCorrect = position >=0 && position < list.size();
        list = delete_from_position(list, position);
        num--;
    }

    outputVector(list);
}
