#include <iostream>
#include <stdlib.h>

// Ejercicio sobre Herencia de una clase padre al hijo
// de tal manera que hereda los métodos públicos de la clase padre "Person"
// pudiendo acceder a estos atributos privados gracias a la herencia de los métodos

// Clase padre
class Person
{
	private:
		std::string name;
		int         age;
	public:
		Person(std::string _name, int _age);
		~Person();
		void showPerson();
};

//Clase hijo, hereda la del padre
class Student : public Person
{
	private:
		int     idStudent;
		float   finalNote;
	public:
		Student(std::string _name, int _age, int _idStudent, float _finalNote);
		~Student();
		void showStudent();
};

Person::Person(std::string _name, int _age)
{
	this->name = _name;
	this->age = _age;
}

Person::~Person()
{
}

Student::Student(std::string _name, int _age, int _idStudent, float _finalNote) : Person(_name, _age)
{
	this->idStudent = _idStudent;
	this->finalNote = _finalNote;
}

Student::~Student()
{
}

void Person::showPerson()
{
	std::cout << "Name:" << this->name << std::endl;
	std::cout << "Age:" << this->age << std::endl;
}

void Student::showStudent()
{
	showPerson();
	std::cout << "ID Student: " << this->idStudent << std::endl;
	std::cout << "Final Note: " << this->finalNote << std::endl;
}

int main()
{
	//Person person1("Alejandro", 37);
	Student student1("Alex", 36, 2837708, 7.5);

	//person1.showPerson();
	student1.showStudent();
	return (0);
}

