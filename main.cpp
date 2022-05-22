
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string pieza[11] = {"pieza 1", "pieza 2", "pieza 3", "pieza 4", "pieza 5", "pieza 6", "pieza 7", "pieza 8", "pieza 9", "pieza 10"};

	string disp[11] = {"Disponible", "Disponible", "Disponible", "Disponible", "Disponible", "Disponible", "Disponible", "Disponible", "Disponible", "Disponible"};

	int x,y,z,i,j,k;

	int status = 2;
	
	while (status == 2){
		system("cls");
		cout << "--------------------------------\n";
		cout<< "~ Hotel BrGuzman"<<endl;
		cout<< "- Bienvenido!" <<endl;
		cout<< "1- Ver piezas\n2- consultar una pieza\n3- About\n4- salir\nIngrese una opcion: ";
		cin >> x;
		switch (x){
 		case 1:
		 	i = 0;
			 system("cls");
			 cout<<"~ Piezas | disponibilidad \n";
			while (i < 10){
				cout<<"- "<<pieza[i]<<" | "<<disp[i]<<endl;
				i++;
			}
			system("pause");
			cout<<"--------------------------------\n";
			cout<<"Volver al menu? 1- si 2- no\n";
			cin >>y;
			if(y == 1){
				status = 2;
			}else if (y == 2){
				status = 1;
			}else{
				cout<<"- Ingrese una opcion valida";
				status = 2;
			}
			break;
		case 2:
			y = 1;
			while(y == 1)
			{
				system("cls");
				cout<<"- Ingrese la pieza que desea alquilar: \n";
				cin>> z;
				cout<<"\n";
				if(disp[z] == "Ocupado"){
					system("cls");
					cout<<"- La " << pieza[z] <<" esta ocupada."<<endl;
					cout<<"- Desea ocupar otra pieza?:\n1- si 2- no: ";
					cin>>y;
					if(y == 2){
						status = 2;
						break;
					}
				}else if(disp[z] == "Disponible"){
					system("cls");
					z--;
					cout<<"~ La "<< pieza[z] <<" ha sido alquilada con Exito!!"<<endl;
					cout<<"- Gracias por La preferencia!!"<<endl;
					disp[z] = "Ocupado";
					system("pause");
					cout<<"- Desea Salir?\n1- si 2- no\n";
					cin>>status;
					break;
				}else{
					system("cls");
					cout<<"!!! ingrese una opcion valida.";
					y = 1;
				}
				if(z > 10 or z <= 0){
					system("cls");
					cout<<"!!! ingrese una opcion valida.";
					y = 1;
				}
			}
			break;
		case 3:
			system("cls");
			cout<<"~About"<<endl;
			cout<< "- Siempre al servicio de los demas, queriendo mejorar cada dia mas nuestros servicios.\n\t~ Hecho por Brguzman." <<endl;
			system("pause");
			cout<<"- DESEA VOLVER AL MENU ?\n";
			cout<<"1- si\n2- No\n";
			cin >> status;
			if(status == 2){
				status = 1;
			}else{
				status = 2;
			}
			break;
		case 4:
			cout << "!!! Esta seguro que quiere salir...?? 1- si 2- no\nIngrese una opcion: ";
			cin >> status;
			break;
		default:
			system("cls");
			cout<<"!!! Ingrese una opcion valida\n";
			status = 2;
			system("pause");
		} 
	}
	return 0;
}