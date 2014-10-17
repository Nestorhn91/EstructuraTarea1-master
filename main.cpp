// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top();// la instancia top permite delvolver el elemento que esta arriba de la pila
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size(); // la instancia size permite devolver la cantidad dentro de la pila
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty()) // hacemos un ciclo para recorer y que la pila no este vacia
    {
    if(mi_pila.top()== str) // evaluamos si el valor del elemento supieror de la pila contiene el mismo valor string "str"
    {
    return true; // si el valor se encuentra retorna true
    }
    mi_pila.pop(); // ña instancia pop() va sacando el elemento que esta  dentro de la pila de arriba
    }
    return false; // retornamos false sino se encuentra
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor =0; // creamos una variable donde se va a guardar el valor mayor buscado
    while(!mi_pila.empty()) // hacemos un ciclo para determinar que la pila no este vacia
    {
    if(mi_pila.top()==0) // revisamos si el valor del elemento superior de la pila es igual a cero
    {
     mayor = mi_pila.top(); //determinamos que el numero mayor de la pila es cero hasta que se cumpla
    }
    else
   if(mi_pila.top()>mayor) // y si el valor del elemento de arriba  de la pila es mayor que el numero mayor hasta el momento
   {
    mayor= mi_pila.top(); // ese numero se combertira en el mayor ahora
   }
   mi_pila.pop(); // eliminamos el elemento superior de la pila
   }
   return mayor; // retornamos el valor mayor
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor = mi_pila.top(); // el valor minimo hasta el momento sera el top de la pila
    while(!mi_pila.empty()) // creamos un ciclo para determinar que la pila no este vacia
    {
    if(mi_pila.top()==0) // verificamos si el valor del elemento arriba  de la pila es igual a cero
    {
     menor = mi_pila.top(); // el menor tomar el valor del elemento sueperior de la pila (valor 0)
    }
    else
    if(mi_pila.top()<menor) // y si el elemento superior de la pila es menor que el numero menor
    {
     menor = mi_pila.top(); // el valor del elemento arriba  de la pila se toma como el menor
    }
    mi_pila.pop(); // eliminamos el elemento superior de la pila
    }
    return menor; // retornamos el valor menor

}

//devuelve el promedio de todos los elementos de "mi_pila"
float getPromedio(stack<float> mi_pila)
{
     int suma =0; // se creamos una variable para sumar los elementos
     int cantidad = mi_pila.size(); // size() verifica la cantidad de elementos dentro de la pila
     int promedio =0; //variable donde se guardara el promedio  de la pila
     while(!mi_pila.empty()) // hacemos un ciclo para determinar que la pila no este vacia
     {
     suma += mi_pila.top(); //sumamos cada uno de los elementos de la pila
     mi_pila.pop(); //eliminamos el elmento arriba de la pila
     }
     promedio = suma/cantidad; // hacemos una evaluacion del promedio de la (suma de los elementos / la cantidad)
     return promedio; //  y esto retorna el promedio

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
