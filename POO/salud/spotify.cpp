#include <iostream>
#include <list>
using namespace std;

int option;
list <string> Canciones;

struct Nodo
{
 int dato;
 Nodo* next;

};

class listaenlazada {
 private:
  Nodo * head;

 public:
 listaenlazada() : head(nullptr) {}

    void insertlist (int dato){
      Nodo * nuevoNodo = new Nodo;
      nuevoNodo-> dato = dato;
      nuevoNodo-> next = head;
      head = nuevoNodo;
    
    }
    void mostrarlista(){
     Nodo * temp = head;
     while( temp != nullptr){
       
        cout << temp-> dato << "";
        head = temp -> next;

     }      
     cout << endl;
    }
};

void  menu(){

cout << "Menu" << endl;
cout << "1. Mostrar Lista De Canciones" << endl;
cout << "2. Agregar Cancion A Mi Lista" << endl;
cout << "3. Eliminar Cancion De Mi Lista" << endl; 
cout << "4. Crear lista" << endl;
cin >> option;

if(option == 1)
{
    string listname;
    cout << "Cual lista Desea ver (nombre de la lista)"<< endl;
    cin >> listname;

    for (const auto & elemento : listname){
    cout << elemento << "";
    }
}   
else if (option == 2) {
      
      string listname;
      cout << "Cual lista Desea Editar (nombre de la lista)"<< endl;
      cin >> listname;
      string cancion_ag;
      cout << "Ingrese el nombre de la canción a agregar: ";
      cin >> cancion_ag;
      find();
      listname.push_back(cancion_ag);

} else if (option == 3) {

        string listname; 
        cout << "Cual lista Desea Editar (nombre de la lista)"<< endl;
        cin >> listname;
        string cancion_elm;
        cout << "Ingrese el nombre de la canción a eliminar: ";
        cin >> cancion_elm;
        listname.remove(cancion_elm);
}
else if (option == 4){
    string namelist ;
    cout << "Ingrese el nombre para la nueva lista" << endl ;
    cin >> namelist ;
    list<string> namelist;

}

}

