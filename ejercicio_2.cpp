/*
Implementar una función que invierta los elementos de un 
arreglo de enteros (Iterativa y recursiva). Tamaño del
arreglo 1000000.

*/

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void invertir_iterativo(int array[], int cant);             //prototipos de la funcion
void  invertir_recursivo(int array[], int inicio, int fin);

int main(){
    int tam=1000000;
    int *a = new int[tam],aux;      //creamos una variable con reserva dinámica de memoria

    srand((unsigned)time(0));       //semilla para generar numeros aleatorios
    for(int i=0;i<tam;i++)
        a[i]=(rand()%10)+1;         //almacenamos los numeros aleatorios en nuestro arreglo
        
    for(int i=0;i<tam;i++)
      cout<<a[i]<<" ";

    cout<<endl;
    cout<<"Inverso del arreglo ITERATIVO"<<endl;
    invertir_iterativo(a,tam);
    cout<<endl;
    cout<<"Inverso del arreglo RECURSIVO"<<endl;
    invertir_recursivo(a,0,tam-1);
    for(int i=0;i<tam;i++)
       cout<<a[i]<<" ";
    delete[] a;
}

void invertir_iterativo(int array[], int cant){      //implementacion de la funcion
    int aux;
    for(int i=0;i<cant/2;i++){                       //intercambaimos los valores desde la mitad
        aux = array[i];
        array[i]= array[cant-1-i];
        array[cant-1-i]=aux;
    }
    for(int i=0;i<cant;i++)
       cout<<array[i]<<" ";

}

void  invertir_recursivo(int array[], int inicio, int fin){  //implementacion de la funcion
    if(inicio<fin ){                                         //condicion si el la primera posicion es menor que la ultima
        int aux=array[inicio];
        array[inicio]=array[fin];                            //se efectua el cambio
        array[fin]=aux;
        invertir_recursivo(array,inicio+1,fin-1);            //se llama recursivamente, incrementando el inicio y disminuyendo el fin
    }
    
}