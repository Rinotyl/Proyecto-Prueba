#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>

//PROTOTIPO DE LAS FUNCIONES
void menu();
void cambio(char a[]);
void PonerPelicula();
//void altaCuenta();
void ConsultaPelicula();
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
	char Nom_pelicula[25];
	char Tipo[10];
	char Horarios[5];
	char Estado[5];
}Pelicula;

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


///REGISTRO DE PELICULAS
void PonerPelicula(){
	FILE *pa, *pa2;                                              //AQUI SE CREAN 2 VARIABLEs DE TIPO APUNTADOR CON EL NOMBRE PA Y PA2. ES DECIR, UNA VARIABLE PARA CADA ARCHIVO..
	char r;                                                      //..LA CUEAL VA A CONTENER LA DIRECCION FISICA DE LOS ARCHIVOS UTILIZADOS
	Pelicula nuevo, lista[50];                                      //AQU� SE CREAN DOS OBJETOS DE LA CLASES CLIENTE, UNO ES NUEVO Y EL OTRO ES UN ARREGLO LLAMADO LISTA..
                                                   					//..EL OBJETO NUEVO NOS PERMITIR� ALMACENAR LOS DATOS EN LAS VARIABLES, PARA LUEGO GUARDARLOS EN EL ARCHIVO, M�S ABAJO SE INDICE LA LINEA DONDE SE GUARDAN.
	if (((pa = fopen("Archivo Binario","a+b"))==NULL) || ((pa2 = fopen("Peliculas","a+b"))==NULL))         //FUNCION FOPEN: PERMITE CREAR Y/O ABRIR UN ARCHIVO, SE CREAN 2 ARCHIVOS, UNO BINARIO SOLO PARA SERA USADO PARA LAS BUSQUEDAS Y EL OTRO DE TEXTO , EL DE TEXTO PERMITE LEER LOS CARACTERES DEL TECLADO NORMAL
	{ printf("No se puede abrir el archivo.\n");
		return ;
		}

	int encontro=1,i,ultimo,res;

	rewind(pa); 
	i=0;
	
	while(!feof(pa))                                             //CON ESTE WHILE, SE VA A RECORRER TODO EL ARCHIVO, USAMOS LA FUNCION FEOF PARA RECORRER, LA CUAL RETORNA UN VALOR DISTINTO A CERO SI Y SOLO SI EL INDICADOR A LLEGADO AL FINAL DEL ARCHIVO
	{ if(fread(&nuevo, sizeof(cliente), 1, pa)){                   //LA FUNCION FREAD, DEVUELVE EL NUMERO DE ELEMENTOS LEIDOS EN EL ARCHIVO, POR LO TANTO ESTE NUMERO NOS SIRVE PARA INDICARLE AL ARRAY CUANTAS POSICIONES TENDR�
		lista[i]=nuevo;                                          //TODA LA INFORMACION ALMACENADA EN NUEVO SE LA GUARDARA EN EL ARRAY LISTA..
		i++;}                                                    //.. ESTO SE LO HACE PARA LUEGO COMPARAR
	}

	fflush(stdin);
	printf("\n                               Taquilla\n\n");
	printf(" REGISTRO DE PELICULA\n\n");
	printf(" Nombre de la Pelicula ");
		res=i;
		do{
			gets(nueva.Nom_pelicula);
			
			//PROCESO DE BUSQUEDA DE INFORMACION DEL ID DEL CLIENTE
			ultimo=res-1;
			i=0;
			encontro=1;
			while (i<=ultimo && encontro){
				if (strcmp(lista[i].Nom_pelicula,nuevo.Nom_pelicula)==0) encontro=0;              //COMPARA EL NOMBRE INGRESADO POR TECLADO , CON LOS NOMBRES QUE ESTAN EN EL ARREGLO LISTA
				else i++;
			}
			
			//SI SE ENCUENTRA EL NOMBRE, SE MUESTRA MENSAJE DE QUE YA EXISTE Y SE DEBE INGRESAR OTRO
			if (i<=ultimo){
				printf("\n Nombre de la pelicula ya registrado!\n Presione una tecla para ingresar otra pelicula..");
				getch();
				system("cls");
				printf("\n                               Taquilla\n\n");
				printf(" REGISTRO DE LA PELICULA\n\n");
				printf(" Nombre de la Pelicula ");
			}
		}
		while(i<=ultimo);

	//IMPRIME POR PANTALLA Y SE INGRESAN LOS DATOS
	
	printf(" Tipo(Normal // 3D)"); gets(nuevo.Tipo);
	printf(" Horario"); gets(nuevo.Horarios);
	printf(" Estado de la sala"); gets(nuevo.Estado);

	// CON ESTE DO WHILE SE CONFIRMA SI SE QUIERE REGISTRAR AL CLIENTE, SE DEBE PRESIONAR S PARA CONFIRMAR , N PARA CANCELAR
	do{
		printf("\n");
		printf(" Confirmar Registro de la pelicula: Si[s] / No [n]: "); 
		r=getch();
	}while(r!='S' && r!='s' && r!='N' && r!='n');
	
	
	if (r=='s' || r=='S') {
		fwrite(&nuevo, sizeof(Nom_pelicula),1,pa);                                                            //AQUI SE GUARDAN LOS DATOS EN EL ARCHIVO LLAMADO ARCHIVO BINARIO , LA FUNCI�N FWRITE PERMITE GUARDAR INFORMACI�N CONTENIDA EN LAS VARIABLES A UN ARCHIVO DESTINO
		fprintf(pa2, "%s %s %s %s %s %s\n", nuevo.Nom_pelicula, nuevo.Tipo, nuevo.Horarios, nuevo.Estado );       //AQUI SE GUARDAN LOS DATOS EN EL ARCHIVO DE TEXTO LLAMADO CLIENTES, LA FUNCION FPRINTF AL IGUAL QUE LA FWRITE GUARDA INFORMACION EN LAS VARIABLES
		printf("\n");
		printf("\n 	Pelicula Registrada Correctamente\n"); 
		printf(" Presione una tecla para volver al menu principal..");
	}
	
	else {
		printf("\n\n Pelicula NO Registrada\n"); 
		printf(" Presione una tecla para volver al menu principal..");
	}
	
	fclose(pa);
	fclose(pa2);
	menu();
}