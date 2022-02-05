#include <iostream>
#include <vector>

std::vector<int> add_to_position(std::vector<int> vec, int val, int position) {
        std::vector<int> newVec(vec.size() + 1);
        for (int i = newVec.size(); i != position; i--) {
            newVec[i] = vec[i - 1];
        }
        newVec[position] = val;
        return newVec;
}

float getAverage(std::vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    float average = (float) sum / vec.size();
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

