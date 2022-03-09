#ifndef FILA_H
#define FILA_H
#include <iostream>

struct fila{
    int data;
    fila* next;

    fila(int d, fila* ptr){
        data=d;
        next=ptr;
    }
};


#endif