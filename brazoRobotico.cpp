#include "brazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool agarre){
	this->x = x; 
	this->y = y; 
	this->z = z;
	this->agarre = agarre;
}

double BrazoRobotico::getx(){
	return x;
}

double BrazoRobotico::gety(){
	return y;
}

double BrazoRobotico::getz(){
	return z;
}

void BrazoRobotico::coger(){
	if(!agarre) 
		agarre = true;
}

void BrazoRobotico::soltar(){
	if (agarre) 
		agarre = false;
}

void BrazoRobotico::mover(double _x, double _y, double _z){
	x = _x;
	y = _y;
	z = _z;
}
