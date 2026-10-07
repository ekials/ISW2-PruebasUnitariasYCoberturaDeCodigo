#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(std::vector<int>& vet)
{                                                   // 1  Entrada
    int n = static_cast<int>(vet.size());           // 2  n = size
    for (int i = n - 1; i >= 1; i--)                // 3  i = n-1
    {                                               // 4  i >= 1 ?
        for (int j = 0; j <= i - 1; j++)            // 5  j = 0
        {                                           // 6  j <= i-1 ?
            if (vet[j] > vet[j + 1])                // 7  if v[j] > v[j+1]
                std::swap(vet[j], vet[j + 1]);      // 8  swap
                                                    // 9  j++
        }                                           //10  i--
    }                                               //11  Salida
}

