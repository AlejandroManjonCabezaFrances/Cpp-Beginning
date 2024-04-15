#include <iostream>
#include <stdlib.h>

class Punto
{
private:								// Encapsulamiento
	int	x;
	int	y;
public:
	Punto(); 							// Constructor
	void	setPunto(int, int);			// Método setter (modificar)
	int		getPuntoX();				// Método getter (Mostrar)
	int		getPuntoY();				// Método getter
};

Punto::Punto()  						// Método constructor
{

}

void Punto::setPunto(int _x, int _y) // establecer/dar valores a atributos. se podría hacer con el constructor
{
	x = _x;
	y = _y;
}

int	Punto::getPuntoX()
{
	return (x);
}

int	Punto::getPuntoY()
{
	return (y);
}

int main()
{
	Punto punto1;		//objeto

	punto1.setPunto(15, 10);
	std::cout << punto1.getPuntoX() << std::endl;
	std::cout << punto1.getPuntoY() << std::endl;
	// std::cout << punto1.x << endl;	// tampoco se puede acceder a private atributs
	// punto1.x = 15; // no se puede acceder atributos privados (usar setter)
	return (0);
}

