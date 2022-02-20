#include "Search.h"


void LeftSort(int mas[], int index)
{
    int tmp = 0;
    for (int i = 0; i < index - 1; i++)
    {
        for (int k = i + 1; k < index; k++)
        {
            if (mas[i] > mas[k])
            {
                tmp = mas[i];
                mas[i] = mas[k];
                mas[k] = tmp;
            }
        }
    }
}
