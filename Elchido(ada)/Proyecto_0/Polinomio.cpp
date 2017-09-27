/** Polinomio.cpp - Implementación de la clase Polinomio
 */
#include <iostream>
using namespace std;	/* cout */
#include "Polinomio.h"
#include "myfecha.h"



Polinomio::Polinomio(int intGrado, Rac *RacPt):
grado(intGrado), A(RacPt){}

Polinomio::Polinomio(){
}

ostream& operator<<(ostream& ostreamOut,Polinomio& PolObj){
	for (int i = 0; i <= PolObj.grado; i++)
	{
		ostreamOut<< (PolObj.A+i)->n << "/" << (PolObj.A+i)->d <<"\t";
	};
	ostreamOut << endl;
	return ostreamOut;	
}

Polinomio& Polinomio::operator+(Polinomio& PolObj){
	int Grado, flag;
	Polinomio Res1, Res2;
	if (grado < PolObj.grado){
		Grado = PolObj.grado;
		flag = Grado - grado;
		Rac *R1 = new Rac[Grado+1];
		for (int i = 0; i < flag; i++){
			*(R1+i) = Rac(0,1);
		};
		for (int i = flag; i <= Grado; i++){
			*(R1+i) = A[i-flag];
		};
		Res1.grado = Grado;
		Res1.A = R1;
		Res2 = PolObj;
	};
	if (PolObj.grado < grado){
		Grado = grado;
		flag = Grado - PolObj.grado;
		Rac *R2 = new Rac[Grado+1];
		for (int i = 0; i < flag; i++){
			*(R2+i) = Rac(0,1);
		};
		for (int i = flag; i <= Grado; i++){
			*(R2+i) = PolObj.A[i-flag];
		};
		Res1.grado = grado;
		Res1.A = A;
		Res2.grado = Grado;
		Res2.A = R2;
	};
	if (PolObj.grado == grado){
		Grado = grado;
		Res1.grado = grado;
		Res1.A = A;
		Res2.grado = grado;
		Res2.A = PolObj.A;
	};
	
	Rac *unRacPt = new Rac[Grado + 1];
	for (int i = 0; i <= Grado; i++){
		*(unRacPt+i)= Res1.A[i] + Res2.A[i];	
	};
	Polinomio PolResult(Grado,unRacPt);
	
	return PolResult;
};
