#include "RightSort.h"

int main()
{
    setlocale(LC_ALL, ("Russian"));
    
    int const N = 20;
    int mas[N];
    int index = 0;
    srand(time(NULL));
    cout << "��������� ������" << endl;
    for (int i = 0; i<N; i++)
    {
        mas[i] = rand() % 21 + 1;
        cout << mas[i] << " ";
    }
    cout << endl;
 
    //1. 
    cout << "����������� ������ ������������ �������" << endl;
    MixFunc(mas, N);
    cout << endl;
 
    //2.
    //*******************************
    cout << "������� ������ ��� �������� �����\n";
    for (int i = 0; i < N; i++)
    {
        cout << mas[i] << " ";
    }
    cout << "\n���������� ���������� �����\n������ ����� �� �������:" << endl;
    int num;
    cin >> num;
 
    for (int i = 0; i<N; i++)
    {
        if (mas[i] == num)
        {
            index = i;
            cout << "�������: " << i << endl;
            break;
        }       
    }
    cout << endl;
 
    //3.
    cout << "�������������� ������: ����� �� ��������� �� ��������, ������ - �� ����������� " << endl;
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