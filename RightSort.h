#include "LeftSort.h"

void RightSort(int mas[], int N, int index)
{
    int tmp = 0;
    for (int i = index + 1; i < N; i++)
    {
        for (int k = i + 1; k < N; k++)
        {
            if (mas[i] < mas[k])
            {
                tmp = mas[i];
                mas[i] = mas[k];
                mas[k] = tmp;
            }
        }
    }
}
