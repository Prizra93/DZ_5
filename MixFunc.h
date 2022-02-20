#include "Header.h"

void MixFunc(int mas[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int tmp = 0;
        int tmp2 = 0;
        tmp = rand() % 20;
        tmp2 = mas[i];
        mas[i] = mas[tmp];
        mas[tmp] = tmp2;
    }

    for (int i = 0; i < N; i++)
    {
        cout << mas[i] << " ";
    }
    cout << "\n************************************\n";
}
