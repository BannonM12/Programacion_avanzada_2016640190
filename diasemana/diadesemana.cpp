//Día de la semana.cpp


#include <iostream>
#include <windows.h>
#include <stdlib.h>	/* malloc() */
using namespace std;	/* cout */
#include "myfecha.h"
#include "Expresion.h"




char *D[]={(char*)"Lunes", (char*)"Martes",(char*)"Miercoles",(char*)"Jueves",(char*)"Viernes",(char*)"Sabado",(char*)"Domingo"};
void Fecha::to_string_Pt(){
	cout<<d<<"/"<<m<<"/"<<a;
}

string DIA[]={"Lunes","Martes","Miercoles","Jueves","Viernes",
"Sabado","Domingo"};
/*agosto de 2017 SOLO PARA ESTE MES*/
void Fecha::set_dia(){
	Fecha::dia=DIA[Fecha::d%7];
}

char *get_dia(int intNumDia){
			return D[intNumDia];		
}

Fecha *get_Fecha(int intFecha){/*20170818*/
	//Fecha *R=(Fecha*)malloc(sizeof(Fecha));
    struct MyUtil{
        static int DyU(int num){
            int tm=100*(num/100);
            return num-tm;
            }
        };

	Fecha *R= new Fecha();
    int tmp=100*(intFecha/100);
	R->d=MyUtil::DyU(intFecha);
	R->m=MyUtil::DyU(intFecha/100);
	R->a=intFecha/10000;
	return R;
}

void Rac::simplificar(){
    n=n/mcd;
    d=d/mcd;
    }
    
void Rac::set_mcd(){
    int M,N,tmp;  //M será el entero más grande
    if((n!=0)&&(d!=0)){
    if(n>d){
        M=n;N=d;}
        else{
            M=d;N=n;
            };
    while((tmp=M%N)!=0){
        M=N;
        N=tmp;
        }  //Cuando este while termina en n se tiene el mcd    
    }else{
        N=1;
        }
    mcd=N;
    }
    
ostream& operator<<(ostream& ostreamOut,Rac& RacObj){
        ostreamOut<<" "<<RacObj.n<<"  "<<endl;
        ostreamOut<<"---"<<endl;
        ostreamOut<<" "<<RacObj.d<<endl;
        return ostreamOut;
}

   Rac& Rac::operator*(Rac& RacObj){
    Rac RacResult;
    RacResult.n=n*RacObj.n;
    RacResult.d=d*RacObj.d;
    RacResult.set_mcd();
    RacResult.simplificar();
    Expresion E(new BoxRac(this), new BoxStringOperator('x'), new BoxRac(&RacObj),new BoxRac(&RacResult));
    E.print();
    return RacResult;
    };
   
   Rac& Rac::operator+(Rac& RacObj){
    Rac RacResult;
    RacResult.n=n*RacObj.d+d*RacObj.n;
    RacResult.d=d*RacObj.d; 
    RacResult.set_mcd();
    RacResult.simplificar();
    return RacResult;
    };
    
    Rac& Rac::operator-(Rac& RacObj){
    Rac RacResult;
    RacResult.n=n*RacObj.d-d*RacObj.n;
    RacResult.d=d*RacObj.d;
    RacResult.set_mcd();
    RacResult.simplificar();
    return RacResult;
    };
    
    Rac& Rac::operator/(Rac& RacObj){
    Rac RacResult;
    RacResult.n=n*RacObj.d;
    RacResult.d=d*RacObj.n;
    RacResult.set_mcd();
    RacResult.simplificar();
    return RacResult;
    };
   
   
    
    
    
    
