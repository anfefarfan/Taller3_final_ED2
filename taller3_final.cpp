#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


struct nodo{
	int dato;
	nodo *siguiente;
	nodo *anterior;
};	

nodo *lista = NULL;
nodo *inicio=NULL;
nodo *fin=NULL;
void menu();


int pedir_datos();
int pedir_datos_buscar();
int pedir_datos_modificar();
int pedir_datos_eliminar();


/////////////////Funciones Listas Simples//////////////////////
void insertar_datos_lista(nodo *&,int);
void imprimir_Lista(nodo *);
void buscar_elemento_lista(nodo*,int);
void editar_elemento_lista(nodo*,int);
void eliminar_elemento_lista(nodo*&,int);
void eliminar_completa_lista(nodo *&);

void insertar_elementos_lista(nodo *&,int);

////////////////////////////////////////////////////////////////
/////////////////Funciones Listas Dobles//////////////////////

void insertar_dato_lista_doble(nodo *&,nodo *&,int);
void insertar_dato_lista_doble2(nodo *&,nodo *&,int);
void imprimir_Lista_doble(nodo *);
void buscar_lista_doble(nodo*,int);
void editar_lista_doble(nodo*,int);
void eliminar_elemento_lista_doble(nodo *&,nodo *&,int);
void eliminar_lista_doble_completa(nodo *&);
bool lista_vacia_doble(nodo *);

////////////////////////////////////////////////////////////////

/////////////////Funciones Juego De Josephus//////////////////////

nodo * crearnodo();
int insertarcircular(nodo *& ,int );
void listacircular(nodo * );
int ganadorjosephus(nodo * ,int ,int ,int );

////////////////////////////////////////////////////////////////

/////////////////Funciones de la lista Circular Doble//////////////////////

void insertar_dato_lista_circular_doble(nodo *&,nodo *&,int);
void imprimir_Lista_circular_doble(nodo *);
void buscar_lista_circular_doble(nodo*,int);
void editar_lista_circular_doble(nodo*,int);
void eliminar_elemento_lista_circular_doble(nodo *&,nodo *&,int);
void eliminar_lista_circular_doble_completa(nodo *&);
bool lista_vacia_circular_doble(nodo *);

////////////////////////////////////////////////////////////////





