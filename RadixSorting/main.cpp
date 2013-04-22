#include <iostream>
#include <ctime>
#include "RadixSort.h"

int main()
{
    int array[100];
    
    for(int i = 0; i < 100; i++)
        
        array[i] = rand() % 1000;
    
    radixSort(array, 100);
    
    for(int i = 0; i < 100; i++)
        
        cout << array[i] << endl;
    
    system("pause");
    return 0;
}