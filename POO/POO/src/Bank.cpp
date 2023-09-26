#include "Commons.h"
#include "Bank.h"

CuentaBancaria::CuentaBancaria()
{
}

CuentaBancaria::~CuentaBancaria()
{
}

void CuentaBancaria::menu()
{
	cout << "Hola, ingrese una opción: " << endl;
	cout << "1.Consulta de saldo " << endl;
	cout << "2.Transacción (retirar)" << endl;
	cout << "3.Transacción (depositar)" << endl;
	cout << "4.Calcular interes " << endl;
	cin >> opc;

	while (opc != 0)
	{
		switch (opc)
		{
		case 1:
			consulta();
			break;
		case 2:
			transaction();
			break;
		case 3:
			transactionDep();
			break;
		case 4:
			interesSimple();
			break;
		default:
			cout << "Esa no es una opción valida" << endl;
			break;
		}
	}
}


void CuentaBancaria::consulta()
{
	cout << "El saldo de su cuenta es: $" << saldo << endl;
	menu();
}


void CuentaBancaria::transaction()
{
	cout << "Ingrese la cantidad que quiere transferir: "<< endl;
	cin >> tran;

	if (saldo < tran)
	{
		cout << "Usted no cuenta con suficiente dinero en su cuenta para realizar dicha transacción"<< endl;
	}
	else {
		saldo -= tran;
		cout << "Se ha realizado exitosamente la transacción. Su saldo final es de: "<< saldo << endl;
	}
	menu();
}

void CuentaBancaria::transactionDep()
{
	cout << "Ingrese la cantidad que quiere transferir: " << endl;
	cin >> tran;

	if (saldo < tran)
	{
		cout << "Usted no cuenta con suficiente dinero en su cuenta para realizar dicha transacción" << endl;
	}
	else {
		saldo += tran;
		cout << "Se ha realizado exitosamente la transacción. Su saldo final es de: " << saldo << endl;
	}
	menu();
}


void CuentaBancaria::interesSimple()
{
	cout << "Ingrese la cantidad de tiempo: " << endl;
	cin >> tiempo;

	float interes = tran * tasa * tiempo;
	cout << "El interes es de: " << interes << endl;

	menu();
}