int main(int argc, char *argv[]) {
	
	menu();
	
	return 0;
}
void menu(){
	int opcion;
	do{	
		printf("|**************************************************************|\n");
		printf("|----------------- * Gestion de taller final *-----------------|\n");
		printf("|**************************************************************|\n");
		printf("| 1.Gestionar Lista Simple                                     |\n");
		printf("| 2.Gestionar Lista Doble                                      |\n");
		printf("| 3.Juego De Josephus                                          |\n");
		printf("| 4.Gestionar Lista Circular Doble                             |\n");
		printf("| 0.Salir                                                      |\n");
		printf("|**************************************************************|\n");
		printf("Ingrese una opcion:");
		scanf("%d", &opcion);
		switch(opcion){
		case 1:{
			
			system("cls");
			printf("---------------Gestionar Lista Simple---------------\n");
			int opcion1;
			
			do{	
				printf("|**************************************************************|\n");
				printf("|----------------- * Gestion Lista Simple    *-----------------|\n");
				printf("|**************************************************************|\n");
				printf("| 1.Insertar Dato a la Lista                                   |\n");
				printf("| 2.Imprimir Datos de la Lista                                 |\n");
				printf("| 3.Buscar Dato de la Lista                                    |\n");
				printf("| 4.Editar dato de la Lista                                    |\n");
				printf("| 5.Eliminar dato de la Lista                                  |\n");
				printf("| 6.Eliminar Lista Completa                                    |\n");
				printf("|                                                              |\n");
				printf("| 0.Salir                                                      |\n");
				printf("|**************************************************************|\n");
				printf("Ingrese una opcion:");
				scanf("%d", &opcion1);
				switch(opcion1){
				case 1:{
					printf("-------------Insertar Dato a la Lista-------------\n");
					insertar_elementos_lista(lista,pedir_datos());
					system("pause");
					system("cls");
					break;
					
				}
				case 2:{
						printf("-------------Imprimir Datos de la Lista-------------\n");
						imprimir_Lista(lista);
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}
				case 3:{
							printf("-------------Buscar Dato de la Lista-------------\n");
							buscar_elemento_lista(lista,pedir_datos_buscar());
							system("pause");
							system("cls");
							
							break;
						}
				case 4:{
								printf("-------------Editar Dato de la Lista-------------\n");
								editar_elemento_lista(lista,pedir_datos_modificar());
								system("pause");
								system("cls");
								
								break;
							}
				case 5:{
									printf("-------------Eliminar Dato a la Lista-------------\n");
									eliminar_elemento_lista(lista,pedir_datos_eliminar());
									system("pause");
									system("cls");
									
									break;
								}
				case 6:{
										printf("-------------Eliminar Lista Completa-------------\n");
										eliminar_completa_lista(lista);
										system("pause");
										system("cls");
										
										break;
									}
				default:{
											printf("-Error\n");
											system("pause");
											system("cls");
											
											break;
										}
										system("pause");
										system("cls");
										break;
				}
				
				
				
			}while(opcion1 != 0);
		}
			
			
		case 2:{
				
				system("cls");
				printf("---------------Gestionar Lista Doble---------------\n");
				int opcion2;
				
				do{	
					printf("|**************************************************************|\n");
					printf("|----------------- * Gestion Lista Doble     *-----------------|\n");
					printf("|**************************************************************|\n");
					printf("| 1.Insertar Dato a la Lista Doble                             |\n");
					printf("| 2.Imprimir Datos de la Lista Doble                           |\n");
					printf("| 3.Buscar Dato de la Lista Doble                              |\n");
					printf("| 4.Editar dato de la Lista Doble                              |\n");
					printf("| 5.Eliminar dato de la Lista Doble                            |\n");
					printf("| 6.Eliminar Lista Completa Doble                              |\n");
					printf("|                                                              |\n");
					printf("| 0.Salir                                                      |\n");
					printf("|**************************************************************|\n");
					printf("Ingrese una opcion:");
					scanf("%d", &opcion2);
					switch(opcion2){
					case 1:{
						printf("-------------Insertar Dato a la Lista Doble-------------\n");
						insertar_dato_lista_doble2(inicio,fin,pedir_datos());
						system("pause");
						system("cls");
						break;
						
					}
					case 2:{
							printf("-------------Imprimir Datos de la Lista Doble-------------\n");
							imprimir_Lista_doble(inicio);
							printf("\n\n");
							system("pause");
							system("cls");
							break;
						}
					case 3:{
								printf("-------------Buscar Dato de la Lista Doble-------------\n");
								buscar_lista_doble(inicio,pedir_datos_buscar());
								system("pause");
								system("cls");
								
								break;
							}
					case 4:{
									printf("-------------Editar Dato de la Lista Doble-------------\n");
									editar_lista_doble(inicio,pedir_datos_modificar());
									system("pause");
									system("cls");
									
									break;
								}
					case 5:{
										printf("-------------Eliminar Dato a la Lista Doble-------------\n");
										eliminar_elemento_lista_doble(inicio,fin,pedir_datos_eliminar());
										system("pause");
										system("cls");
										
										break;
									}
					case 6:{
											printf("-------------Eliminar Lista Doble Completa-------------\n");
											eliminar_lista_doble_completa(inicio);
											system("pause");
											system("cls");
											
											break;
										}
					default:{
												printf("-Error\n");
												system("pause");
												system("cls");
												
												break;
											}
											system("pause");
											system("cls");
											break;
					}
				}while(opcion2 != 0);
			}
				
		case 3:{
					printf("---------------Juego De Josephus ---------------\n");
					printf("Tener en cuenta :\n\n");
					printf("ID = Numero que identifica a la persona\n\n\n");
					
					nodo *circular = NULL;
					int i,n,cont;
					int id_persona,ganador,inicio;
					
					printf("Ingresar el numero de participantes\n");
					scanf("%d",&n);
					for (i = 0; i < n; ++i)
					{
						
						printf("Ingresar el ID de la persona\n");
						scanf("%d",&id_persona);
						insertarcircular(circular,id_persona); 
					}
					printf("Ingresar el ID de la persona con que daremos inicio al juego\n");
					scanf("%d",&inicio);
					printf("Ingresar el numero de saltos\n");
					scanf("%d",&cont);
					ganador = ganadorjosephus(circular,inicio,cont,n);
					printf("El ganador es : %d\n",ganador);
					system("pause");
					system("cls");
					
					break;
				}
					
		case 4:{
						
						system("cls");
						printf("---------------Gestionar Lista Circular Doble---------------\n");
						int opcion4;
						
						do{	
							printf("|**************************************************************|\n");
							printf("|-------------- * Gestion Lista Circular Doble *---------------|\n");
							printf("|**************************************************************|\n");
							printf("| 1.Insertar Dato a la Lista Circular Doble                    |\n");
							printf("| 2.Imprimir Datos de la Lista Circular Doble                  |\n");
							printf("| 3.Buscar Dato de la Lista Circular Doble                     |\n");
							printf("| 4.Editar dato de la Lista Circular Doble                     |\n");
							printf("| 5.Eliminar dato de la Lista Circular Doble                   |\n");
							printf("| 6.Eliminar Lista Completa Circular Doble                     |\n");
							printf("|                                                              |\n");
							printf("| 0.Salir                                                      |\n");
							printf("|**************************************************************|\n");
							printf("Ingrese una opcion:");
							scanf("%d", &opcion4);
							switch(opcion4){
							case 1:{
								printf("-------------Insertar Dato a la Lista Doble-------------\n");
								insertar_dato_lista_circular_doble(inicio,fin,pedir_datos());
								system("pause");
								system("cls");
								break;
								
							}
							case 2:{
									printf("-------------Imprimir Datos de la Lista Doble-------------\n");
									imprimir_Lista_circular_doble(inicio);
									printf("\n\n");
									system("pause");
									system("cls");
									break;
								}
							case 3:{
										printf("-------------Buscar Dato de la Lista Doble-------------\n");
										buscar_lista_circular_doble(inicio,pedir_datos_buscar());
										system("pause");
										system("cls");
										
										break;
									}
							case 4:{
											printf("-------------Editar Dato de la Lista Doble-------------\n");
											editar_lista_circular_doble(inicio,pedir_datos_modificar());
											system("pause");
											system("cls");
											
											break;
										}
							case 5:{
												printf("-------------Eliminar Dato a la Lista Doble-------------\n");
												eliminar_elemento_lista_circular_doble(inicio,fin,pedir_datos_eliminar());
												system("pause");
												system("cls");
												
												break;
											}
							case 6:{
													printf("-------------Eliminar Lista Doble Completa-------------\n");
													//eliminar_lista_circular_doble_completa(inicio);
													system("pause");
													system("cls");
													
													break;
												}
							default:{
														printf("-Error\n");
														system("pause");
														system("cls");
														
														break;
													}
													system("pause");
													system("cls");
													break;
							}
						}while(opcion4 != 0);
					}	
						
		default:{
							printf("No es una opcion valida\n");
							break;
						}
						
		}
		
	}while(opcion != 0);
}



