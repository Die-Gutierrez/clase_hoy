#include <iostream>

using namespace std;

class Estudiante
{
	private:
		int codigo;
		string nombre;
		float promedio;
	public:
		void leer();
		void escribir();
		void comprobar();	
};
void Estudiante::leer()
{
	cout<<"Ingrese su codigo: "; cin>>codigo;
	cout<<"Ingrese su nombre: "; fflush(stdin); getline(cin, nombre);
	cout<<"Ingrese su promedio: "; cin>>promedio;
}
void Estudiante::escribir()
{
	cout<<"\nSu codigo es: "<<codigo<<endl;
	cout<<"Su nombre es: "<<nombre<<endl;
	cout<<"Su promedio es: "<<promedio<<endl;
}
void Estudiante::comprobar()
{
	if(promedio >= 10.5) cout<<"\nAprobado"<<endl;
	else cout<<"\nDesaprobado"<<endl;	
}
int main()
{
	Estudiante e1;
	
	e1.leer();
	e1.escribir();
	e1.comprobar();
	
	return 0;
}
