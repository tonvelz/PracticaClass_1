#include <iostream>

using namespace std;

int main()
{

    char palabra[] = "reconocer";
    char *matriz;
    int tam = sizeof(palabra)-2,x = tam/2;
    bool estado;
    matriz = new char[tam];

    //cout<<"ingresa la palabra"<<endl;

    //cin>> palabra;

    for(int i=0; i<= tam; i++){
        matriz[i]=palabra[i];
    }

    for(int i=0; i< x; i++){
        if(matriz[i] != matriz[tam-i]){
            estado = 0;
        }else{
            estado = 1;
        }
    }
    if(estado == 1){
        cout<<"Si es una palabra palindromo"<<endl;
    }


    return 0;
}
