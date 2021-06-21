#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float resol, raiz, a, b, c, x1, x2, divisor, pos, neg;
	cout << "Ingrese el valor de a  " << endl;
	cin >> a;
	cout << "Ingrese el valor de b: " << endl;
	cin >> b;
	cout << "Ingrese el valor de c: " << endl;
	cin >> c;
	resol=b*b-4*a*c;
	divisor=2*a;
	if(resol>0 && divisor!=0){
        raiz = sqrt(resol);
        pos =-b+raiz;
        neg = -b-raiz;
        x1 = pos/divisor;
        x2 = neg/divisor;
        cout << endl;
        cout << "El resultado de las raices son: " << x1 << " y " << x2 << endl;
	}
	else
    {
        cout << "No tiene solucion";
    }

	return 0;
}
