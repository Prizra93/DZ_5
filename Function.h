#include "Header.h"

void f(int* a, int n, int k)
{
    int i, j, temp;
    switch (k)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }break;
    case 2:
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }break;
    }
}
