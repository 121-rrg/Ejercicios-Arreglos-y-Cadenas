/*
Implemente una función que reciba un
arreglo de cadenas y su tamaño y ordene
lexicográficamente dicho arreglo.
Tamaño del arreglo 1000000.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i,j,comparar,tam;
    char aux[100];                                      //cadena auxiliar, para almacernar los datos
    char cadena[][100]={"cg","1aorde","1bvion","0ias"}; //declaramos nuestro arreglo de cadenas
    //cadena[num_espacios][num_caracteres]
    tam=sizeof(cadena)/sizeof(cadena[0]);               //hallamos el tamaño de nuestra cadena =400/4 = 100
    for(i=0;i<tam;i++){                                 //hacemos un doble recorrido de la cadena
        for(j=0;j<tam;j++){
            comparar= strcmp(cadena[j],cadena[j+1]);    // strcmp :Comparacion binaria de  caracteres de dos cadenas
            if(comparar>0){                     
                strcpy(aux,cadena[j]);                  // strcpy : copia la cadena señala a otra seleccionada
                strcpy(cadena[j],cadena[j+1]);
                strcpy(cadena[j+1],aux);
            }
        }
    }
    for(i=0;i<tam;i++)                                  //imprimimos valores en pantalla
        cout<<cadena[i]<<" ";

    return 0;
}