int pedir_datos(){
	int dato;
	printf("Ingrese el dato a insertar\n");
	scanf("%d", &dato);
	return dato;
}

int pedir_datos_buscar(){
	int dato;
	printf("Ingrese el dato a buscar\n");
	scanf("%d", &dato);
	return dato;
}

int pedir_datos_modificar(){
	int dato;
	printf("Ingrese el dato a modificar\n");
	scanf("%d", &dato);
	return dato;
}
int pedir_datos_eliminar(){
	int dato;
	printf("\nIngrese el dato a eliminar\n");
	scanf("%d", &dato);
	return dato;
}

/////////////////////Funciones Listas Simples////////////////////////77
bool lista_vacia(nodo *lista){
	return (lista == NULL) ? true:false;
}

void insertar_datos_lista(nodo *&lista, int n){
	
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	nodo *aux;
	
	nuevo->dato = n;
	nuevo->siguiente = NULL;
	
	if(lista == NULL){
		lista = nuevo;
	}
	else{
		aux = lista;
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo;
	}
	
	printf("El dato %d fue agregado correctamente\n",n);
	
}

void imprimir_Lista(nodo *inicio){
	
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = lista;
	if(lista_vacia(lista)){
		
		printf("lista vacia\n");
	}
	while(actual != NULL){ 
		
		printf("%d - ",actual->dato);
		actual = actual->siguiente; 
	}
}

