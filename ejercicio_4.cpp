/*
Implemente una función que reciba una
cadena y retorne su tamaño. (Iterativa y recursiva)

*/

#include <iostream>
using namespace std;
void size_iterativo(char array[]);          //prototipos de funcion
int size_recursiva(char array[],int pos);

int result2=0;
int main(){
    
    char cad1[100];         
    int pos=0;
    cout<<"INGRESE SU FRASE "<<endl;
    cin.getline(cad1,100);              //ingresamos nuestra cadena 
    cout<<"FORMA ITERATIVA"<<endl;
    size_iterativo(cad1);               //llamamos a nuestrafuncion
    cout<<"FORMA RECURSIVA"<<endl;
    cout<<"La palabra \""<<cad1<<"\" tiene "<<size_recursiva(cad1,pos)<<" caracteres"<<endl;
    return 0;
}

void size_iterativo(char array[]){   //implementacion de funcion
    
    for (int i=0; i<100 && array[i] != '\0';i++) // se puede poner tanto != como > porque '\0' tiene valor cero o -1
        result2=i+1;                             //añadimos un 1 por la posicion 0 que no sumara
    cout<<"La palabra \""<<array<<"\" tiene "<<result2<<" caracteres"<<endl;
}

int size_recursiva(char array[], int pos){  //implementacion de funcion

    int result2=0;
    if(array[pos]=='\0')        //caso base, si nuestra posicion es igual al fin del caracter de cadena
        return result2;         //retornara el tamaño que es cero
    else                        //caso contrario
        return (result2+1)+size_recursiva(array,pos+1);     //llamada recursiva y mi posicion ira aumentando y sumandose
}                                                           //añadiendo un uno por la posicion 0