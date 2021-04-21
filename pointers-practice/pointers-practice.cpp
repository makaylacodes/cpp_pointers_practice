
#include <iostream>

int getMin(int numbers[], int size); //Prints smallest number in array
int getMax(int numbers[], int size); //Prints largest number in array

//Using only one function to get min and max

void getMinandMax(int numbers[], int size, int* min, int* max);

int main()
{
    int numbers[5] = { 5, 4, -2, 29, 6 };

    std::cout << "Min is " << getMin(numbers, 5);
    std::cout << "\nMax is " << getMax(numbers, 5) << std::endl << std::endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinandMax(numbers, 5, &min, &max);

    std::cout << "Min is " << min << " and Max is " << max;
    return 0;
}
int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}


void getMinandMax(int numbers[], int size, int*min, int*max) {

    for (int i = 1; i < size; i++) {
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
        if (numbers[i] > *max) {
           * max = numbers[i];
        }
    }
   
}