void buscar_elemento_lista(nodo *lista,int n){
	
	int encontrado=0;
	
	nodo *aux= lista;
	if(lista_vacia(lista)){
		
		printf("lista vacia\n");
	}else{
		
		while(aux!=NULL){
			
			if(aux->dato==n){
				encontrado=1;
				printf("dato encontrado\n");
				break;
			}
			aux=aux->siguiente;
		}
		if(encontrado==0){
			printf("dato no encontrado\n");
		}
	}	
}
void editar_elemento_lista(nodo *lista,int n){
	
	int encontrado=0,nuevodato;
	
	nodo *aux= lista;
	if(lista_vacia(lista)){
		
		printf("lista vacia\n");
	}else{
		
		while(aux!=NULL){
			
			if(aux->dato==n){
				encontrado=1;
				printf("dato encontrado para modificar\n");
				printf("Ingrese el dato nuevo\n");
				scanf("%d",&nuevodato);
				aux->dato=nuevodato;
				printf("dato editado correctamente\n");
				break;
			}
			aux=aux->siguiente;
		}
		if(encontrado==0){
			printf("dato no encontrado\n");
		}
	}
}

void eliminar_elemento_lista(nodo *&lista,int n){
	
	int encontrado=0;
	
	nodo *aux= lista;
	nodo *aux2= lista;
	if(lista_vacia(lista)){
		
		printf("lista vacia\n");
	}else{
		
		while(aux!=NULL){
			
			if(aux->dato==n){
				if(aux==lista){
					lista=aux->siguiente;
				}else{
					aux2->siguiente=aux->siguiente;
					
				}
				printf("Elemento Eliminado\n");
				encontrado=1;
				break;
				
			}
			aux2=aux;
			aux=aux->siguiente;
		}
		if(encontrado==0){
			printf("dato no encontrado\n");
		}
	}
	free(aux);
}

void eliminar_completa_lista(nodo *&lista){
	if(lista_vacia(lista)){
		printf("lista vacia\n");
	}else{
		while(lista != NULL){
			nodo *aux = lista;
			lista = aux->siguiente;
			free(aux);
			
		}
	}printf("\nLista eliminada\n");
}

//////////////////////////////////////////////////////////////

void insertar_elementos_lista(nodo *&lista,int n){
	
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	nodo *aux=lista;
	nodo *aux2;
	
	nuevo->dato = n;
	//nuevo->siguiente = NULL;
	while(aux!=NULL && aux->dato<n){
		aux2=aux;
		aux=aux->siguiente;		
	}
	if(aux==lista){
		nuevo->siguiente=aux;
		lista=nuevo;
	}else{
		aux2->siguiente=nuevo;
		nuevo->siguiente=aux;
	}
	
	
}

////////////////////////Funciones Lista Dobles////////////////////////

void insertar_dato_lista_doble(nodo *&inicio,nodo *&fin,int n){
	
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	nodo *aux=inicio;
	//nodo *aux2;
	
	nuevo->dato = n;
	//nuevo->siguiente = NULL;
	while(aux!=NULL && aux->dato<n){
		aux=aux->siguiente;		
	}
	if(aux==inicio){
		nuevo->anterior=inicio;
		inicio=nuevo;
		nuevo->siguiente=fin;
		fin=nuevo;
	}else if(aux==fin){
		nuevo->anterior=fin;
		aux->siguiente=nuevo;
		nuevo->siguiente=NULL;
		fin=nuevo;
	}else{
		nuevo->siguiente=aux->siguiente;
		aux->siguiente->anterior=nuevo;
		aux->siguiente=nuevo;
		nuevo->anterior=aux;
	}
	
}

void imprimir_Lista_doble(nodo *inicio){
	
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = inicio;
	if(lista_vacia_doble(inicio)){
		
		printf("lista vacia\n");
	}
	while(actual != NULL){ //mientras no sea final de la lista
		//cout<<actual->dato<<" -> "; //mostramos el dato
		printf("%d - ",actual->dato);
		actual = actual->siguiente; //avanzamos a la siguiente posicion de la lista
	}
}

void insertar_dato_lista_doble2(nodo *&inicio,nodo *&fin,int n){
	
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	nodo *aux=inicio;
	nodo *aux2=NULL;
	
	nuevo->dato = n;
	//nuevo->siguiente = NULL;
	while((aux!=NULL) && (aux->dato<n)){
		aux2=aux;
		aux=aux->siguiente;		
	}
	if(inicio==aux){// antes estaba en inicio == NULL
		inicio=nuevo;
		nuevo->anterior=NULL;
		//inicio->siguiente=NULL;
		//inicio->anterior=NULL;
		//fin=inicio; // el profe lo pueso asi fin = nuevo;
	}else{
		aux2->siguiente=nuevo;
		//if(aux->dato>n){
		//nuevo->siguiente=aux;
		//aux=nuevo;
		
		//	}else{
		//	aux2->siguiente=nuevo;
		//nuevo->siguiente=aux;
		
		//	}
		/*
		fin->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->anterior=fin;
		fin=nuevo;
		*/
	}
	nuevo->siguiente=aux;
	printf("Dato agregado correctamente\n");
}

