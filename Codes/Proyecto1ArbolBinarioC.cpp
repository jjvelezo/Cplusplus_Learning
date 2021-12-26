//Arbol Binario

#include <iostream>
using namespace std;

struct Nodo {
    int data;
    struct Nodo *izq;
    struct Nodo *der;
}; 


struct Nodo *newNodo(int data) {
    
    size_t sizeNodo = sizeof(struct Nodo);
    struct Nodo *nodo = (struct Nodo *) malloc(sizeNodo);

    nodo->data = data;
    nodo->izq = nodo->der = NULL;


    return nodo; 
}


void nueva(struct Nodo *nodo, int data) {
    if (data>nodo->data) {
        if (nodo->der==NULL) {
            nodo->der=newNodo(data);
        } else {
            nueva(nodo->der, data);
        }
    } else {
        if (nodo->izq==NULL) {
            nodo->izq=newNodo(data);
        } else {
            nueva(nodo->izq, data);
        }
    }
}



void enorden(struct Nodo *nodo) {
    if (nodo!=NULL) {
        enorden(nodo->izq);
        cout<<nodo->data<<endl;
        enorden(nodo->der);
    }
}


int main(void) {
  
    struct Nodo *raiz = newNodo(4);
    nueva(raiz, 1);
    nueva(raiz, 6);
    nueva(raiz, 9);
    nueva(raiz, 3);
    
    enorden(raiz);


    return 0;

}
