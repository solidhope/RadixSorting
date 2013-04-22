#pragma once
#ifndef RadixSorting_RadixSort_h
#define RadixSorting_RadixSort_h

#include <iostream>
#include <ctime>
using namespace std;

void radixSort(int array[], int size)
{
    
    int *table[10];
    
    for(int i = 0; i < 10; i++)
    {
        
        table [i] = new int [size + 1];
        table [i][0] = 0;
        
    }
    
    int divider = 1;
    for(int i = 0; i <  3; i++, divider *= 10)
    {
        
        for(int j = 0; j < size; j++)
        {
            
            int digit = (array[j] / divider) % 10;
            table[digit][0]++;
            table[digit][table[digit][0]] = array[j];
            
        }
        
        int index = 0;
        for(int j = 0; j < 10; j++)
        {
            
            for(int k = 1; k <= table[j][0]; k++)
            {
                
                array[index] = table[j][k];
                index++;
                
            }
            
            table[j][0] = 0;
        }
        
    }
}


#endif
