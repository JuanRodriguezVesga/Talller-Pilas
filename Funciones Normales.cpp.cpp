#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	struct Nodo *sgte;
};
 int l=0;
int vec[80];
void Apilar(Nodo *&, int);
void Desapilar(Nodo*&);
void Cima(Nodo*&);
bool PilaVacia();
void MostrarPila(Nodo *&);
void DestruirPila(Nodo *&);
void Inversa();
void menu();




int main(){
	
	menu();	

	return 0;
	
}

void menu(){
	int op;
	int x;
	Nodo *pila=NULL;
	do{
		
		printf("MENU PILA\n\n");
		printf("1. Apilar\n");
		printf("2. Mostrar Pila\n");
		printf("3. Destruir Pila\n");
		printf("4. Mostrar Cima \n");
		printf("5. Desapilar \n");
		printf("6. Inversa\n");
		printf("7. Salir\n");
		printf(" Ingrese Opcion: ");
		scanf("%d",&op);
		switch(op){
		case 1:
			printf("Ingrese numero a apilar: ");
			scanf("%d",&x);
			printf("\n");
			Apilar(pila,x);
			system("pause");
			system("cls");
			break;
			
		case 2:
			printf("Mostrando pila\n\n");
			MostrarPila(pila);
			system("pause");
			system("cls");
			break;
			
		case 3: 
			DestruirPila(pila);
			system("pause");
			system("cls");
			break;
		
		case 4:
		   printf("Mostrando Cima\n\n");
		   Cima(pila);
		   system("pause");
		   system("cls");
		   break;
		   
		case 5:
			Desapilar(pila);
			system("pause");
			system("cls");
			break;
			
		case 6:
			Inversa();
			system("pause");
			system("cls");
			break;
		 
		
}
		
	}while(op!=4);
	
}

void Apilar(Nodo *&pila, int x){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=x;
	vec[l]=nuevo_nodo->dato;
	nuevo_nodo->sgte=pila;
	pila=nuevo_nodo;
	l++;
	printf("El dato %d se agrego a la pila\n", x);
}

void MostrarPila(Nodo *&pila){
	Nodo *Nueva_pila = pila;
	if(pila==NULL){
		printf("La pila esta vacia!\n");
	}else if(Nueva_pila !=NULL){
		while(Nueva_pila != NULL){
			printf("%d\n",Nueva_pila->dato);
			Nueva_pila = Nueva_pila->sgte;
		}
	}else{
		printf("%d,",Nueva_pila->dato);
	}printf("\n");
}

void DestruirPila(Nodo *&pila){
	while(pila!=NULL){
		Nodo *aux=pila;
		pila=aux->sgte;
		printf("Destruir Pila %d\n", aux->dato);
		delete aux;
	}
}

void Cima(Nodo*& pila){
	int x;
	if(pila==NULL){
    printf("\n\n\tPila vacia...!");
	}else{
		x=pila->dato;
		printf("\n\tLa Cima es %d\n ",x);
	}
}

void Desapilar(){
	int x;
	Nodo p_aux;
}

void Desapilar(Nodo *&pila){
	if(pila==NULL){
		printf("No existe pila\n\n");
	}else{
		Nodo *aux=pila;
		pila=aux->sgte;
		printf("Destruir dato %d\n", aux->dato);
		delete aux;
		}
}

void Inversa(){
	for(int i=0;i<l;i++){
		printf("\t%d\n",vec[i]);
}
	
}

