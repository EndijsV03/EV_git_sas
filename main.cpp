#include <iostream>

using namespace std;

int SAS(int x, int y);
int main()
{
    int p, o, s;
    cout << "Ievadiet pirmo skaitli: ";
    cin >> p;
    cout << "Ievadiet otro skaitli: ";
    cin >> o;

    cout << "Jusu skaitlu summa ir "<< SAS(p,o) << endl;
    return 0;
}

int SAS(int x, int y)
{
    int s;
    s = x + y;

    return s;
}
