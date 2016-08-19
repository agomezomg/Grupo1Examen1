#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int opcion;
	string nombre;
	std::vector<string> v;
	do{
		cout<<"Bienvenido a Pokemon Go ¿Qué deseas hacer?"<<endl;
		cout<<"1. Ingresar un nuevo Pokemon"<<endl;
		cout<<"2. Entrenar un Pokemon"<<endl;
		cout<<"3. Liberar un Pokemon"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"5. Listar"<<endl;
		cin>>opcion;

		switch (opcion){
			case 1:
				cout<<"Ingresa el nombre del Pokemon nuevo: ";
				cin>>nombre;
				v.push_back(nombre);
				cout<<endl;
			break;

			case 2:
				cout<<"----------Entrenar---------";
				cout<<"1. Modificar nombre"<<endl;
				cout<<"2. Modificar Nivel"<<endl;
				cout<<"3. Regresar"<<endl;
				cin>>opcion;

			break;

			case 3:

			break;
			case 5:
				for(int i = 0; i < 5; i++){
					cout<<v[i]<<endl;
				}
			break;
		}
		
		}while(opcion != 4);


}