void buscar_lista_doble(nodo *inicio , int n){
	
	nodo * aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	int encontrado=0;
	if(lista_vacia_doble(inicio)){
		
		printf("lista vacia\n");
	}else{
		
		if(inicio != NULL){
			while(aux != NULL){
				
				if(aux->dato == n){
					
					printf("El dato %d fue encontrado\n",n);
					encontrado=1;
					break;
				}
				aux= aux->siguiente;
				
			}
			if(encontrado == 0){
				printf("dato no encontrado \n");
			}
			
		}
	}
	
}
void editar_lista_doble(nodo *inicio , int n){
	
	nodo * aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	int encontrado=0,nuevodato;
	if(lista_vacia_doble(inicio)){
		
		printf("lista vacia\n");
	}else{
		
		if(inicio != NULL){
			while(aux != NULL){
				
				if(aux->dato == n){
					
					encontrado=1;
					printf("dato encontrado para modificar\n");
					printf("Ingrese el dato nuevo\n");
					scanf("%d",&nuevodato);
					aux->dato=nuevodato;
					printf("dato editado correctamente\n");
					break;
					
				}
				aux= aux->siguiente;
				
			}
			if(encontrado == 0){
				printf("dato no encontrado \n");
			}
			
		}
	}
}

void eliminar_elemento_lista_doble(nodo *&inicio,nodo *&fin, int n){
	
	nodo * aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	nodo * aux2 = (nodo*)malloc(sizeof(nodo));
	aux2 = NULL;
	
	int encontrado=0;
	if(lista_vacia_doble(inicio)){
		
		printf("lista vacia\n");
	}else{
		
		if(inicio != NULL){
			while(aux != NULL && encontrado!=1){
				
				if(aux->dato == n){
					
					if(aux == inicio){
						inicio = inicio->siguiente;
						inicio->anterior=NULL;
					}else if(aux==fin){
						fin=aux2;
						aux2->siguiente=NULL;
						
					}else{
						aux2->siguiente=aux->siguiente;
						aux->siguiente->anterior=aux2;
					}
					
					printf("Elemento Eliminado\n");
					encontrado=1;
					break;
				}
				aux2=aux;
				aux= aux->siguiente;
				
			}
			if(encontrado == 0){
				printf("dato no encontrado \n");
			}else{
				free(aux2);
			}			
		}
	}
	
}

void eliminar_lista_doble_completa(nodo *&inicio){
	if(lista_vacia_doble(inicio)){
		
		printf("lista vacia\n");
	}else{
		while(inicio != NULL){
			nodo *aux = inicio;
			inicio = aux->siguiente;
			free(aux);
			
		}
	}printf("\nLista eliminada\n");
	
	
}
bool lista_vacia_doble(nodo *inicio){
	return (inicio == NULL) ? true:false;
}

/////////////////////Funciones del Juego de Josephus////////////////////////

nodo * crearnodo()
{
	nodo * n;
	n = (nodo *) malloc(sizeof(nodo));
	return n;
}

int insertarcircular(nodo *& circular,int c)
{
	nodo * temp,*p;
	p = circular;
	temp = crearnodo();
	temp->dato = c;
	temp->siguiente = NULL;
	if(circular == NULL)
	{
		circular = temp;
		return 1;
	}
	while(p->siguiente !=NULL)
	{
		p = p->siguiente;
	}
	p->siguiente = temp;
	return 1;
}

void listacircular(nodo * circular)
{
	nodo * p =circular;
	while(p->siguiente != NULL)
		p=p->siguiente;
	p->siguiente = circular;
}

int ganadorjosephus(nodo * circular,int inicio,int z,int n)
{
	listacircular(circular);
	nodo *p = circular;
	int cont =z;
	while(1)
	{
		if(p->dato == inicio)
			break;
		p=p->siguiente;
	}
	while(1)
	{
		cont = z-1;
		while(1)
		{
			cont--;
			if(cont==0)
				break;
			p = p->siguiente;
		}
		p->siguiente = p->siguiente->siguiente;
		p = p->siguiente;
		n--;
		if(n==1)
			break;
	}
	return p->dato;
}


