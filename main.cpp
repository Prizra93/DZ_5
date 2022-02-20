#include "RightSort.h"

int main()
{
    setlocale(LC_ALL, ("Russian"));
    
    int const N = 20;
    int mas[N];
    int index = 0;
    srand(time(NULL));
    cout << "Начальный массив" << endl;
    for (int i = 0; i<N; i++)
    {
        mas[i] = rand() % 21 + 1;
        cout << mas[i] << " ";
    }
    cout << endl;
 
    //1. 
    cout << "Разбросаный массив произвольным образом" << endl;
    MixFunc(mas, N);
    cout << endl;
 
    //2.
    //*******************************
    cout << "Выведем массив для проверки снова\n";
    for (int i = 0; i < N; i++)
    {
        cout << mas[i] << " ";
    }
    cout << "\nНахождение случайного числа\nВвести число из массива:" << endl;
    int num;
    cin >> num;
 
    for (int i = 0; i<N; i++)
    {
        if (mas[i] == num)
        {
            index = i;
            cout << "Позиция: " << i << endl;
            break;
        }       
    }
    cout << endl;
 
    //3.
    cout << "Отсортирований массив: слева от найденого по убыванию, справа - по возрастанию " << endl;
    LeftSort(mas, index);
    RightSort(mas, N, index);
    for (int i = 0; i < N; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
     
    system("pause");
    return 0;
}