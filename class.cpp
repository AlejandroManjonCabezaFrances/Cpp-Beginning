#include <iostream>
// #include <stdlib.h>
// using namespace std;

class Persona
{
	private:
		int 			age;
		std::string		name;
	public:
		//constructor
		Persona(int, std::string);
		// Métodos
		void read();
		void run();
};

// Constructor: lista de inicializaciòn.
Persona::Persona(int _age, std::string _name)
{
	age = _age;
	name = _name;
}

// Métodos
void	Persona::read()
{
	std::cout << "Soy " << name << " y estoy leyendo un libro" << std::endl;
}

void		Persona::run()
{
	std::cout << "Soy " << name << " y estoy corriendo una maratón" << std::endl;
}

int main()
{
	// inic objeto mediante el constructor "largo"
	Persona p1 = Persona(20, "Alex");	// inic objeto "largo"
	Persona p2(19, "Maria");			// inic objeto "corta"
	Persona p3(21, "Juan");

	p1.read();
	p2.run();
	p3.read();
	p3.run();
	return (0);
}