#include <iostream>
#include <list>
using namespace std;

int main(){

list<string> Frutas;
Frutas.push_back("Manzanas");
Frutas.push_back("Pera");
Frutas.push_back("Uvas");
Frutas.push_back("Melon");
Frutas.push_back("Fresa");

for (const auto & elemento : Frutas){
cout << elemento << "";
}
auto it = next(Frutas.begin(),1);
Frutas.insert(it, "Arandanos");
for (const auto & elemento : Frutas){
cout << elemento << "";
}
Frutas.pop_front();
for (const auto & elemento : Frutas){
cout << elemento << "";
}
auto it1 = next(Frutas.begin(),2);
// Frutas.erase(it1);  elimina por indice
Frutas.remove("Uvas"); // elimina elemento

Frutas.front();
Frutas.back();
auto it2 = next(Frutas.begin(),3);
cout << *it2 << endl;

// Frutas.at(2); devuelve un elemento (direccion)

Frutas.clear(); //elimina todos los elementos de la lista
// Frutas.resize(10); //aumenta el espacio de la lista (solo cuando tiene un valor fijo)
// Frutas.size();  ver el tamaño de la lista
// Frutas.max_size();  ver el tamaño de la lista

return 0;

}