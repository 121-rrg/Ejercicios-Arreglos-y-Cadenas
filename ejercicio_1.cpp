/*
Implementar una función reciba un arreglo de enteros y su tamaño 
y retorne la suma de los elementos de un arreglo.
Tamaño del arreglo 1000000. (Iterativa y recursiva).

*/


#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void suma_iterativa(long long array[], long long tamanio);              //prototipos de funcion
long long int suma_recursiva(long long array[], long long tamanio);


int main(){
    long long size=10000;
    long long *a= new long long[size];  //creamos una variable con reserva dinámica de memoria
    srand((unsigned)time(0));   //semilla para generar numeros aleatorios

    for(long long  i=0;i<size;i++)
        a[i]=(rand()%10)+1;     //almacenamos los numeros aleatorios en nuestro arreglo
    
    cout<<endl;
    cout<<"SUMA ITERATIVA "<<endl;
    suma_iterativa(a,size);
    cout<<endl;
    cout<<"SUMA RECURSIVA "<<endl;
    cout<<suma_recursiva(a,size);
    delete[] a;
    return 0;
}
void suma_iterativa(long long array[], long long n){                //implementacion de funcion

    long long suma=0;
    for(int i=0;i<=n;i++)            //sumara cada delemento de mi cadena
        suma+=array[i];             //se acumula todos los valores sumados en la variable suma
    cout<<suma;                     //retorna la suma acumulada
}

long long int suma_recursiva(long long array[], long long n){   //implementacion de funcion
    if(n == 0)                                      //caso base cuando mi tamaño es 0
        return array[0];                            //retorna el primer valor del arreglo
    else 
        return array[n]+suma_recursiva(array,n-1);  //suma recursivamente desde el ultimo elemento al primer
}
