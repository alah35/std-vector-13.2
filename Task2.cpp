#include "helper.h"

void task2() {
    std::vector<int> List;
    inputVector(List);
    outputVector(List);
    std::cout << "Average num = " << getAverage(List) << "Amount of notes = " << List.size() << std::endl;
}
