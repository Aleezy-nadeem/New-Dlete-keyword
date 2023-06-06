#include <iostream>
using namespace std;
int main() {  
    int* dynamicInt = new int;
    *dynamicInt = 10;

    cout << "Dynamic Integer Value: " << *dynamicInt << endl;
    int size = 5;
    int* dynamicArray = new int[size];

    cout << "Dynamic Array Values: ";
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 2;
       cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;
    delete dynamicInt;
    delete[] dynamicArray;
    return 0;
}

