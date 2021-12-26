#include <iostream>
using namespace std;
int mayor(int a, int b);
int mayor (int a, int b){
    if (a >= b)
        return a;
    return b;
}
int menor (int a, int b){
    if (a < b)
        return a;
    return b;
}
int main(){
    int a = 8;
    int b = 10;
    int valor_mayor = mayor(a,b);
    int valor_menor = menor(a,b);
    cout << "Entre "<<a<<" y "<< b << ", el mayor es: " << mayor(a,b)
         << "\n            y el menor es: "<< menor(a,b)<<endl;
    return 0;
}
