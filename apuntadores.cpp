#include <iostream>
#include <string>
#include <clocale>

using namespace std;

struct Estudiante {
    long long int codigo;
    string nombre;
    float notas [3]; 
};

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	string nombre = ""; 
	long long int  codigo; 
	int n,c=0; 
	float notas[3]; 

	cout << "Ingrese la cantidad de estudiantes"<< endl;
    cin >> n;
    
    do 
    {
    	if (n<3)
    	{
    		cout<<"Tienen que haber minimo tres estudiantes"<<endl; 
    		cout<<"Ingrese un n�mero mayor a 3"<<endl;
    		cin>>n; 
		}
	}
	while (n<3); 
	
	Estudiante Alumno [n]; 
    Estudiante* ap = Alumno; 
    
	for (int i=0; i<n; i++)
	{
		cout<<"\n Ingrese los datos del estudiante "<<i+1<<endl; 
		cout<<"Ingrese su c�digo"<<endl; 
		cin>>(ap+i)->codigo; 
		cin.ignore();
		
		cout<<"Ingrese su nombre"<<endl; 
		getline(cin, (ap+i)->nombre);
		
		for (int s=0; s<3; s++)
		{
			cout<<"Ingrese las tres notas"<<endl; 
			cin>> (ap+i)->notas [s]; 
		}
	}    
	
	for (int i=0; i<n; i++)
	{
		cout<<"Datos del estudiante "<< i+1<<endl;
		cout<<"Nombre: " << (ap+i)->nombre<<endl; 
		cout<<"C�digo: " << (ap+i)->codigo<<endl; 
		
		for (int s=0; s<3; s++)
		{
			cout<<"Nota :" <<(ap+i)->notas [s]<<endl; 
		}
	}
	
return 0; 
}