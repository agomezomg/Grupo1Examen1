#include <string>
#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon() {
}

Pokemon::Pokemon(string nombre, int nivel, string naturaleza, string tipo1, string tipo2, int hp, float ataque, float defensa, float ataqueEspecial, float defensaEspecial, float rapidez, bool legendario) {
	this -> nombre = nombre;
	this -> nivel = nivel;
	this -> naturaleza = naturaleza;
	this -> tipo1;
	this -> tipo2;
	this -> hp = hp;
	this -> ataque = ataque;
	this -> defensa = defensa;
	this -> ataqueEspecial = ataqueEspecial;
	this -> defensaEspecial = defensaEspecial;
	this -> rapidez = rapidez;
	this -> legendario = legendario;
}

Pokemon::~Pokemon() {

}

string Pokemon::getNombre() {
	return nombre;
}

void Pokemon::setNombre(string nombre) {
	this -> nombre = nombre;
}

int Pokemon::getNivel() {
	return nivel;
}

void Pokemon::setNivel(int nivel) {
	this -> nivel = nivel;
}

string Pokemon::getNaturaleza() {
	return naturaleza;
}

void Pokemon::setNaturaleza(string naturaleza) {
	this -> naturaleza = naturaleza;
}

string Pokemon::getTipo1() {
	return tipo1;
}

void Pokemon::setTipo2(string tipo2) {
	this -> tipo2 = tipo2;
}

int Pokemon::getHP() {
	return hp;
}

void Pokemon::setHP(int hp) {
	this -> hp = hp;
}

float Pokemon::getAtaque() {
	return ataque;
}

void Pokemon::setAtaque(float ataque) {
	this -> ataque = ataque;
}

float Pokemon::getDefensa() {
	return defensa;
}

void Pokemon::setDefensa(float defensa) {
	this -> defensa = defensa;
}

float Pokemon::getDefensaEspecial() {
	return defensaEspecial;
}

void Pokemon::setDefensaEspecial(float defensaEspecial) {
	this -> defensaEspecial = defensaEspecial;
}

float Pokemon::getRapidez() {
	return rapidez;
}

void Pokemon::setRapidez(float rapidez) {
	this -> rapidez = rapidez;
}

bool Pokemon::getLegendario() {
	return legendario;
}

void Pokemon::setLegendario(bool legendario) {
	this -> legendario = legendario;
}