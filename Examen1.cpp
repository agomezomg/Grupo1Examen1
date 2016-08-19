#include "Pokemon.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>

string TiposPokemon();
string ElegirNaturaleza();

/*int main(int argc, char const *argv[])
{
	vector<string> Lista;
	Lista.push_back(TiposPokemon());
	Lista.push_back(Naturaleza());
	for (int i = 0; i < 2; ++i)
	{
		cout<<Lista.at(i);
	}
}*/

int main(int argc, char const *argv[]) {
	int opcion;

	vector<Pokemon*> Lista;
	Lista.push_back(new Pokemon("Pikachu", 5, "brave", "tipo1", "Electrico", 2, 4, 5, 1, 2, 3, true));
	Lista.push_back(new Pokemon("Bulbasaur", 3, "Bold", "veneno", "Plant", 2, 4, 5, 1, 2, 3, true));
	Lista.push_back(new Pokemon("Horsea", 1, "whatever", "hml", "wekhjd", 5, 7,2, 3, 1, 3, false));
	Lista.push_back(new Pokemon("Goldeen", 1, "kjgh", "hml", "wekhjd", 2, 4, 5, 1, 2, 3, false));
	Lista.push_back(new Pokemon("Staryu", 1, "kjgh", "hml", "wekhjd", 2, 4, 5, 1, 2, 3, true));


	do{
		cout<<"Bienvenido a Pokemon Go ¿Qué deseas hacer?"<<endl;
		cout<<"1. Ingresar un nuevo Pokemon"<<endl;
		cout<<"2. Entrenar un Pokemon"<<endl;
		cout<<"3. Liberar un Pokemon"<<endl;
		cout<<"4. Buscar"<<endl;
		cout<<"5. Sort"<<endl;
		cout<<"6. Salir"<<endl;
		cin>>opcion;

		if (opcion == 1) {
				string Pnombre;
				int Pnivel;
				string Pnaturaleza;
				string Ptipo1;
				string Ptipo2;
				int Php;
				float Pataque;
				float Pdefensa;
				float PataqueEspecial;
				float PdefensaEspecial;
				float Prapidez;
				bool Plegendario = false;

				cout << "Ingresa el nombre del Pokemon nuevo: ";
				cin >> Pnombre;
				cout<< "Ingresa el nivel: ";
				cin >> Pnivel;
				cout << "Ingresa la naturaleza: ";
				Pnaturaleza = ElegirNaturaleza();
				cout << "Ingresa el tipo 1: ";
				Ptipo1 = TiposPokemon();
				cout << "Ingresa el tipo 2: ";
				Ptipo2 = TiposPokemon();
				cout << "Ingresa  el HP: ";
				cin >> Php;
				cout << "Ingresa el ataque: ";
				cin >> Pataque;
				cout << "Ingresa la defensa: ";
				cin >> Pdefensa;
				cout << "Ingresa el ataque Especial: ";
				cin >> PataqueEspecial;
				cout << "Ingresa la defensa Especial: ";
				cin >> PdefensaEspecial;
				cout << "Ingresa la rapidez: ";
				cin >> Prapidez;
				cout << "Es legendario? [s/n] \n";
				char confirm;
				cin >> confirm;

				if (confirm == 's' || confirm == 'S')
				{
					Plegendario = true;
				}

				float check;
				check = Php + Pataque + Pdefensa + PataqueEspecial + PdefensaEspecial + Prapidez;
				if (check > 780)
				{
					cout << "No se creo el nuevo Pokemon \n";
				} else {
					Lista.push_back(new Pokemon(Pnombre, Pnivel, Pnaturaleza, Ptipo1, Ptipo2, Php, Pataque, Pdefensa, PataqueEspecial, PdefensaEspecial, Prapidez, Plegendario));
					cout << "Se creo un nuevo Pokemon \n";
				}
				
<<<<<<< HEAD
		}else if (opcion == 2) {
				cout<<"----------Entrenar---------";
				cout<<"1. Modificar nombre"<<endl;
				cout<<"2. Modificar Nivel"<<endl;
				cout<<"3. Regresar"<<endl;
				cin>>opcion;
		} else if (opcion == 3)	{
				/* code */
		} else if (opcion == 4) {
				/*
					if (OpcionBusqueda==2){
						cout<<"Ingrese el numero mayor a buscar:";
						int Mayor=0;
						cin>>Mayor;
						cout<<"Ingrese el numero menor a buscar:";
						int Menor=0;
						cin>>Menor;
						for (int i = 0; i < Lista.size(); ++i)
						{
							if(Lista.at(i)->getDefensa()>=Menor&&Lista.at(i)->getDefensa()<Mayor){
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}	
						}
					}
					if (OpcionBusqueda==3){
						cout<<"Ingrese el numero mayor a buscar:";
						int Mayor=0;
						cin>>Mayor;
						cout<<"Ingrese el numero menor a buscar:";
						int Menor=0;
						cin>>Menor;
						for (int i = 0; i < Lista.size(); ++i)
						{
							if(Lista.at(i)->getRapidez()>=Menor&&Lista.at(i)->getRapidez()<Mayor){
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}	
						}
					}
					if (OpcionBusqueda==4){
						cout<<"Ingrese el numero mayor a buscar:";
						int Mayor=0;
						cin>>Mayor;
						cout<<"Ingrese el numero menor a buscar:";
						int Menor=0;
						cin>>Menor;
						for (int i = 0; i < Lista.size(); ++i)
						{
							if(Lista.at(i)->getHP()>=Menor&&Lista.at(i)->getHP()<Mayor){
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}	
						}
					}
					if (OpcionBusqueda==5){
						cout<<"Ingrese el numero mayor a buscar:";
						int Mayor=0;
						cin>>Mayor;
						cout<<"Ingrese el numero menor a buscar:";
						int Menor=0;
						cin>>Menor;
						for (int i = 0; i < Lista.size(); ++i)
						{
							if(Lista.at(i)->getAtaque()>=Menor&&Lista.at(i)->getAtaque()<Mayor){
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}	
						}
					}
					if (OpcionBusqueda==6){
						cout<<"Ingrese el numero mayor a buscar:";
						int Mayor=0;
						cin>>Mayor;
						cout<<"Ingrese el numero menor a buscar:";
						int Menor=0;
						cin>>Menor;
						for (int i = 0; i < Lista.size(); ++i)
						{
							if(Lista.at(i)->getDefensaEspecial()>=Menor&&Lista.at(i)->getDefensaEspecial()<Mayor){
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}	
						}
					}
				}	
				
				}else if(OpcionBusqueda==2){
						string TipoBusqueda1=TiposPokemon();
						string TipoBusqueda2=TiposPokemon();
						for (int i = 0; i < Lista.size(); ++i)
						{
							if ((Lista.at(i)->getTipo1()==TipoBusqueda1&&Lista.at(i)->getTipo1()==TipoBusqueda2)||(Lista.at(i)->getTipo1()==TipoBusqueda2&&Lista.at(i)->getTipo1()==TipoBusqueda1))
							{
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}
						}
				}else if (OpcionBusqueda==3)
				{
					string BusqeudaNombre="";
					for (int i = 0; i < Lista.size(); ++i)
						{
							if (Lista.at(i)->getNombre()==BusqeudaNombre)
							{
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}
						}	
				}else if (OpcionBusqueda==4)
				{
					string BusquedaNaturaleza=ElegirNaturaleza();
					for(int i = 0; i < Lista.size(); ++i)
						{
							if ((Lista.at(i)->getNaturaleza()==BusquedaNaturaleza))
							{
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}
						}
				}else if (OpcionBusqueda==5)
				{
						cout<<"Ingrese el nivel mayor a buscar:";
						int Mayor=0;
						cin>>Mayor;
						cout<<"Ingrese el nivel menor a buscar:";
						int Menor=0;
						cin>>Menor;
						for (int i = 0; i < Lista.size(); ++i)
						{
							if(Lista.at(i)->getNivel()>=Menor&&Lista.at(i)->getNivel()<Mayor){
								cout<<"Nombre:"<<Lista.at(i)->getNombre()<"\n";
								cout<<"Nivel:"<<Lista.at(i)->getNivel()<"\n";
								cout<<"Naturaleza:"<<Lista.at(i)->getNaturaleza()<"\n";
								cout<<"Tipo1:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"Tipo2:"<<Lista.at(i)->getTipo1()<"\n";
								cout<<"HP:"<<Lista.at(i)->getHP()<"\n";
								cout<<"Ataque:"<<Lista.at(i)->getAtaque()<"\n";
								cout<<"Defensa:"<<Lista.at(i)->getDefensa()<"\n";
								//cout<<"AtaqueEspecial:"<<Lista.at(i)->getAtaqueEspecial()<"\n";
								cout<<"DefensaEspecial"<<Lista.at(i)->getDefensaEspecial()<"\n";
								cout<<"Rapidez:"<<Lista.at(i)->getRapidez()<"\n";
								cout<<"\n";	
							}	
						}
					}
				

				*/
		} else if (opcion == 5)	{
			for (int i = 0; i < Lista.size(); ++i)
			{
				/* code */
=======
		}
		else if (opcion == 2) {
			int opcion2;
			string nombreNuevo;
			int nivelNuevo;
			cout<<"----------Entrenar---------"<<endl;
			cout<<"¿Qué Pokemon quieres entrenar?"<<endl;
			for(int i = 0; i < Lista.size(); i++){
				cout<<i+1<<". "<<Lista.at(i)->getNombre()<<endl;
>>>>>>> 50a560cb373d6f3d79c2ab77a107e5443b43285f
			}
			cin>>opcion2;
			do{
				for(int i = 0; i < Lista.size(); i++){
					if(opcion2-1 == i){
						cout<<"----------Entrenar a "<<Lista.at(i)->getNombre()<<" con nivel "<<Lista.at(i)->getNivel()<<"---------"<<endl;
						cout<<"1. Modificar nombre"<<endl;
						cout<<"2. Modificar Nivel"<<endl;
						cout<<"3. Salir"<<endl;
						cin>>opcion2;
						if (opcion2 == 1)
						{
							cout<<"Ingresa el nuevo nombre: ";
							cin>>nombreNuevo;
							Lista.at(i)->setNombre(nombreNuevo);
							cout<<"Nombre modificado correctamente"<<endl;
						}
						if (opcion2 == 2)
						{
							cout<<"Ingresa el nuevo nivel: ";
							cin>>nivelNuevo;
							Lista.at(i)->setNivel(nivelNuevo);
							cout<<"Nivel modificado correctamente"<<endl;
						}
					}

				}

			}while(opcion2 != 3);
		}

		else if (opcion == 3){
			int opcion2;
			string nombreNuevo;
			int nivelNuevo;
			cout<<"----------Eliminar---------"<<endl;
			cout<<"¿Qué Pokemon quieres liberar?"<<endl;
			for(int i = 0; i < Lista.size(); i++){
				cout<<i+1<<". "<<Lista.at(i)->getNombre()<<endl;
			}
			cin>>opcion2;
			for(int i = 0; i < Lista.size(); i++){
				if(opcion2-1 == i && !Lista.at(i)->getLegendario()){
					Lista.erase(Lista.begin()+i);
					cout<<Lista.at(i)->getNombre()<<" liberado correcatmente"<<endl;
				}
				else if (opcion2-1 == i && Lista.at(i)->getLegendario())
				{
					cout<<"El Pokemon no se puede eliminar porque es legendario"<<endl;
				}
			}
			cout<<"Lista de tus Pokemon atcualizada"<<endl;
			for(int i = 0; i < Lista.size(); i++){
				cout<<i+1<<". "<<Lista.at(i)->getNombre()<<endl;
			}
				
		} 
		else if (opcion == 4) {
				/* code */

		} 
		else if (opcion == 5)	{
			string name1;
			string name2;
			int pick;
			cout << "1. Ordenar por nombre \n 2. Ordenar por nivel \n";
			cin >> pick;

			if (pick == 1) {
				string first;
				string second;
				Pokemon* one = new Pokemon();
				Pokemon* two = new Pokemon();

				for (int i = 0; i < Lista.size(); ++i) {
					for (int j = i + 1; j < Lista.size(); ++j) {
						one = Lista.at(i);
						two = Lista.at(j);
						first = one -> getNombre();
						second = two -> getNombre();
						if (first[0] > second[0]) {
							Lista.at(i) = two;
							Lista.at(j) = one;
						}
					}
				}

				for (int i = 0; i < Lista.size(); ++i)
				{
					cout << Lista.at(i) -> getNombre() << endl;
				}
			} else if (pick == 2) {
				int first;
				int second;
				Pokemon* one = new Pokemon();
				Pokemon* two = new Pokemon();
				for (int i = 0; i < Lista.size(); ++i)
				{
					for (int j = i + 1; j < Lista.size(); ++j)
					{
						one = Lista.at(i);
						two = Lista.at(j);
						first = one -> getNivel();
						second = two -> getNivel();
						if (first > second) {
							Lista.at(i) = two;
							Lista.at(j) = one;
						}	
					}
				}

			} else {
				cout << "Opcion no valida. \n";
			}


				for (int i = 0; i < Lista.size(); ++i)
				{
					cout << (Lista.at(i) -> getNombre()) << ", lvl: " << (Lista.at(i) -> getNivel()) << endl;
				}
			} else {
				cout << "Opcion no valida. \n";
			}
		
	} while(opcion != 6);


	for (int i = 0; i< Lista.size();i++)
   	{
    	delete (Lista[i]);
  	} 
   Lista.clear();
}

string TiposPokemon(){
	int Opcion=1;
	string Tipo="";
	cout<<"Bug:1\nDragon:2\nIce:3\nFitgthing:4\nFire:5\nFlying:6\nGrass:7\nGhost:8\nGround:9\nElectric:10\nNormal:11\nPoison:12\nPhyshic:13\nRock:14\nWater:15\nDark:16\nSteel:17\nFairy:18\nIngrese su opcion:";
	cin>>Opcion;
	if(Opcion==1){
		Tipo="Bug";
	}
	if(Opcion==2){
		Tipo="Dragon";
	}
	if(Opcion==3){
		Tipo="Ice";
	}
	if(Opcion==4){
		Tipo="Fitgthing";
	}
	if(Opcion==5){
		Tipo="Fire";
	}
	if(Opcion==6){
		Tipo="Flying";
	}
	if(Opcion==7){
		Tipo="Grass";
	}
	if(Opcion==8){
		Tipo="Ghost";
	}
	if(Opcion==9){
		Tipo="Ground";
	}
	if(Opcion==10){
		Tipo="Electric";
	}
	if(Opcion==11){
		Tipo="Normal";
	}
	if(Opcion==12){
		Tipo="Poisom";
	}
	if(Opcion==13){
		Tipo="Physhic";
	}
	if(Opcion==14){
		Tipo="Rock";
	}
	if(Opcion==15){
		Tipo="Water";
	}
	if(Opcion==16){
		Tipo="Dark";
	}
	if(Opcion==17){
		Tipo="Steel";
	}
	if(Opcion==18){
		Tipo="Fairy";
	}
	return Tipo;
}

string ElegirNaturaleza(){
	int Opcion;
	string Naturaleza;
	cout<<"Hardy:1\nLonely:2\nBrave:3\nAdamant:4\nNaughty:5\nBold:6\nDocile:7\nRelaxed:8\nImpish:9\nLax:10\nHasty:11\nSerious:12\nJolly:13\nNaive:14\nModest:15\nMild:16\nQuiet:17\nBashful:18\nRash:19\nCalm:20\nGentle:21\nSassy:22\nCareful:23\nQuirky:24\nIngrese su opcion:";
	cin >> Opcion;
	if(Opcion==1){
		Naturaleza="Hardy";
	}
	if(Opcion==2){
		Naturaleza="Lonely";
	}
	if(Opcion==3){
		Naturaleza="Brave";
	}
	if(Opcion==4){
		Naturaleza="Adamant";
	}
	if(Opcion==5){
		Naturaleza="Naughty";
	}
	if(Opcion==6){
		Naturaleza="Bold";
	}
	if(Opcion==7){
		Naturaleza="Docile";
	}
	if(Opcion==8){
		Naturaleza="Impish";
	}
	if(Opcion==9){
		Naturaleza="Lax";
	}
	if(Opcion==10){
		Naturaleza="Timid";
	}
	if(Opcion==11){
		Naturaleza="Hasty";
	}
	if(Opcion==12){
		Naturaleza="Serious";
	}
	if(Opcion==13){
		Naturaleza="Jolly";
	}
	if(Opcion==14){
		Naturaleza="Naive";
	}
	if(Opcion==15){
		Naturaleza="Modest";
	}
	if(Opcion==16){
		Naturaleza="Mild";
	}
	if(Opcion==17){
		Naturaleza="Quiet";
	}
	if(Opcion==18){
		Naturaleza="Bashful";
	}
	if(Opcion==19){
		Naturaleza="Rash";
	}
	if(Opcion==20){
		Naturaleza="Calm";
	}
	if(Opcion==21){
		Naturaleza="Gentle";
	}
	if(Opcion==22){
		Naturaleza="Sassy";
	}
	if(Opcion==23){
		Naturaleza="Careful";
	}
	if(Opcion==24){
		Naturaleza="Quirky";
	}
	return Naturaleza;
}