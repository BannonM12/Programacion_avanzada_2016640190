struct fecha{
	int d,m,a;	/* dia, mes, anio */
	void to_string_Pt();
	void set_dia();
	string dia;
};
typedef struct fecha Fecha;

struct Rac{
    int n,d;  //n=numerador; d=denominador
    int mcd; //máximo común divisor
    void simplificar();
    void set_mcd();
    Rac& operator+(Rac& RacObj);
    Rac& operator-(Rac& RacObj);
    Rac& operator*(Rac& RacObj);
    Rac& operator/(Rac& RacObj);
    
    Rac(int intNum,int intDen);
    Rac();
    friend ostream& operator<<(ostream& ostreamOut,Rac& RacObj);  //primer operando ostream flujo de salida   segundo es  operando el objeto rac    
    };
    
    
