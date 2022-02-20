#include "MixFunc.h"

int Search(int mas[], int N, int num)
{
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (mas[i] == num)
        {
            index = i;
            break;
        }
    }
    cout << "Позиция: " << index << endl;
    return index;
}