/////////////////Funciones de la lista Circular Doble//////////////////////

bool lista_vacia_circular_doble(nodo *inicio){
	return (inicio == NULL) ? true:false;
}

void insertar_dato_lista_circular_doble(nodo *&inicio,nodo *&fin,int n){
	
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	//nodo *aux=inicio;
	//nodo *aux2;
	
	nuevo->dato = n;
	//nuevo->siguiente = NULL;
	
	if(inicio==NULL){
		
		inicio=nuevo;
		inicio->siguiente=inicio;
		fin=inicio;
		inicio->anterior=fin;
	}else{
		
		fin->siguiente=nuevo;
		nuevo->siguiente=inicio;
		nuevo->anterior=fin;
		fin=nuevo;
		inicio->anterior=fin;
	}
	
	printf("Dato agregado correctamente\n");
}

void imprimir_Lista_circular_doble(nodo *inicio){
	
	nodo* aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	if(inicio!=NULL){
		do{
			printf("%d - ",aux->dato);
			aux = aux->siguiente;
		}while(aux != inicio);
		
	}else{
		
		printf("Lista Vacia\n");
	}
	
}



void buscar_lista_circular_doble(nodo *inicio , int n){
	
	nodo * aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	int encontrado=0;
	if(lista_vacia_circular_doble(inicio)){
		
		printf("lista vacia\n");
	}else{
		
		if(inicio != NULL){
			do{
				
				if(aux->dato == n){
					
					printf("El dato %d fue encontrado\n",n);
					encontrado=1;
					break;
				}
				aux= aux->siguiente;
				
			}while(aux != inicio && encontrado!=1);
			if(encontrado == 0){
				printf("dato no encontrado \n");
			}
			
		}
	}
	
}
void editar_lista_circular_doble(nodo *inicio , int n){
	
	nodo * aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	int encontrado=0,nuevodato;
	if(lista_vacia_circular_doble(inicio)){
		
		printf("lista vacia\n");
	}else{
		
		if(inicio != NULL){
			do{
				
				if(aux->dato == n){
					
					encontrado=1;
					printf("dato encontrado para modificar\n");
					printf("Ingrese el dato nuevo\n");
					scanf("%d",&nuevodato);
					aux->dato=nuevodato;
					printf("dato editado correctamente\n");
					break;
					
				}
				aux= aux->siguiente;
				
			}while(aux != inicio && encontrado!=1);
			if(encontrado == 0){
				printf("dato no encontrado \n");
			}
			
		}
	}
}

void eliminar_elemento_lista_circular_doble(nodo *&inicio,nodo *&fin, int n){
	
	nodo * aux = (nodo*)malloc(sizeof(nodo));
	aux = inicio;
	nodo * aux2 = (nodo*)malloc(sizeof(nodo));
	aux2 = NULL;
	
	int encontrado=0;
	if(lista_vacia_circular_doble(inicio)){
		
		printf("lista vacia\n");
	}else if(inicio!=NULL){
		do{
			
			if(aux->dato == n){
				
				if(aux == inicio){
					inicio = inicio->siguiente;
					inicio->anterior=fin;
					fin->siguiente=inicio;
				}else if(aux==fin){
					fin=aux2;
					fin->siguiente=inicio;
					inicio->anterior=fin;
				}else{
					aux2->siguiente=aux->siguiente;
					aux->siguiente->anterior=aux2;
				}
				
				printf("Elemento Eliminado\n");
				encontrado=1;
				//break;
			}
			aux2=aux;
			aux= aux->siguiente;
			
		}while(aux != inicio && encontrado!=1);
		if(encontrado == 0){
			printf("dato no encontrado \n");
		}else{
			free(aux2);
		}			
		
	}
	
}

void eliminar_lista_circular_doble_completa(nodo *&inicio){
	
	if(lista_vacia_circular_doble(inicio)){
		
		printf("lista vacia\n");
	}else if(inicio != NULL){
		
		
		do{
			nodo * aux = (nodo*)malloc(sizeof(nodo));
			aux = inicio;
			inicio = aux->siguiente;
			free(aux);
			
			
		}while(inicio==NULL);
		//inicio=NULL;
		//fin=NULL;
		printf("\nLista eliminada\n");
	}
	
	//printf("\nLista eliminada\n");
	//}
	
	
}