int main(){

Canciones.push_back("Bohemian Rhapsody – Queen");
Canciones.push_back("Imagine - John Lennon");
Canciones.push_back("Hotel California – Eagles");
Canciones.push_back("Smells Like Teen Spirit – Nirvana");
Canciones.push_back("Billie Jean - Michael Jackson");
Canciones.push_back("Stairway to Heaven - Led Zeppelin");
Canciones.push_back("Hey Jude - The Beatles");
Canciones.push_back("Sweet Child o' Mine - Guns N' Roses");
Canciones.push_back("Like a Rolling Stone - Bob Dylan");
Canciones.push_back("Thriller - Michael Jackson");
Canciones.push_back("Wonderwall – Oasis");
Canciones.push_back("Hurt - Johnny Cash");
Canciones.push_back("Creep – Radiohead");
Canciones.push_back("Purple Haze - Jimi Hendrix");
Canciones.push_back("Boys Don't Cry - The Cure");
Canciones.push_back("Under Pressure - Queen & David Bowie");
Canciones.push_back("I Will Always Love You - Whitney Houston");
Canciones.push_back("Every Breath You Take - The Police");
Canciones.push_back("November Rain - Guns N' Roses");
Canciones.push_back("Smile Like You Mean It - The Killers");
Canciones.push_back("Africa – Toto");
Canciones.push_back("Wish You Were Here - Pink Floyd");
Canciones.push_back("Let It Be - The Beatles");
Canciones.push_back("Born to Run - Bruce Springsteen");
Canciones.push_back("Nothing Else Matters – Metallica");
Canciones.push_back("Killing Me Softly With His Song - Roberta Flack");
Canciones.push_back("Dancing Queen – ABBA");
Canciones.push_back("Satisfaction - The Rolling Stones");
Canciones.push_back("Don't Stop Believin' – Journey");
Canciones.push_back("Yesterday - The Beatles");
Canciones.push_back("Time After Time - Cyndi Lauper");
Canciones.push_back("Crazy - Gnarls Barkley");
Canciones.push_back("Bittersweet Symphony - The Verve");
Canciones.push_back("My Generation - The Who");
Canciones.push_back("Crazy in Love - Beyoncé ft. Jay-Z");
Canciones.push_back("Stand by Me - Ben E. King");
Canciones.push_back("You Shook Me All Night Long - AC/DC");
Canciones.push_back("Tears in Heaven - Eric Clapton");
Canciones.push_back("Bridge Over Troubled Water - Simon & Garfunkel");
Canciones.push_back("Dancing in the Dark - Bruce Springsteen");
Canciones.push_back("Come As You Are – Nirvana");
Canciones.push_back("Paint It Black - The Rolling Stones");
Canciones.push_back("Take on Me - a-ha");
Canciones.push_back("Sweet Dreams (Are Made of This) – Eurythmics");
Canciones.push_back("Rocket Man - Elton John");
Canciones.push_back("Livin' on a Prayer - Bon Jovi");
Canciones.push_back("With or Without You - U2");
Canciones.push_back("The Sound of Silence - Simon & Garfunkel");
Canciones.push_back("Paradise City - Guns N' Roses");
Canciones.push_back("Careless Whisper - George Michael");
Canciones.push_back("In the Air Tonight - Phil Collins");
Canciones.push_back("Mad World - Tears for Fears");
Canciones.push_back("Enter Sandman – Metallica");
Canciones.push_back("Everywhere - Fleetwood Mac");
Canciones.push_back("Radioactive - Imagine Dragons");
Canciones.push_back("Somebody to Love – Queen");
Canciones.push_back("Wuthering Heights - Kate Bush");
Canciones.push_back("Heart of Gold - Neil Young");
Canciones.push_back("I Want to Hold Your Hand - The Beatles");
Canciones.push_back("Blue Suede Shoes - Elvis Presley");
Canciones.push_back("I Will Survive - Gloria Gaynor");
Canciones.push_back("Ain't No Mountain High Enough - Marvin Gaye & Tammi Terrell");
Canciones.push_back("Piano Man - Billy Joel");
Canciones.push_back("Dreams - Fleetwood Mac");
Canciones.push_back("American Pie - Don McLean");
Canciones.push_back("Boys of Summer - Don Henley");
Canciones.push_back("In My Life - The Beatles");
Canciones.push_back("Don't Let Me Down - The Beatles");
Canciones.push_back("I Wanna Dance with Somebody - Whitney Houston");
Canciones.push_back("Sweet Caroline - Neil Diamond");
Canciones.push_back("How Deep Is Your Love - Bee Gees");
Canciones.push_back("Stand by Your Man - Tammy Wynette");
Canciones.push_back("Hallelujah - Jeff Buckley");
Canciones.push_back("Fix You – Coldplay");
Canciones.push_back("Drops of Jupiter – Train");
Canciones.push_back("Candle in the Wind - Elton John");
Canciones.push_back("Hey Ya! – Outkast");
Canciones.push_back("The Scientist – Coldplay");
Canciones.push_back("Fast Car - Tracy Chapman");
Canciones.push_back("Mrs. Robinson - Simon & Garfunkel");
Canciones.push_back("Go Your Own Way - Fleetwood Mac");
Canciones.push_back("Wish You Were Here – Incubus");
Canciones.push_back("I'm Yours - Jason Mraz");
Canciones.push_back("Lose Yourself – Eminem");
Canciones.push_back("Space Oddity - David Bowie");
Canciones.push_back("All Along the Watchtower - Jimi Hendrix");
Canciones.push_back("Hallelujah - Leonard Cohen");
Canciones.push_back("Everybody Wants to Rule the World - Tears for Fears");
Canciones.push_back("Rolling in the Deep – Adele");
Canciones.push_back("Sweet Home Alabama - Lynyrd Skynyrd");
Canciones.push_back("Smooth - Santana ft. Rob Thomas");
Canciones.push_back("Bad Moon Rising - Creedence Clearwater Revival");
Canciones.push_back("I Still Haven't Found What I'm Looking For - U2");
Canciones.push_back("I Don't Want to Miss a Thing – Aerosmith");
Canciones.push_back("Crazy Little Thing Called Love – Queen");
Canciones.push_back("Black - Pearl Jam");
Canciones.push_back("Sultans of Swing - Dire Straits");
Canciones.push_back("Blowin' in the Wind - Bob Dylan");
Canciones.push_back("Dust in the Wind – Kansas");
Canciones.push_back("Thunder Road – Bruce Springsteen");

menu();


insertlist();
insertlist();
insertlist();
 
cout << "la lsita enlazada es" << endl;
mostrarlista();

return 0;

}