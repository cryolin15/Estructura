#include<iostream>
#include "estructura.h"
using namespace std;

int main(int argc, char const*argv[]){

int cant;
cout<<"Dime cuantas categorias deceas agregar: ";
cin>> cant;

for (int i = 0; i < cant ;i++){
cout<<"Ingresa el id: ";
cin>>categorias[i].idCat;
cout<<"Ingrese el nombre: ";
cin>>categorias[i].nombre;
}
cout<<"\n\n\n";
cout<<"Mostrar categorias\n";
cout<<"==============================\n";
for (int i=0; i <cant; i++)
{
    cout<<"ID:"<<categorias[i].idCat<<endl;
    cout<<"Nombre: "<<categorias[i].nombre<<endl;
    cout<<"===========================\n";
}

 return 0;
}