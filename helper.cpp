#include <iostream>
#include <vector>

int getAverage(std::vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size() - 1; i++) {
        sum += vec[i];
    }
    int average = sum / vec.size();
    return average;
}

std::vector<int> add(std::vector<int> vec, int num) {
    std::vector<int> newVec(vec.size() + 1);

    for (int i = 0; i < vec.size(); i++) {
        newVec[i] = vec[i];
    }

    newVec[vec.size()] = num;

    return newVec;
}

void inputVector(std::vector<int> &vec) {
    int num = 0;

    while (num != -1) {
        std::cout << "Enter element: ";
        std::cin >> num;
        if (num == - 1)
            break;
        vec = add(vec, num);
    }
}

void outputVector(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (i == vec.size() - 1)
            std::cout << vec[i] << std::endl;
        else
            std::cout << vec[i] << ", ";
    }
}

