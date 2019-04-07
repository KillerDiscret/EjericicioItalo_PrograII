#pragma once
#include <conio.h>
#include<iostream>
#include <Windows.h>
#include "CBoca.h"
#include "COjo.h"
using namespace std;
using namespace System;

class CaritaFeliz
{
private:
	ojo*obj1;
	ojo*obj2;
	boca*objboca;
public:

	CaritaFeliz();
	void mostrar(char tecla);
	void set_general(int x,int y,int color, int tipo);
	~CaritaFeliz();

};


CaritaFeliz::CaritaFeliz()
{
	obj1 = new ojo();
	obj2 = new ojo();
	objboca = new boca();

}
void CaritaFeliz::set_general(int x, int y, int color, int tipo)
{
	obj1->set_x(x);
	obj1->set_y(y);
	obj1->set_color(color);
	obj2->set_x(x+8);
	obj2->set_y(y);
	obj2->set_color(color);
	objboca->set_x(x);
	objboca->set_y(y + 10);
	objboca->set_tipo(1);

}
void CaritaFeliz::mostrar(char tecla)
{
	if (tecla=='r'|| tecla == 'R')
	{
		objboca->borrar();
		objboca->set_tipo(2);
	}
	if (tecla == 't'|| tecla == 'T')
	{
		objboca->borrar();
		objboca->set_tipo(3);
	}
	obj1->dibujar();
	obj2->dibujar();
	objboca->dibujar();
}
CaritaFeliz::~CaritaFeliz()
{

}