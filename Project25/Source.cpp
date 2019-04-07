#include <conio.h>
#include <iostream>
#include "Ccaritafeliz.h"
using namespace std;
using namespace System;
int main()
{
	CaritaFeliz*objcarita;
	objcarita = new CaritaFeliz();
	char tecla;
	objcarita->set_general(10, 8, 2, 1);
	objcarita->mostrar('F');
	//F es un valor cualquiera ya que no quiero evaluar la variable tecla 
	// y solo usar los valores preterminados por la funcion set_general();
	Console::CursorVisible = false;
	while (true)
	{
		
		
		if (_kbhit())
		{
			tecla = getch();
			objcarita->mostrar(tecla);
		}

	}
	_getch();
	return 0;
}