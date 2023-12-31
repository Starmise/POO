#pragma once

/*El patr�n Singleton es �til porque hace que una clase tenga una sola instancia 
y permite acceder de forma global a esta instancia. Es �til cuando se necesita 
una �nica instancia para las acciones del sistema.*/

class Singleton
{
public:
	Singleton() : m_value(0) {};

	static
		Singleton*
		getInstance() {
		if (m_instance != nullptr) // Verifica si m_instance ya est� inicializado
		{
			return m_instance; // Devuelve un Singleton existente
		} else {
		m_instance = new Singleton; // Devuelve un Singleton creado
		}
		return m_instance; // Devuelve el Singleton creado o existente
	}

	~Singleton() = default;

	//Establecer el valor de la variable m_value
	void 
		setValue(int _v) {
		m_value = _v;
	}

	//Obtener el valor de la variable m_value
	int 
		getValue() {
		return m_value;
	}

private:
	static Singleton* m_instance;
	int m_value;
};
