#include <iostream>

using namespace std;

int main()
{
    double n, km, c=3.6;
    cout << "Ingrese la velocidad en m/seg" << endl;
    cin >> n;
    km=n*c;
    cout << "La conversion a km/h es: " << km << endl;

    return 0;
}
