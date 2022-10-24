#include <iostream>

using namespace std;

class rectangulo
{
	private:
		float largo, ancho;
	public:
		void leer();
		void escribir();
};
void rectangulo::leer()
{
	cout<<"Ingrese el largo: "; cin>>largo;
	cout<<"Ingrese el ancho: "; cin>>ancho;
}
void rectangulo::escribir()
{
	cout<<"Largo: "<<largo<<endl;
	cout<<"Ancho: "<<ancho<<endl;
	
}
int main()
{
	rectangulo rec1;
	
	rec1.leer();
	cout<<endl;
	rec1.escribir();
	
	return 0;
}
