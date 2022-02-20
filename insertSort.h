#include "Header.h"


void insertSort(int array[], int length) {
    int x, k;
    int leftNeg = -1;
    int rightNeg = -1;
    for (int i = 0; i < length; i++)
        if (array[i] < 0)
        {
            rightNeg = i;
        }
    for (int i = length - 1; i >= 0; i--)
        if (array[i] < 0)
        {
            leftNeg = i;
        }
    for (int n = 0; n < length; n++)
    {
        for (int i = leftNeg; i < rightNeg; i++)
        {
            k = i;
            x = array[i];
            for (int j = i + 1; j < rightNeg; j++)
                if (array[j] < x) {
                    k = j;
                    x = array[j];
                }
            array[k] = array[i];
            array[i] = x;

        }
        cout << array[n] << " ";
    }
}