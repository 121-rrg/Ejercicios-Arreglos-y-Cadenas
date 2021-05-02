/*
Implementar una función que ordene los elementos de un 
arreglo: ascendente. Tamaño del arreglo 1000000.
*/


#include <iostream>
#include <ctime>
using namespace std;

void ordenar(int array[],int tam);  //prototipo de la funcion
int main(){

    int tam=1000000;
    int *a =new int[tam] ,aux;      //creamos una variable con reserva dinámica de memoria

    srand((unsigned)time(0));        //semilla para generar numeros aleatorios
    for(int i=0;i<tam;i++)
        a[i]=(rand()%10)+1;         //almacenamos los numeros aleatorios en nuestro arreglo
        
    for(int i=0;i<tam;i++)  
      cout<<a[i]<<" ";

    cout<<endl;
    ordenar(a,tam);

    for(int i=0; i<tam;i++)               //imprimimos los elementos en pantalla
      cout<<a[i]<< " ";

    delete[] a;
    return 0;
}

void ordenar(int array[],int tam){      //implementacion de la funcion
    if(tam>0){                          //condicion si mi tamaño es mayor que 0
        for (int i=0;i<tam-1;i++){      // Realizamos un bucle recorriendo cada valor
            if(array[i]>array[i+1]){    //condicion su el numero actual es mayor que el siguiente
                int aux=array[i];
                array[i]=array[i+1];    //si la condicion se cumple se hace el intercambio 
                array[i+1]=aux;         
            }
        }
        ordenar(array,tam-1);           //se llama recursivamente a la funcion, hasta que el tamaño llegue a 0
    }
}