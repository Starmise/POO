#pragma once

class Singleton
{
public:
	Singleton() : m_value(0) {};

	static
		Singleton*
		getInstance() {
		if (m_instance != nullptr) 
		{
			return m_instance;
		} else {
		m_instance = new Singleton;
		}
		return m_instance;
	}

	~Singleton() = default;

	void 
		setValue(int _v) {
		m_value = _v;
	}

	int 
		getValue() {
		return m_value;
	}

private:
	static Singleton* m_instance;
	int m_value;
};
