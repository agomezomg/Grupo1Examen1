#include <iostream>
#include <vector>
using namespace std;
#include <string>
string TiposPokemon();
string Naturaleza();

int main(int argc, char const *argv[])
{
	vector<string> Lista;
	Lista.push_back(TiposPokemon());
	Lista.push_back(Naturaleza());
	for (int i = 0; i < 2; ++i)
	{
		cout<<Lista.at(i);
	}

}

string TiposPokemon(){
	int Opcion=1;
	string Tipo="";
	cout<<"Bug:1\nDragon:2\nIce:3\nFitgthing:4\nFire:5\nFlying:6\nGrass:7\nGhost:8\nGround:9\nElectric:10\nNormal:11\nPoison:12\nPhyshic:13\nRock:14\nWater:15\nDark:16\nSteel:17\nFairy:18\nIngrese su opcion:";
	cin>>Tipo;
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

string Naturaleza(){
	int Opcion=1;
	string Naturaleza="";
	cout<<"Hardy:1\nLonely:2\nBrave:3\nAdamant:4\nNaughty:5\nBold:6\nDocile:7\nRelaxed:8\nImpish:9\nLax:10\nHasty:11\nSerious:12\nJolly:13\nNaive:14\nModest:15\nMild:16\nQuiet:17\nBashful:18\nRash:19\nCalm:20\nGentle:21\nSassy:22\nCareful:23\nQuirky:24\nIngrese su opcion:";
	cin>>Naturaleza;
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
