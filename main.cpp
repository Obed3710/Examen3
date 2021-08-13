#include <iostream>
#include <math.h>
	

using namespace std;
int menu()	{

	
	int opcion;
	
	cout<<"****************************************"<<endl;
	cout<<"*               MENU                   *"<<endl;
	cout<<"* 1.- Area del Circulo                 *"<<endl;
	cout<<"* 2.- Area del rectangulo              *"<<endl;
	cout<<"* 3.- Convertir de kilometros a Metros *"<<endl;
	cout<<"* 4.-convertir metros a centimetros    *"<<endl;
	cout<<"* 5.- Salir                            *"<<endl;
    cout<<"**************"<<endl;
    cout<<"Seleccione la opcion: ";
	cin>>opcion;
	 
	return opcion;
	
	}


int(int radio,int area){
	return area;
}
 


class Formulas {
	public:
		void areaRectangulo() {
			int base, altura, area;
			
			cout<<"*** Area del Rectangulo ***"<<endl;
			cout<<"Ingrese base: ";
			cin>>base;
			cout<<"Ingrese altura: ";
			cin>>altura;
			
			area = base * altura;
			
			cout<<" El area es: "<<area<<endl;
			
		}


class Formulas{
	public:
		void kilometrosametros(){
			
			int Kilometros, metros;
			
			cout<<"* Convertir de kilometros a Metros *"<<endl;
			cout<<"Ingrese los kilometros: ";
			cin>>kilometros;
			
			metros = kilometro * 1000
			
			cout<<kilometros<<" los metros son: "<<metros<<endl;	
			
		}
};
    
 



int main(int argc, char** argv) {
    Formulas f;
    f.areaRectangulo();
    f.kilometrosametros();
    
	
	  void areaCirculo() {  
	  	double radio, area;
	  	
	  	cout<<"*** Area del Ciculo ***"<<endl;
	  	cout<<"Ingrese el radio: ";
	  	cin>>radio;
	  	
	  	area = M_PI * pow(radio, 2);
	  	
	  	cout<<"El area es: "<<area<<endl;
	  	
	  	
	

	return 0;

}

