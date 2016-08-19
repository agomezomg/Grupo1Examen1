#include <string>
#include <iostream>
#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon() {
}

Pokemon::Pokemon(string nombre, int nivel, string naturaleza, string tipo1, string tipo2, int hp, float ataque, float defensa, float ataqueEspecial, float defensaEspecial, float rapidez, bool legendario) {
	this -> nombre = nombre;
	this -> nivel = nivel;
	this -> naturaleza = naturaleza;
	if (tipo2 == tipo1)
	{
		this -> tipo1 = tipo1;
		this -> tipo2 = "";

		cout << "tipos repetidos, solo tipo 1 se asigno.";
	} else {
		this -> tipo1 = tipo1;
		this -> tipo2 = tipo2;
	}
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

void Pokemon::setTipo1(string tipo1) {
	if (this -> tipo2 == tipo1)
	{
		cout << "tipos repetidos, no hay cambio.";
	} else {
		this -> tipo1 = tipo1;
	}
}

void Pokemon::setTipo2(string tipo2) {
	if (tipo2 == this -> tipo1)
	{
		cout << "tipos repetidos, no hay cambio.";
	} else {
		this -> tipo2 = tipo2;
	}
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

float Pokemon::getAtaqueEspecial() {
	return ataqueEspecial;
}

void Pokemon::setAtaqueEspecial(float ataqueEspecial) {
	this -> ataqueEspecial = ataqueEspecial;
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

void Pokemon::toString() {
	cout << "Nombre: " << nombre << endl;
	cout << "Nivel: " << nivel << endl;
	cout << "Naturaleza: " << naturaleza << endl;
	cout << "Tipo 1: " << tipo1 << endl;
	cout << "Tipo 2 (si tiene): " << tipo2 << endl;
	cout << "HP: " << hp << endl;
	cout << "Ataque: " << ataque << endl;
	cout << "Defensa: " << defensa << endl;
	cout << "Ataque Especial: " << ataqueEspecial << endl;
	cout << "Defensa Especial: " << defensaEspecial << endl;
	cout << "Rapidez: " << rapidez << endl;
	if (legendario == true)
	{
		cout << "legendario: SI \n";
	} else {
		cout << "legendario: NO \n";
	}
}