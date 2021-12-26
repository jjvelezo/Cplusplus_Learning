#include <iostream>

using namespace std;
int main() {

 int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

 cout<< "Digite el primer numero: ";
 cin>>n1;
 cout<< "Digite el segundo numero: ";
 cin>>n2;

 suma = n1 + n2;
 resta = n1 - n2;
 multiplicacion = n1 * n2;
 division = n1/n2;

 cout<<"Suma: "<<suma<<endl;
 cout<<"Resta: "<<resta<<endl;
 cout<<"Multiplicacion: "<<multiplicacion<<endl;
 cout<<"Division: "<<division<<endl;

 return 0;
}
