#include <iostream>
#include "filatrue.h"
using namespace std;

int main(){
    filatrue tokyo;

    int n;
    cin >> n;
    int vet[n];

    for(int i=0;i<n;i++){
        cin >> vet[i];
    }

    for(int i=0;i<n;i++){
        tokyo.addlast(vet[i]);
    }

    int first=tokyo.front();
    int last=tokyo.last();

    cout << "primeiro elemento:" << endl;
    cout << first << endl;
    cout << "ultimo elemento:" << endl;
    cout << last << endl;

    int k= tokyo.size();
    cout << "tamanho da fila:" << endl << k << endl<< endl;

    cout << "remove um elemento" << endl;
    tokyo.removefirst();
    cout << endl;

    first=tokyo.front();
    last=tokyo.last();

    cout << "primeiro elemento:" << endl;
    cout << first << endl;
    cout << "ultimo elemento:" << endl;
    cout << last << endl;

    cout << "imprimir toda a fila:"<< endl;
    tokyo.imprimir();
}