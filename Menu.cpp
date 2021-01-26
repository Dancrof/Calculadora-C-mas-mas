#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
using namespace std;

int main() // Funcion donde arranca en programa//
{
	int n1, n2, res;
	int op;
	
	do
	{
		system("cls");
		printf("\033[1;32m"); //CAnbiar color a marron//
	    cout<<"\t\t\t\t\t\t*CALCULADORA BASICA*"; //Titulo de la funcion//
		printf("\033[1;37m");
	    cout<<"\n\n------------------------------------------------------------------------------------------------------------------------";
	    printf("\033[1;31m");
		cout<<"| [1] SUMAR";
		cout<<"\t\t[2] RESTAR";
		cout<<"\t\t[3] MULTIPLICAR";
		cout<<"\t\t\t[4] DIVIDIR";
		cout<<"\t\t[5] Salir";
		printf("\033[1;37m");
		cout<<"\n------------------------------------------------------------------------------------------------------------------------";
		cout<<"\n\nSeleciones Una Opcion: ";
		cin>>op;
		
			switch(op)
			{
				case 1: //sumar//
				    		
			  		system("cls");
			    	printf("\033[1;33m"); //Canbiar color a marron//
			    	cout<<"\t\t\t\t\t\t*Has Selecionado Sumar*"; //Titulo de la funcion//
			    	printf("\033[1;37m");
			    	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			    	cout<<"\n\n\nIngrese el Primer Numero: ";
			    	cin>>n1;
			    	cout<<"\nIngrese el Segundo Numero: ";
			    	cin>>n2;
			
			    	res = n1 + n2;
			
			    	cout<<"\n\nSu Resultado es: "<<res;
				break;
				
				
				case 2: //Restar//
		
			   		 system("cls");
			    	printf("\033[1;33m"); //CAnbiar color a marron//
			    	cout<<"\t\t\t\t\t\t*Has Selecionado REstar*"; //Titulo de la funcion//
					printf("\033[1;37m");
					cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			    	cout<<"\n\n\nIngrese el Primer Numero: ";
			    	cin>>n1;
			    	cout<<"\nIngrese el Segundo Numero: ";
			    	cin>>n2;
			
			    	res = n1 - n2;
			
			    	cout<<"\n\nSu Resultado es: "<<res;
				break;
				
				
				case 3://Multiplicar//
					
			    	system("cls");
			   		printf("\033[1;33m"); //CAnbiar color a marron//
			    	cout<<"\t\t\t\t\t\t*Has Selecionado Multiplicar*"; //Titulo de la funcion//
					printf("\033[1;37m");
					cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			   		cout<<"\n\n\nIngrese el Primer Numero: ";
			   		cin>>n1;
			    	cout<<"\nIngrese el Segundo Numero: ";
			    	cin>>n2;
			
			   		 res = n1 * n2;
			
			   		 cout<<"\n\nSu Resultado es: "<<res;

				break;
					
				
				case 4: //Dividir//
		
			   			int d1,d2;
			    		float d3;
			   		system("cls");
			   		printf("\033[1;33m"); //CAnbiar color a marron//
			   		cout<<"\t\t\t\t\t\t*Has Selecionado Dividir*"; //Titulo de la funcion//
					printf("\033[1;37m");
					cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			    	cout<<"\n\n\nIngrese el Primer Numero: ";
			   		cin>>d1;
			    	cout<<"\nIngrese el Segundo Numero: ";
			    	cin>>d2;
			
			    	d3 = d1 / d2;
			
			    	cout<<"\n\nSu Resultado es: "<<d3;
				break;
				
				
				case 5:
					printf("\033[1;34;47m");
					cout<<"\nFinalizado Exitoso"<<endl<<endl;
					printf("\033[1;37;40m");
					system("pause");
					exit(EXIT_SUCCESS);
				break;
					
				default:
					
					printf("\033[1;32;103m");
					cout<<"\nOpcion Incorrecta o No Existente"<<endl<<endl;
					printf("\033[1;37;40m");
					system("pause");				
					main();
				break;	
			}
		cout<<"\n\n\n";
		system("pause");
	}while(op <= 5);
}
	
	


   


