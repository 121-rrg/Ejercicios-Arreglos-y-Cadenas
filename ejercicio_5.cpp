
/*
Implemente una función que reciba dos cadenas a y b; dicha
 función debe concatenar la cadena a a la cadena b.
(asuma que la cadena b tiene el tamaño suficiente
 para contener los elementos de a).

*/


#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char array1[11]="Hello";            //declaramos nuestros arreglos
    char array2[20]="World";
    char array3[100];
    
    int i=0,j=0,tam1,tam2;              //obtenemos el tamaño de nuestros arrerglos 
    tam1=sizeof(array1);
    tam2=sizeof(array2);
    
    if(tam1<tam2){                      //condicion, si el tamaño de la cadena 1 es menor cadena 2
        while(array1[i] != '\0'){       //mientras que que sea diferente al valor final de la cadena
            array3[i]=array1[i];        //asignamos esa cadaena a una nueva cadena 3
            i++;                        //incrementamos el contador
        }
        array3[i] = ' ';                //hacemos un espacio entre las dos oraciones
        i++;                            //incrementamos al la siguiente posicion y repetimos lo mismo
        while(array2[j] != '\0'){
            array3[i+j]=array2[j];
            j++;
        }
        cout<<array3;                   //imprimimos el valor en pantalla de las cadenas concatenadas
    }
    else
        cout<<"NO SE PUEDE CONCATENAR LAS CADENAS"<<endl;       //en caso de que no cumpla la condicion
    
    return 0;
}
