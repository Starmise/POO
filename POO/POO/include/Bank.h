#pragma once
class CuentaBancaria
{
public:
	CuentaBancaria();
	~CuentaBancaria();

	void consulta();

	void menu();

	string propietor;
	int opc;

protected:
	int noCuenta;
	float tran;

	void transaction();
	void transactionDep();

private:
	float saldo = 18000;
	float tasa = 0.016;
	int tiempo;

	void interesSimple();

};