#include <iostream>

using namespace std;

int SAS(int x, int y, int z);
int main()
{
    int p, o, s, t;
    cout << "Ievadiet pirmo skaitli: ";
    cin >> p;
    cout << "Ievadiet otro skaitli: ";
    cin >> o;
    cout << "Ievadiet treso skaitli: ";
    cin >> t;

    cout << "Jusu skaitlu summa ir "<< SAS(p,o,t) << endl;
    return 0;
}

int SAS(int x, int y, int z)
{
    int s;
    s = x + y + z;

    return s;
}
