#ifndef FILATRUE_H
#define FILATRUE_H
#include "fila.h"
#include <stdexcept>
#include <iostream>

struct filatrue{
private:
       fila* inicio;
       fila* final;

public:
       filatrue();
       ~filatrue();
       bool empty();
       int size();
       void addlast(int k);
       void removefirst();
       int front();
       int last();
       void imprimir();
};

filatrue::filatrue(){
    inicio=final=nullptr;
}

filatrue::~filatrue(){
    while(inicio!=nullptr){
    fila *temp=inicio;
    inicio=inicio->next;
    delete temp;
  }
}


bool filatrue::empty(){
    return inicio==nullptr;
}

int filatrue::size(){
    int tamanho=0;
    fila* temp=inicio;
    while(temp!=nullptr){
        tamanho++;
        temp=temp->next;
    }
    return tamanho;
}

void filatrue::addlast(int k){
    fila* add= new fila(k, nullptr);
    if(inicio==nullptr){
        inicio=add;
        final=add;
    }else{
        if(final!=nullptr){
            fila* temp=final;
            temp->next=add;
            final=temp->next;
        }
    }
}

void filatrue::removefirst(){
    if(inicio==nullptr){
        throw std :: overflow_error (" erro : fila vazia ");
    }
    fila* temp=inicio;
    fila* exclui=inicio;
    inicio=temp->next;
    delete exclui;
}

int filatrue::front(){
    return inicio->data;
}

int filatrue::last(){
    return final->data;
}

void filatrue::imprimir(){
    fila* temp=inicio;
    std::cout << "[ ";
    while(temp!=nullptr){
        std::cout << temp->data << " ";
        temp=temp->next;
    }
    std::cout <<"]";
}

#endif