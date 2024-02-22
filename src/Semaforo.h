#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


//Defines

#define _verde 10 //Tiempo que esta en verde el semaforo en segundos
#define _rojo 10 //Tiempo que esta en rojo el semaforo en segundos

class Semaforo {
	bool estado; // Rojo = 0 Verde = 1;
	bool Enable; 
public:
	Semaforo();

};
