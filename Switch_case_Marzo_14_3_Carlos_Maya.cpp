/*Generar un caso como el del edificio: ingresar varias veces al edificio, eligir cuando terminar la ejecucion con la opcion (WHILE). 
Cuando ingrese a uno de los menus de uno de los pisos debe borrarse el menu anterior.
Cada piso debe tener 10 oficinas.

AL PISO 5 oficina 5: Solo pueden entrar 3 personas, ingresar 3 veces la edad, dependiendo de la edad puede ingresar, si las edades suman menos de 100 debe 
permitir ingresar dos mas.





*/

#include <iostream>
#include <math.h> 
#include <stdlib.h> 
#include <conio.h> 

using namespace std;
main ()


{
		
char d;
double edad1,edad2,edad3,edad4,edad5,resultado;

	do
	{
	
		int piso,ofi1,ofi2,ofi3,ofi4,ofi5;
		char repetir,S,entrada;
		
				
							
					cout<<"Digite el numero del piso al que desea ingresar; del 1 al 5. \n";
					cin>>piso;
						system("cls");
						
						switch(piso)
						
							{
								
							case 1: cout<<"Bienvenido al piso 1, a cual oficina deseas ingresar? De la 1 a la 5. \n";
								
								cin>>ofi1;
								system("cls");
								
									switch(ofi1)
									
										{
											case 1: cout<<"Bienvenido a la oficina 1 del piso 1";
											break;
											case 2: cout<<"Bienvenido a la oficina 2 del piso 1";
											break;
											case 3: cout<<"Bienvenido a la oficina 3 del piso 1";
											break;
											case 4: cout<<"Bienvenido a la oficina 4 del piso 1";
											break;
											case 5: cout<<"Bienvenido a la oficina 5 del piso 1";
											break;
											default: cout<<"La opcion es incorrecta";
											
										}
							break;
								
									
											
											
											
							case 2: cout<<"Bienvenido al piso 2, a cual oficina deseas ingresar? De la 1 a la 5. \n";
								
								cin>>ofi2;
								system("cls");
								
									switch(ofi2)
									
										{
											case 1: cout<<"Bienvenido a la oficina 1 del piso 2";
											break;
											case 2: cout<<"Bienvenido a la oficina 2 del piso 2";
											break;
											case 3: cout<<"Bienvenido a la oficina 3 del piso 2";
											break;
											case 4: cout<<"Bienvenido a la oficina 4 del piso 2";
											break;
											case 5: cout<<"Bienvenido a la oficina 5 del piso 2";
											break;
											default: cout<<"La opcion es incorrecta";
											
											
										}
							break;
	
											
											
							case 3: cout<<"Bienvenido al piso 3, a cual oficina deseas ingresar? De la 1 a la 5. \n";
								cin>>ofi3;
								system("cls");
								
									switch(ofi3)
									
										{
											case 1: cout<<"Bienvenido a la oficina 1 del piso 3";
											break;
											case 2: cout<<"Bienvenido a la oficina 2 del piso 3";
											break;
											case 3: cout<<"Bienvenido a la oficina 3 del piso 3";
											break;
											case 4: cout<<"Bienvenido a la oficina 4 del piso 3";
											break;
											case 5: cout<<"Bienvenido a la oficina 5 del piso 3";
											break;
											default: cout<<"La opcion es incorrecta";
										}						
							break;	
												
											
											
							case 4: cout<<"Bienvenido al piso 4, a cual oficina deseas ingresar? De la 1 a la 5. \n";
								cin>>ofi4;
								system("cls");
								
									switch(ofi4)
									
										{
											case 1: cout<<"Bienvenido a la oficina 1 del piso 4";
											break;
											case 2: cout<<"Bienvenido a la oficina 2 del piso 4";
											break;
											case 3: cout<<"Bienvenido a la oficina 3 del piso 4";
											break;
											case 4: cout<<"Bienvenido a la oficina 4 del piso 4";
											break;
											case 5: cout<<"Bienvenido a la oficina 5 del piso 4";
											break;
											default: cout<<"La opcion es incorrecta";
										}
							break;
											
											
											
							case 5: cout<<"Bienvenido al piso 5, a cual oficina deseas ingresar? De la 1 a la 5. \n";
								cin>>ofi5;
								system("cls");
								
									switch(ofi5)
									
										{
											case 1: cout<<"Bienvenido a la oficina 1 del piso 5";
											break;
											case 2: cout<<"Bienvenido a la oficina 2 del piso 5";
											break;
											case 3: cout<<"Bienvenido a la oficina 3 del piso 5";
											break;
											case 4: cout<<"Bienvenido a la oficina 4 del piso 5";
											break;
											case 5: 																																																				
												
												cout<<"Bienvenido a la oficina 5 del piso 5, ingrese su edad: \n\n";
												cin>>edad1;
																									
													
														if(edad1>=18)
														{
															cout<<"Puedes ingresar a sala para adultos \n\n";
														}
														else
														{
															cout<<"Ingresa a sala para niños \n\n";
														}	
														
														
												cout<<"Bienvenido a la oficina 5 del piso 5, ingrese su edad: \n\n";
												cin>>edad2;
																									
													
														if(edad2>=18)
														{
															cout<<"Puedes ingresar a sala para adultos \n\n";
														}
														else
														{
															cout<<"Ingresa a sala para niños \n\n";
														}
														
														
												cout<<"Bienvenido a la oficina 5 del piso 5, ingrese su edad: \n\n";
												cin>>edad3;
																									
													
														if(edad3>=18)
														{
															cout<<"Puedes ingresar a sala para adultos \n\n";
														}
														else
														{
															cout<<"Ingresa a sala para niños \n\n";
														}							
													
													cout<<"Han ingresado 3 personas";
													
																if(edad1+edad2+edad3<100)
																	{
																		cout<<"Bienvenido a la oficina 5 del piso 5, ingrese su edad: \n\n";
																		cin>>edad4;
																													
																	
																			if(edad4>=18)
																			{
																				cout<<"Puedes ingresar a sala para adultos \n\n";
																			}
																			else
																			{
																				cout<<"Ingresa a sala para niños \n\n";
																			}
																			
																			
																		cout<<"Bienvenido a la oficina 5 del piso 5, ingrese su edad: \n\n";
																		cin>>edad5;
																													
																	
																			if(edad5>=18)
																			{
																				cout<<"Puedes ingresar a sala para adultos \n\n";
																			}
																			else
																			{
																				cout<<"Ingresa a sala para niños \n\n";
																			}
																	cout<<"Han ingresado 5 personas";																															
																	}
												
											break;
											default: cout<<"La opcion es incorrecta";
										}
							break;
												
											
							
							
							}
			cout << "\n\nSi desea repetir desde el principio del menu para el edificio? S/N?" <<endl;
			cin >>d;
			system("cls");
		} while (d=='S');
}





