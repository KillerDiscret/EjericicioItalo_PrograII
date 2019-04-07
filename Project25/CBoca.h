#pragma once
#include <conio.h>
#include<iostream>
#include <Windows.h>
using namespace std;
using namespace System;


class boca
{
private:
	int x;
	int y;
	int tipo;
	//si tipo es 1 muestra neutro
	//si tipo es 2 muestra feliz
	//si tipo es 3 muestra triste

public:
	boca();
	void dibujar();
	void borrar();
	void set_x(int valor);
	void set_y(int valor);
	void set_tipo(int valor);
	int get_x();
	int get_y();
	int get_tipo();
	~boca();
};
boca::boca()
{

}
void boca::dibujar()
{
	
	if (tipo==1)
	{
		Console::SetCursorPosition(x, y);
		cout << char(220);
		Console::SetCursorPosition(x+1, y);
		cout << char(220);
		Console::SetCursorPosition(x + 2, y);
		cout << char(220);
		Console::SetCursorPosition(x + 3, y);
		cout << char(220);
		Console::SetCursorPosition(x + 4, y);
		cout << char(220);
		Console::SetCursorPosition(x + 5, y);
		cout << char(220);
	}
	if (tipo==2)
	{
		Console::SetCursorPosition(x, y);
		cout << char(220);
		Console::SetCursorPosition(x+1, y+1);
		cout << char(220);
		Console::SetCursorPosition(x+2, y+2);
		cout << char(220);
		Console::SetCursorPosition(x+3, y+3);
		cout << char(220);
		Console::SetCursorPosition(x+4, y+3);
		cout << char(220);
		Console::SetCursorPosition(x+5, y+2);
		cout << char(220);
		Console::SetCursorPosition(x+6, y+1);
		cout << char(220);
		Console::SetCursorPosition(x+7, y);
		cout << char(220);
	}

	if (tipo==3)
	{
		Console::SetCursorPosition(x, y);
		cout << char(220);
		Console::SetCursorPosition(x+1, y-1);
		cout << char(220);
		Console::SetCursorPosition(x+2, y-2);
		cout << char(220);
		Console::SetCursorPosition(x+3, y-3);
		cout << char(220);
		Console::SetCursorPosition(x+4, y-3);
		cout << char(220);
		Console::SetCursorPosition(x+5, y-2);
		cout << char(220);
		Console::SetCursorPosition(x+6, y-1);
		cout << char(220);
		Console::SetCursorPosition(x+7, y);
		cout << char(220);
	}

}
void boca::borrar()
{
	if (tipo == 1)
	{
		Console::SetCursorPosition(x, y);
		cout << " ";
		Console::SetCursorPosition(x + 1, y);
		cout << " ";
		Console::SetCursorPosition(x + 2, y);
		cout << " ";
		Console::SetCursorPosition(x + 3, y);
		cout << " ";
		Console::SetCursorPosition(x + 4, y);
		cout << " ";
		Console::SetCursorPosition(x + 5, y);
		cout << " ";
	}
	if (tipo == 2)
	{
		Console::SetCursorPosition(x, y);
		cout << " ";
		Console::SetCursorPosition(x + 1, y + 1);
		cout << " ";
		Console::SetCursorPosition(x + 2, y + 2);
		cout << " ";
		Console::SetCursorPosition(x + 3, y + 3);
		cout << " ";
		Console::SetCursorPosition(x + 4, y + 3);
		cout << " ";
		Console::SetCursorPosition(x + 5, y + 2);
		cout << " ";
		Console::SetCursorPosition(x + 6, y + 1);
		cout << " ";
		Console::SetCursorPosition(x + 7, y);
		cout << " ";
	}

	if (tipo == 3)
	{
		Console::SetCursorPosition(x, y);
		cout << " ";
		Console::SetCursorPosition(x + 1, y - 1);
		cout << " ";
		Console::SetCursorPosition(x + 2, y - 2);
		cout << " ";
		Console::SetCursorPosition(x + 3, y - 3);
		cout << " ";
		Console::SetCursorPosition(x + 4, y - 3);
		cout << " ";
		Console::SetCursorPosition(x + 5, y - 2);
		cout << " ";
		Console::SetCursorPosition(x + 6, y - 1);
		cout << " ";
		Console::SetCursorPosition(x + 7, y);
		cout << " ";
	}
}
void boca::set_x(int valor)
{
	x = valor;
}
void boca::set_y(int valor)
{
	y = valor;
}
void boca::set_tipo(int valor)
{
	tipo = valor;
}
int boca::get_x()
{
	return x;
}
int boca::get_y()
{
	return y;
}
int boca::get_tipo()
{
	return tipo;
}
boca::~boca()
{

}