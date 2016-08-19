#pragma once
#include <string>
using namespace std;

class Pokemon {
	private:
		string nombre;
		int nivel;
		string naturaleza;
		string tipo1;
		string tipo2;
		int hp;
		float ataque;
		float defensa;
		float ataqueEspecial;
		float defensaEspecial;
		float rapidez;
		bool legendario;

	public:
		Pokemon();
		Pokemon(string, int, string, string, string, int, float, float, float, float, float, bool);
		~Pokemon();
		string getNombre();
		void setNombre(string);
		int getNivel();
		void setNivel(int);
		string getNaturaleza();
		void setNaturaleza(string);
		string getTipo1();
		void setTipo1(string);
		string getTipo2();
		void setTipo2(string);
		int getHP();
		void setHP(int);
		float getAtaque();
		void setAtaque(float);
		float getDefensa();
		void setDefensa(float);
		float getDefensaEspecial();
		void setDefensaEspecial(float);
		float getRapidez();
		void setRapidez(float);
		bool getLegendario();
		void setLegendario(bool);
};