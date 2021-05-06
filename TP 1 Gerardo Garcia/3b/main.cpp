#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float resol, raiz, a, b, c, x1, x2, div, pos, neg;
	cout << "Ingrese el valor de a  " << endl;
	cin >> a;
	cout << "Ingrese el valor de b: " << endl;
	cin >> b;
	cout << "Ingrese el valor de c: " << endl;
	cin >> c;
	resol=b*b-4*a*c;
	if(resol>0){
        raiz = sqrt(resol);
        div =2*a;
        pos =-b+raiz;
        neg = -b-raiz;
        x1 = pos/div;
        x2 = neg/div;
        cout << "El resultado de las raices son: " << x1 << " y " << x2 << endl;
	}
	else
    {
        cout << "No tiene solucion";
    }

	return 0;
}
