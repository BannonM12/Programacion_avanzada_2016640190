//main.cpp 
#include <iostream>
#include <stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;	/* string, cout, endl*/
#include "myfecha.h"
#include "Expresion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *get_dia(int intNumDia);
Fecha *get_Fecha(int intFecha);


int main(int argc, char** argv) {
	printf("%s 23 de agosto de 2017\n",get_dia(2));
	Fecha *F=get_Fecha(20170823);
	F->set_dia();
	F->to_string_Pt();
	cout<<"("<<F->dia<<")"<<endl;
	
	
    Rac rac1; 
    rac1.n=30; rac1.d=60;rac1.mcd=30;
    
    cout<<"rac1="<<endl<<rac1;
    cout<<"rac1 simplificado="<<endl;
    ExpresionASimplificar EAS1(new BoxRac(&rac1));
    EAS1.print();cout<<endl;
    
  /*  cout<<"El numerador es: "<<rac1.n<<endl;
    cout<<"El denominador es:  "<<rac1.d<<endl;
    cout<<"El mcd es: "<<rac1.mcd<<endl;  */
    
    
    Rac rac2; 
    rac2.n=96; rac2.d=128;
    cout<<"rac2="<<endl<<rac2;
    rac2.set_mcd();
    cout<<"rac2 simplificado="<<endl;
    ExpresionASimplificar EAS2(new BoxRac(&rac2));
    EAS2.print();cout<<endl;
    /*  cout<<"El numerador es: "<<rac2.n<<endl;
    cout<<"El denominador es:  "<<rac2.d<<endl;
    cout<<"El mcd es: "<<rac2.mcd<<endl; */
  //  cout<<"Este será rac2 con la sobrecarga del operador <<"<<endl;
    Rac rac3;
    rac3=rac1*rac2;
    
    Rac rac4(64,256);
    cout<<"rac4="<<endl;
    ExpresionASimplificar EAS4(new BoxRac(&rac4));
    EAS4.print();
    
    
    /*
    cout<<"Multiplicacion:  "<<endl<<rac3;
    rac3=rac1+rac2;
    cout<<"Suma:  "<<endl<<rac3;
    rac3=rac1-rac2;
    cout<<"Resta:  "<<endl<<rac3;
    rac3=rac1/rac2;
    cout<<"Division:  "<<endl<<rac3;
     */
    
system ("pause");
	return 0;

}
