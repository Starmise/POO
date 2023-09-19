#pragma once
#include <iostream>
#include <string>
using namespace std;

enum aldeanoTipo {
	Normal = 0,
	Zombie = 1,
	Bruja = 2,
	Cartografo = 3,
	Agricultor = 4,
	Bibliotecario = 5,
	Curado = 6,
	Supremo = 7
};

struct Vector2 {
	//int x;
	//int y;

	/*void setVector2(int _x, int _y) {
			x = _x;
			y = _y;
		}

		Vector2 getVector2(){
		Vector2 copy;
		copy.x = x;
		copy.y = y;
		return copy;
		}

		Vector2 dotProduct(int _value) {
			Vector2 copy;
			x *= _value;
			y *= _value;
			copy.x = x;
			copy.y = y;
			return copy;
		}

		int crosssProdcut(Vector2 _vec) {
			return((x * _vec.y) - (y * _vec.x));
		}

		void print() {
			cout << "X: " << x << ", Y: " << y << endl;
		}*/
};
