#pragma once
#include <conio.h>
#include<iostream>
#include <Windows.h>
using namespace std;
using namespace System;
class ojo
{
private:
	int x;
	int y;
	int color;
	//si color es 1, es verde
	//si color es 2, es rojo
	//si color es 3, es blanco

public:
	ojo();
	void dibujar();
	void borrar();
	void set_x(int valor);
	void set_y(int valor);
	void set_color(int valor);
	int get_x();
	int get_y();
	int get_color();
	~ojo();
};
ojo::ojo()
{

}

void ojo::dibujar()
{
	Console::SetCursorPosition(x, y);
	if (color==1)
	{
		Console::ForegroundColor = ConsoleColor::Green;
	}
	if (color == 2)
	{
		Console::ForegroundColor = ConsoleColor::Red;
	}
	if (color == 3)
	{
		Console::ForegroundColor = ConsoleColor::White;
	}
	cout << char(219);

}
void ojo::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}
void ojo::set_x(int valor)
{
	x = valor;
}
void ojo::set_y(int valor)
{
	y = valor;
}
void ojo::set_color(int valor)
{
	color = valor;
}
int ojo::get_x()
{
	return x;
}
int ojo::get_y()
{
	return y;
}
int ojo::get_color()
{
	return color;
}
ojo::~ojo()
{

}
