#include "Function.h"

int main() {
    int* a, i, k, n;
    cout << "Vvedite kolichestvo" << endl;
    cin >> n;
    a = new int[n];

    cout << "Vvedite elementi" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i]; cin >> k;
    f(a, n, k);
    for (i = 0; i < n; i++)
        cout << a[i] << setw(5);
    delete[]a;
    return 0;
}