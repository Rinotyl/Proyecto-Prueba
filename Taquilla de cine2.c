#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>

//PROTOTIPO DE LAS FUNCIONES
void menu();
void cambio(char a[]);
void altaCliente();
void altaCuenta();
void consultaCliente();
void consultaC();
void deposito();
void retiro();
void pago();
void transferencia();
void transferenciaDestino(char idDestino[10], float nSaldo);
void intereses();
void reporte();
void movimientof(char idCuenta[10], char idCliente[10],char tipo[1], float cargo);
char fecha();

//ESTRUCTURA CLIENTE Y SUS RESPECTIVAS VARIABLES
typedef struct {
	char idCliente[10];
	char Nombre[50];
	char Ciudad[25];
	char Direccion[25];
	char Edad[15];
	char Telefono[20];
}cliente;

//ESTRUCTURA CUENTA Y SUS RESPECTIVAS VARIABLES
typedef struct {
	char IdCuenta[10];
	char IdCliente[10];
	int nip;
	int nTipoCuenta;
	float nSaldo;
	float nLimiteCredito;
}cuenta;


//ESTRUCTURA MOVIMIENTO Y SUS RESPECTIVAS VARIABLES
typedef struct {
	char IdCuenta[10];
	char IdCliente[10];
	char idTipoMov[1];
	char Descripcion[25];
	float cargo;
	char dFecha[100];
}movimiento;

//FUNCION PRINCIPAL MAIN: EN ESTA FUNCION PRINCIPAL SE LLAMAN A LOS DEMAS METODOS
int main(){

	menu();
	return 0;
}




void menu(){
	char op,op2;
	do{
		printf("\n                               Taquilla de Cine\n\n");
		printf(" MENU PRINCIPAL\n\n");
		printf(" 1. Cartelera\n");
		printf(" 2. Dulceria\n");
		printf(" 3. Compra de Boletos\n");
		printf(" 4. Administracion\n");
		printf(" 5. Salir\n\n");
		printf(" Ingrese opcion: ");
		scanf("%s",&op);
		
		if(op!='1' && op!='2' && op!='3' && op!='4' && op!='5'){
			printf(" Error al ingresar valores. Presione una tecla para volver a ingresar..");
		}		
	}while(op!='1' && op!='2' && op!='3' && op!='4' && op!='5'); 
	
	
	if (op=='1'){
			do{
				printf("\n                               CARTELERA\n\n");
				printf(" PELICULAS\n\n");
				printf(" 1. Registro\n");
				printf(" 2. Consulta\n");
				printf(" 3. Regresar menu principal\n\n");
				printf(" Ingrese opcion: ");
				scanf("%s",&op2);
				
				if(op2!='1' && op2!='2' && op2!='3' && op2!='4'){
					printf("");
					printf(" Error al ingresar valores. Presione una tecla para volver a ingresar..");
					//getch();
				}
			
			}while(op2!='1' && op2!='2' && op2!='3' && op2!='4');
		
		if (op2=='1') altaCliente();   //AQU� SE LLAMA A LA FUNCION ALTA CLIENTES
		if (op2=='2') consultaCliente();     //AQU� SE LLAMA A LA FUNCION CONSULTA CLIENTES
		if (op2=='3'){
			system("cls");
			menu();
		}
		
	}	
		
	if (op=='2'){
			do{
				system("cls");
				printf("\n                               SISTEMA BANCARIO\n\n");
				printf(" CUENTAS\n\n");
				printf(" 1. Registro\n");
				printf(" 2. Consulta\n");
				printf(" 3. Regresar menu principal\n\n");
				printf(" Ingrese opcion: ");
				scanf("%s",&op2);
				
				if(op2!='1' && op2!='2' && op2!='3' && op2!='4'){
					printf("");
					printf(" Error al ingresar valores. Presione una tecla para volver a ingresar..");
					//getch();
				}
			
			}while(op2!='1' && op2!='2' && op2!='3' && op2!='4');
		
		if (op2=='1') altaCuenta();   //AQU� SE LLAMA A LA FUNCOON ALTA CUENTA
		if (op2=='2') consultaC();    
		if (op2=='3'){
			system("cls");
			menu();
		}

	}
	
	if (op=='3'){
			system("cls");
			do{
				printf("\n                               SISTEMA BANCARIO\n\n");
				printf(" DEPOSITO / RETIRO\n\n");
				printf(" 1. Deposito\n");
				printf(" 2. Retiro\n");
				printf(" 3. Regresar menu principal\n\n");
				printf(" Ingrese opcion: ");
				scanf("%s",&op2);
				
				if(op2!='1' && op2!='2' && op2!='3'){
					printf("");
					printf(" Error al ingresar valores. Presione una tecla para volver a ingresar..");
					//getch();
					system("cls");
				}
			
			}while(op2!='1' && op2!='2' && op2!='3');
		
		if (op2=='1') deposito();   //AQU� SE LLAMA A LA FUNCION DEPOSITO
		if (op2=='2') retiro();   //AQU� SE LLAMA A LA FUNCION RETIRO
		if (op2=='3'){
			system("cls");
			menu();
		}

	}
	
	if (op=='4') {
			do{
				printf("\n                               Administracion\n\n");
				printf(" Administracion\n\n");
				printf(" 1. Modificar Cartelera\n");
				printf(" 2. Registro de Dulceria\n");
				printf(" 3. Registro de boletos\n\n");
				printf(" Ingrese opcion: ");
				scanf("%s",&op2);
				
				if(op2!='1' && op2!='2' && op2!='3'){
					printf("");
					printf(" Error al ingresar valores. Presione una tecla para volver a ingresar..");
				}
			
			}while(op2!='1' && op2!='2' && op2!='3');
		
		if (op2=='1') Modificar_Cartelera();   //AQU� SE LLAMA A LA FUNCION DEPOSITO
		if (op2=='2') Registro_Dulces();   //AQU� SE LLAMA A LA FUNCION RETIRO
		if (op2=='3')Registro_Dulces();
		{
			menu();
		}

	}
	if (op=='5')
		exit(0);
}