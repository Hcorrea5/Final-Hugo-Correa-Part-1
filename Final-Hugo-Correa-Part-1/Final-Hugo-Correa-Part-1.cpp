#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    double arr[5] = { 0 };
    cout << endl << "Sale fliper." << endl;
    cout << "============" << endl;
    do
    {
        cout << endl << "Enter Sales #" << x + 1 << ": ";
        cin >> arr[x];
        x++;
    } while (x < 5);
    cout << endl;
    int i = 5;
    do
    {
        cout << endl << "Sales #" << i << ": " << arr[i-1] << endl;
        i--;
    } while (i > 0);
}
