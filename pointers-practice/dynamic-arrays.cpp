#include <iostream>

int main() {

    int size;
    std::cout << "Size: ";
    std::cin >> size; //size of the array

    int* myArray = new int[size]; //user specified array. This is okay because the array
    // has been allocated a memory spot and it holds no value so it can take value


    for (int i = 0; i < size; i++) {
        std::cout << "Array [" << i << "]: ";
        std::cin >> myArray[i]; //inputting array values
    }

    for (int i = 0; i < size; i++) {
        std::cout << myArray[i] << std::endl; // one way to print out values
        std::cout << *(myArray + 1) << " "; // another way to print out values, but by dereferencing
    }

    delete[]myArray; //this tells the system to delete the values. Deallocating memory
    //because it doesn't belong to the program

    myArray = NULL; // good practice to have this set to NULL 


    return 0;
}


// How can I insert and delete elements in an array during runtime, without slowing down the system?
// Dynamic arrays will allow me to allocate and deallocate memory.