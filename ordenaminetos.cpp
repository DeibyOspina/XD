#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*Ordenamientos vectores arrays*/


vector<string> poker;

class carta{

private:

public :

void ordBur (int poker[] , int n){
 for(int i = 0 ; i < n-1 ; i++){
    for(int j = 0 ; j < n-i-1 , j++ ){
      int temp = poker[j];
      poker[j]=poker[j+1];
      poker[j+1]=temp; 
    }
 }
}

void vectOrd(int poker[], int tamanio){
 for( int i = 0 ; i < tamanio; i++){
  cout << poker[i] << " ";
  cout << endl;
 }
}

};


/*Ordenamientos de listas*/

list<string> poker2;

struct Node
{
    int data;
    Node * next;
    Node(int val): data(val), next(nullptr){}

};

// funcion insertar un nodo al inicio de la lista

void insertinitlist(Node* &head , int val){
 Node* nuevoNode = new Node(val);
 nuevoNode-> next = head;
 head = nuevoNode;

}

void mostrarlist(Node * head){
 while(head != nullptr){
  cout << head->data << " " ;
  head= head-> next;
 }
 cout << endl;
}

void ordList(Node * &head){

 if(head == nullptr ||  head->next == nullptr)

    return;
    Node* sorted = nullptr ; 
    Node* current = head;
 
 while ( head != nullptr )
 {
    Node* nextNode = current-> next;
    if(sorted == nullptr || sorted-> data >= current-> data){
      current-> next = sorted;
      sorted = current;
    
    }else{
        Node * temp = sorted;
        while(temp-> next !=nullptr && temp-> next-> data < current->data){     
           temp = temp ->next
        }
        current->next = temp->next;
        temp->next = current;
    }
    current=nextNode;
 }
 head= sorted;
}

int main(){

string poker[] = {};
int n = sizeof{poker}/sizeof{poker[0]};
cout << "El vector orignal es :" << " ";
vectOrd{poker,n};
ordBur{poker,n};
cout << "El vector ordenado es: " << " ";
vectOrd{poker , n};

poker2.push_back("A");
poker2.push_back("K");
poker2.push_back("J");
poker2.push_back("Q");
poker2.push_back("1");
poker2.push_back("2");
poker2.push_back("3");
poker2.push_back("4");
poker2.push_back("5");
poker2.push_back("6");
poker2.push_back("7");
poker2.push_back("8");
poker2.push_back("9"); 

Node* head= nullptr;
insertinitlist(head,50);
insertinitlist(head,160);


cout<< "lista original es:" << endl;
mostrarlist(head);
ordList(head);
cout << "lista ordenada es" << endl;
mostrarlist(head);

return 0;

}