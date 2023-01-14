#include<stdio.h>
#include<stdlib.h>
#define s scanf
//FUNCION PRICIPAL//
int main()
{
	int menu,res,i;
	float a,n,m,T,S,R;
	//BIENVENIDA//
	printf("\nBienvenido a Cinemania\n");
	printf("\nEl mejor cine de Mexico\n");
	printf("\n");
	printf("Pulse para continuar");
	system("pause>NULL");
	system("cls");

	//MENU//
	do
	{
		system("cls");	
		printf("\nSeleccione la pelicula quiere ver");
		printf("\n");
		printf("\n-1-----Spiderman: No way home");
		printf("\n-2-----Clifford:El gran perro rojo");
		printf("\n-3-----Ghostbusters:El legado");
		printf("\n-4-----Amalgama");
		printf("\n-5-----Rey Richard:Una familia ganadora");
		printf("\n-6-----Encanto\n");
		s("%d", &menu);
		system("cls");
		switch(menu)
		{
			case 1:
			do
			{
				system("cls");
	 			printf("Usted a seleccionado la pelicula de Spiderman: No way home\n");	
	 			printf("Ahora debera dar el numero de boletos que desea comprar(Maximo son 15 por persona)\n");
	 			printf("\n");
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto).\n");
	 			s("%f",&a);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de %ci%co). \n",165,164);
	 			s("%f",&n);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto mayor)\n");
	 			s("%f",&m);
	 			T=a+n+m;
	 			R=T*3;
	 			if(T>0 && T<=15)
	 			{
	 				S=(a*89)+(n*75)+(m*75);
	 				printf("El valor de %.f boletos de adulto es de %.f\n",a,a*89);
	 				printf("El valor de %.f boletos de %ci%co es de %.f\n",n,165,164,n*75);
	 				printf("El valor de %.f boletos de Adulto mayor es de %.f\n",m,m*75);
	 				printf("El valor de los %.f boletos es %.f",T,S);
	 				printf("\n");
	 				printf("Presiones una tecla para confirmar su comprar\n");
	 				system("pause>NULL");
	 				for(i=0;i<=5;i++)
	 				{
	 					printf("\n%.f\t%.f",R,R);
	 				}
	 				printf("\n\nEsta es su codigo para los %.f boletos\n",T);
	 			}
	 			else
	 			{
	 				printf("El valor que ingreso para la compra de boletos es nula\n");
	 			}
	 				printf("Ponga 1 para volver ala comprar de boletos.");
					scanf("%d",&res);
				}
				while(res==1);
				printf("Su compra esta hecha.\n");
			break;
			
			case 2:
			do
			{
				system("cls");
	 			printf("Usted a seleccionado la pelicula de Clifford:El gran perro rojo\n");	
	 			printf("Ahora debera dar el numero de boletos que desea comprar(Maximo son 15 por persona)\n");
	 			printf("\n");
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto).\n");
	 			s("%f",&a);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de %ci%co). \n",165,164);
	 			s("%f",&n);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto mayor)\n");
	 			s("%f",&m);
	 			T=a+n+m;
	 			R=T*3;
	 			if(T>0 && T<=15)
	 			{
	 				S=(a*89)+(n*75)+(m*75);
	 				printf("El valor de %.f boletos de adulto es de %.f\n",a,a*89);
	 				printf("El valor de %.f boletos de %ci%co es de %.f\n",n,165,164,n*75);
	 				printf("El valor de %.f boletos de Adulto mayor es de %.f\n",m,m*75);
	 				printf("El valor de los %.f boletos es %.f",T,S);
	 				printf("\n");
	 				printf("Presiones una tecla para confirmar su comprar\n");
	 				system("pause>NULL");
	 				for(i=0;i<=5;i++)
	 				{
	 					printf("\n%.f\t%.f",R,R);
	 				}
	 				printf("\n\nEsta es su codigo para los %.f boletos\n",T);
	 			}
	 			else
	 			{
	 				printf("El valor que ingreso para la compra de boletos es nula\n");
	 			}
	 				printf("Ponga 1 para volver ala comprar de boletos.");
					scanf("%d",&res);
				}
				while(res==1);
				printf("Su compra esta hecha.\n");	
			break;
			
			case 3:
			do
			{
				system("cls");
	 			printf("Usted a seleccionado la pelicula de Ghostbusters:El legado\n");	
	 			printf("Ahora debera dar el numero de boletos que desea comprar(Maximo son 15 por persona)\n");
	 			printf("\n");
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto).\n");
	 			s("%f",&a);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de %ci%co). \n",165,164);
	 			s("%f",&n);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto mayor)\n");
	 			s("%f",&m);
	 			T=a+n+m;
	 			R=T*3;
	 			if(T>0 && T<=15)
	 			{
	 				S=(a*89)+(n*75)+(m*75);
	 				printf("El valor de %.f boletos de adulto es de %.f\n",a,a*89);
	 				printf("El valor de %.f boletos de %ci%co es de %.f\n",n,165,164,n*75);
	 				printf("El valor de %.f boletos de Adulto mayor es de %.f\n",m,m*75);
	 				printf("El valor de los %.f boletos es %.f",T,S);
	 				printf("\n");
	 				printf("Presiones una tecla para confirmar su comprar\n");
	 				system("pause>NULL");
	 				for(i=0;i<=5;i++)
	 				{
	 					printf("\n%.f\t%.f",R,R);
	 				}
	 				printf("\n\nEsta es su codigo para los %.f boletos\n",T);
	 			}
	 			else
	 			{
	 				printf("El valor que ingreso para la compra de boletos es nula\n");
	 			}
	 				printf("Ponga 1 para volver ala comprar de boletos.");
					scanf("%d",&res);
				}
				while(res==1);
				printf("Su compra esta hecha.\n");
			break;
			
			case 4:
			do
			{
				system("cls");
	 			printf("Usted a seleccionado la pelicula de Amalgama\n");	
	 			printf("Ahora debera dar el numero de boletos que desea comprar(Maximo son 15 por persona)\n");
	 			printf("\n");
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto).\n");
	 			s("%f",&a);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de %ci%co). \n",165,164);
	 			s("%f",&n);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto mayor)\n");
	 			s("%f",&m);
	 			T=a+n+m;
	 			R=T*3;
	 			if(T>0 && T<=15)
	 			{
	 				S=(a*89)+(n*75)+(m*75);
	 				printf("El valor de %.f boletos de adulto es de %.f\n",a,a*89);
	 				printf("El valor de %.f boletos de %ci%co es de %.f\n",n,165,164,n*75);
	 				printf("El valor de %.f boletos de Adulto mayor es de %.f\n",m,m*75);
	 				printf("El valor de los %.f boletos es %.f",T,S);
	 				printf("\n");
	 				printf("Presiones una tecla para confirmar su comprar\n");
	 				system("pause>NULL");
	 				for(i=0;i<=5;i++)
	 				{
	 					printf("\n%.f\t%.f",R,R);
	 				}
	 				printf("\n\nEsta es su codigo para los %.f boletos\n",T);
	 			}
	 			else
	 			{
	 				printf("El valor que ingreso para la compra de boletos es nula\n");
	 			}
	 				printf("Ponga 1 para volver ala comprar de boletos.");
					scanf("%d",&res);
				}
				while(res==1);
				printf("Su compra esta hecha.\n");
			break;
			
			case 5:
			do
			{
				system("cls");
	 			printf("Usted a seleccionado la pelicula de Rey Richard:Una familia ganadora\n");	
	 			printf("Ahora debera dar el numero de boletos que desea comprar(Maximo son 15 por persona)\n");
	 			printf("\n");
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto).\n");
	 			s("%f",&a);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de %ci%co). \n",165,164);
	 			s("%f",&n);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto mayor)\n");
	 			s("%f",&m);
	 			T=a+n+m;
	 			R=T*3;
	 			if(T>0 && T<=15)
	 			{
	 				S=(a*89)+(n*75)+(m*75);
	 				printf("El valor de %.f boletos de adulto es de %.f\n",a,a*89);
	 				printf("El valor de %.f boletos de %ci%co es de %.f\n",n,165,164,n*75);
	 				printf("El valor de %.f boletos de Adulto mayor es de %.f\n",m,m*75);
	 				printf("El valor de los %.f boletos es %.f",T,S);
	 				printf("\n");
	 				printf("Presiones una tecla para confirmar su comprar\n");
	 				system("pause>NULL");
	 				for(i=0;i<=5;i++)
	 				{
	 					printf("\n%.f\t%.f",R,R);
	 				}
	 				printf("\n\nEsta es su codigo para los %.f boletos\n",T);
	 			}
	 			else
	 			{
	 				printf("El valor que ingreso para la compra de boletos es nula\n");
	 			}
	 				printf("Ponga 1 para volver ala comprar de boletos.");
					scanf("%d",&res);
				}
				while(res==1);
				printf("Su compra esta hecha.\n");
			break;
			
			case 6:
			do
			{
				system("cls");
	 			printf("Usted a seleccionado la pelicula de Encanto\n");	
	 			printf("Ahora debera dar el numero de boletos que desea comprar(Maximo son 15 por persona)\n");
	 			printf("\n");
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto).\n");
	 			s("%f",&a);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de %ci%co). \n",165,164);
	 			s("%f",&n);
	 			printf("\nCuantos adultos seran(ingrese el numero de boletos de Adulto mayor)\n");
	 			s("%f",&m);
	 			T=a+n+m;
	 			R=T*3;
	 			if(T>0 && T<=15)
	 			{
	 				S=(a*89)+(n*75)+(m*75);
	 				printf("El valor de %.f boletos de adulto es de %.f\n",a,a*89);
	 				printf("El valor de %.f boletos de %ci%co es de %.f\n",n,165,164,n*75);
	 				printf("El valor de %.f boletos de Adulto mayor es de %.f\n",m,m*75);
	 				printf("El valor de los %.f boletos es %.f",T,S);
	 				printf("\n");
	 				printf("Presiones una tecla para confirmar su comprar\n");
	 				system("pause>NULL");
	 				for(i=0;i<=5;i++)
	 				{
	 					printf("\n%.f\t%.f",R,R);
	 				}
	 				printf("\n\nEsta es su codigo para los %.f boletos\n",T);
	 			}
	 			else
	 			{
	 				printf("El valor que ingreso para la compra de boletos es nula\n");
	 			}
	 				printf("Ponga 1 para volver ala comprar de boletos.");
					scanf("%d",&res);
				}
				while(res==1);
				printf("Su compra esta hecha.\n");
			break;
			
			default:
				printf("\nOpcion no valida\n");		
			break;	
		}
			printf("Ponga 1 para volver al menu si quiere comprar mas boletos.");
			scanf("%d",&res);
	}while(res==1);
	printf("\nGracias por su compra vuelva denuevo.");
	system("pause>NULL");
	return 0;
}