// Sum from array function in c++
#include <iostream>
#include<stdio.h>
using namespace std;

int numbers[] = {1, 2, 3, 4}; 
int numbers_size = sizeof(numbers)/sizeof(numbers[0]);

int main() 
{
    int sum = 0;
    for (int i = 0; i < numbers_size; i++){
        sum += numbers[i];
    }

    cout << "\nSum from array = " << sum << endl;
    cout << numbers_size << endl;
    return 0;
}
