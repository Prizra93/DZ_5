#include "insertSort.h"

int main()
{
    int const length = 20;
    int array[length];
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 40 - 10;
        cout << array[i] << " ";
    }
    cout << '\n';
    insertSort(array, length);
    cout << '\n';
    return 0;
}