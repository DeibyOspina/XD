#include <iostream>

using namespace std;
template  <typename T>
class Nodo{

private:
T dato;
Nodo * next;

public:
Nodo(){
 next = NULL;
}

nodo(T d){

    dato = d;
    next = NUll;
}

T getdato(){
    return dato;
}

void set_dato(T d){
dato = d;
}

Nodo<T> * get_next{
 return next;
}

void set_next(Nodo<T> * next){
 this-> next = next;
}

};
template  <typename T>
class listas{
private:

Nodo<T> * ptr;
int size;
public:
 lista(){
 ptr = NULL;
 size = 0;
 }
};


/*Metodos

list <int> lista;
push_back(elemto)
*/

