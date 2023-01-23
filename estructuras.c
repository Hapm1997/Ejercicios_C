//-----------------------------------------------------
//					Copia de Estructuras

//	#include <stdio.h>
//	
//	struct par_de_valores{		//Declaracion de tipo
//		int 	a;
//		float   b;
//	};
//	
//	int main (){
//		struct par_de_valores primera , segunda;
//		
//		primera.a = 4;			//Asisgnacion de valores
//		primera.b = 7.5;
//		
//		segunda = primera;		//Copia de estructuras
//		
//		printf("\n\n %d		%.1f", segunda.a , segunda.b);
//	}
//----------------------------------------------------------
//					Tamaño de la estructura

//	#include <stdio.h>
//	
//	int main(){
//		struct{
//			int		a;
//			char	b;
//			int		c;
//		}prueba;
//		printf("int		%d\n", sizeof(int));
//		printf("char	%d\n", sizeof(char));
//		printf("prueba	%d\n", sizeof(prueba));
//	}
//	-----------------------------------------------------------
//			Copia de vectores utilizando estructuras
//En este ejemplo se declara el tipo de estructura 'vector' que
//contiene un campo vector de 4 enteros, denominado 'vec'.
//Se declaran dos variables del tipo de struct vector, denominadas vec1
//y vec2.
//No confundir a estas ultimas con vectores, dado que son estructuras.
//
//	#include <stdio.h>
//	
//	struct vector{
//		int vec[4];
//	};
//	
//	int main(){
//		struct vector vec1 , vec2;
//		int i;
//		
//		for(i = 0 ; i < 4 ; i++){
//			vec1.vec[i] = 2 * i;
//		}
//		
//		for(i = 0 ; i < 4 ; i++){				//primera impresion
//			printf("%10d", vec2.vec[i]);
//		}
//		
//		vec2 = vec1;							//copia de las estructuras
//		
//		printf("\n\n\n");
//		
//		for(i = 0 ; i < 4 ; i++){				//segunda impresion
//			printf("vec2	%10d\t\tvec1	%10d\n", vec2.vec[i] , vec1.vec[i]);
//		}
//	}
//-----------------------------------------------------------------------
//		Transferencia de una estructura por valor a una funcion
	
//	#include <stdio.h>
//	
//	int main(){
//		struct{
//			int 	ent;
//			char	car;
//			float	flo;
//		} estr;
//		
//		estr.ent = 25;
//		estr.car = 'A';
//		estr.flo = 7.34567;
//		
//		imprimir( estr);		//Llamada a la funcion
//	}
//	
//	
//	void imprimir ( struct {
//						int a;
//						char c;
//						float f;
//					} param)
//	{
//		printf("%10d%10c%20f", param.a , param.c , param.f);
//	}
//------------------------------------------------------------------------------------
//		Declaracion de tipos globales y locales de struct
//	#include <stdio.h>
//	
//	struct nueva{			//Declaracion de tipo global
//		int 	ent;
//		char 	car;
//		float	flo;
//	};
////	void imprimir ( struct nueva );
//	int main(void){
//		
//		struct nueva estr;	//Variable local con un tipo global
//		
//		estr.ent = 25;
//		estr.car = 'A';
//		estr.flo = 7.34567;
//		
//		imprimir( estr);
//	}
//	
//	void imprimir ( struct nueva param){		//Se reconoce el tipo global
////		clrscr();
//		printf("%10d%10c%20f", param.ent , param.car , param.flo);
//	}
//---------------------------------------------------------------------------------------
//				Retorno de estructuras desde funciones
//En este ejemplo sencillo se pide el ingreso de los campos de una estructura de tipo 
//struct fecha , cuyo tipo de dato fue declarado globalmente.
//Se transfiere esta estructura a la funcion corregir(), la cual verifica si se trata del
//29 de febrero y en ese caso, transforma la fecha en el 1 de marzo.
//Corregida o no dicha fecha, la mencionada funcion la retorna al programa invocante donde
//se la almacena en la misma variable estructura 'hoy', que fue utilizada para  transferir
//hacia la funcion.
//Asimismo notese la utilizacion del '&' en la lectura de scanf() para cada uno de los campos
//de la estructura. Esto es asi debido a que el nombre de cada campo de una estructura es una 
//variable y no una direccion.
	
//	#include <stdio.h>
//	
//	struct fecha{
//		int dia;
//		int mes;
//		int anio;
//	};
//	
//	struct fecha corregir(struct fecha);		//Prototipo de la funcion
//	
//	int main (void){
//		struct fecha hoy;
//		printf("Ingrese la fecha con formato DD-MM-AA	");
//		scanf("%d-%d-%d", &hoy.dia , &hoy.mes , &hoy.anio);
//		
//		hoy = corregir(hoy);
//		
//		printf("\n\nFecha correcta: ");
//		printf("%02d-%02d-%02d", hoy.dia , hoy.mes , hoy.anio);
//	}
//	
//	struct fecha corregir(struct fecha dia){
//		if( dia.dia == 29 && dia.mes == 2){
//			dia.dia = 1;
//			dia.mes = 3;
//		}
//		return dia;
//	}
//------------------------------------------------------------------------------------
//				Ordenamiento de vector de estructuras
//Se ingresaran los datos correspondientes a 20 alumnos. Estos datos consisten en:
//-nombre(string de 20 caracteres) -sexo(char) -promedio(float).
//Se pide permitir el ingreso de los datos  y  posteriormente mostrarlos en pantalla 
//ordenados alfabeticamente.

//El programa se modulizara utilizando tres funciones. Una de estas, la funcion ordenar(),
//es la que iinteresa fundamentalmente en este ejemplo.

//	#include <stdio.h>
//	#define n 20
//	
////	DECLARACION DE TIPO
//	struct alumno{
//		char nombre[20];
//		char sexo;
//		float promedio;
//	};
//	
////	PROTOTIPOS
//	void ingresar ( struct alumno[] , int);
//	void ordenar ( struct alumno[] ,  int);
//	void imprimir ( struct alumno[] , int);
//	
//	int main(void){
//		struct alumno dato[n];
//		
//		ingresar ( dato , n);
//		ordenar ( dato , n);
//		imprimir ( dato , n);
//	}
//	
//	void ingresar ( struct alumno v[] , int num){
//		int i;
//		float f;
//		for(i = 0 ; i < num ; i++){
//			printf("Inrese el nombre del alumno:	");
//			fflush(stdin);
//			gets( v[i].nombre);
//			
//			printf("Ingrese el sexo M/F:	");
//			v[i].sexo = getchar();
//			
//			printf("\nIngrese el promedio del alumno: ");
//			scanf("%f", &f);
//			v[i].promedio = f;
//		}
//	}
//
//	void ordenar ( struct alumno v[] , int num){
//		struct alumno aux;
//		int i , j;
//		for(i = 0 ; i < num ; i++){
//			for(j = 0 ; j < num ; j++){
//				if(strcmp( v[j].nombre , v[j + 1].nombre) > 0){
//					aux 	= v[j];
//					v[j]	= v[j + 1];
//					v[j + 1]= aux;
//				}
//			}
//		}
//	}
//	
//	void imprimir( struct alumno v[] , int num){
//		int i ;
//		for(i =  0 ; i < num ; i++){
//			printf("\n%20s%10c%12.2f", v[i].nombre , v[i].sexo , v[i].promedio);
//		}
//	}
//----------------------------------------------------------------------------------------
//		ESTRUCTURAS ANIDADAS
//Se planteara en este caso un programa similar al del ejemplo  de ordenamiento anterior. En 
//esta ocacion se ingresaran los datos de 20 alumnos compuestos por nombre, promedio , fecha 
//nacimiento. Esta fecha estara constituida por una estructura de tipo struct fecha(vista en un
//ejemplo anterior).
//Se desea mostrar los datos de los alumnos en orden creciente de edad. Como consideracion se
//entiende que todos han nacido en el sigolo xx.

//	#include <stdio.h>
//	#define n  5
//	
//	struct fecha {
//		int dia;
//		int mes;
//		int anio;
//	};
//	
//	struct alumno {
//		char nombre[20];
//		struct fecha nacim;
//		float promedio;
//	};
//	
////	PROTOTIPOS
//	void ingresar ( struct alumno[] , int);
//	void ordenar ( struct alumno[] , int);
//	void imprimir ( struct alumno[] , int);
//	unsigned int dias ( struct fecha);
//	
//	int main (void){
//		struct alumno dato[n];
//		
//		ingresar( dato , n);
//		ordenar( dato , n);
//		imprimir( dato , n);
//	}
//	
//	void ingresar ( struct alumno v[] , int num){
//		int i;
//		float f;
//		
//		for(i  = 0 ; i < num ; i++){
//			printf("Ingrese el nombre del alumno	:	");
//			fflush(stdin);
//			gets(v[i].nombre);
//			
//			printf("Ingrese la fecha con formato DD-MM-AA	");
//			scanf("%d-%d%d", &v[i].nacim.dia , &v[i].nacim.mes , &v[i].nacim.anio);
//			
//			printf("Ingrese el promedio del alumno:		");
//			scanf("%f", &f);
//			v[i].promedio = f;
//		}
//	}
//	
//	void ordenar ( struct alumno v[] ,  int num){
//		struct alumno aux;
//		int i , j;
//		for(i = 0 ; i < num - 1 ; i ++){
//			for(j = 0 ; j <  num - i - 1 ; j++){
//				if(dias(v[j].nacim) < dias(v[j + 1].nacim)){
//					aux		= v[j];
//					v[j]	= v[j + 1];
//					v[j + 1]= aux;
//				}
//			}
//		}
//	}
//	
//	void imprimir (struct alumno v[] , int num){
//		int i;
//		for (i = 0  ; i < num ; i++){
//			printf("\n%20s%10d%4d%4d%12.2f", v[i].nombre , v[i].nacim.dia ,  v[i].nacim.mes , v[i].nacim.anio , v[i].promedio);
//		}
//	}
//
//	unsigned int dias ( struct fecha date){
//		long x;
//		x = 365 * date.anio + 31 * date.mes + date.dia ;
//		return x;
//	}
//------------------------------------------------------------------
//					WEST POINT (PAG.190)

//	#include <stdio.h>
//	#define max		10
//	#define max_mat 6
//	
//	struct soldado {
//		int legajo;
//		char nom[20];
//		int nota[max_mat];
//		char disponible;
//	};
//	
//	int main (){
//		struct soldado dato[max];
//		int i , codigo , cantidad , vacantes = max;
//		
////		INGRESO
//		ingreso( dato , max);
//		while(vacantes){
//			
////			PEDIDOS
//			printf("\n\nIngrese codigo de asignatura preferencial	");
//			scanf("%d", &codigo);
//			codigo--;		//AJUSTE A LA POSICION DEL VECTOR
//			printf("\n\nIngrese la  cantidad de comandos solicitada		");
//			scanf("%d", &cantidad);
//			
////			ORDENAMIENTO
//			ordena( dato , max , codigo);
//			
////			ASIGNACION
//			if(vacantes < cantidad){
//				printf("No alcanzan");
//				vacantes = 0;
//			}else{
//				vacantes -= cantidad;
//			}
//			
//			for(i = 0 ; (i < max) && cantidad ; i++){
//				if( dato[i].disponible){
//					dato[i].disponible = 0;
//					cantidad--;
//					printf("\n\t%d\t%20s\t%d" , dato[i].legajo , dato[i].nom , dato[i].nota[codigo]);
//				}
//			}
//		}
//	}
//	
//	ingreso (struct soldado  ficha[] , int n){
//		int i , j;
//		
//		for(i = 0 ; i < n ; i++){
//			printf("\nLegajo	:	");
//			scanf("%d", &ficha[i].legajo);
//			fflush(stdin);
//			printf("\nNombre	:	");
//			gets(ficha[i].nom);
//			printf("\nNotas		:	");
//			
//			for(j = 0 ; j < max_mat ; j++){
//				scanf("%D", &ficha[i].nota[j]);
//			}
//			ficha[i].disponible = 1;
//		}
//	}
//	
//	ordena ( struct soldado ficha[] , int n , int codigo){
//		int i ,  j;
//		struct soldado aux;
//		for(i = 0 ; i < n - 1 ; i++){
//			for(j = 0 ; j < i - 1 ; j++){
//				if(ficha[j].nota[codigo] < ficha[j + 1].nota[codigo]){
//					aux 	= ficha[j];
//					ficha[j]= ficha[j  + 1];
//					ficha[j + 1] = aux;
//				}
//			}
//		}
//	}

//--------------------------------------------------------
//				EJERCICIOS
//------------------------------------------------------01
//Los datos de 130 integrantes de las divisiones inferiores de un club se 
//encuentran almacenados en un vector de estructuras de la siguiente manera:
//	Nombre(string de 20 caracteres) , sexo(char) , fecha de nacimiento(estruc-
//	tura de tipo fecha: int dia , int mes , int año).
//Se pide mostrar los nombres discriminados por sexo y categoria sabiendo que
//juveniles incorpora hasta los nacidos en 2005 , cadetes hasta 2007 , infantiles 
//hasta 2009.
	
//	#include <stdio.h>
////	#define n 10
//	
//
//	
//	struct fecha{
//		int dia;
//		int mes;
//		int anio;
//	};
//	
//	struct integ{
//		char nombre[20];
//		char sexo;
//		struct fecha nacim;
////		struct categ tipo;
//	};
//	
//	void ingresar(struct integ datos[] , int n);
//	void categoria( struct integ datos[] , int n );
//	
//	int main(void){
//		struct integ datos[5];
//		int n = 5;
//		
//		ingresar( datos , n);
//		printf("\n\n\n");
//		categoria( datos , n);
//	}
//
//	void ingresar( struct integ datos[] , int n){
//		int i;
//		
//		for(i = 0 ; i < n ; i ++){
//			printf("\n\tIngresa el nombre del integrante:	");
//			fflush(stdin);
//			gets(datos[i].nombre);
//			
//			printf("\n\tIngresa el sexo del integrante	M/F:"	);
//			datos[i].sexo = getchar();
//			
//			printf("\n\tIngresa su nacimiento con el siguiente formato DD-MM-AAAA:	");
//			scanf("%d-%d-%d", &datos[i].nacim.dia , &datos[i].nacim.mes , &datos[i].nacim.anio);
//		}
//		printf("\n\t\tLos integrantes ingresados son:\n");
//		for(i = 0 ; i < n ; i++){
//			printf("\n\t%s\t%c\t%d%d%d", datos[i].nombre , datos[i].sexo , datos[i].nacim.dia , datos[i].nacim.mes , datos[i].nacim.anio);
//		}
//	}
//	
//	void categoria( struct integ datos[] , int n){
//		int i;
//		printf("\n\tNombre\tSexo\tCaegoria");
//		for(i = 0 ; i < n ; i++){
//			if(datos[i].nacim.anio <= 2005){
//				printf("\n\t%s \t%c \tJuvenil", datos[i].nombre , datos[i].sexo );
//			}else{
//				if(datos[i].nacim.anio <= 2007){
//					printf("\n\t%s \t%c \tCadete", datos[i].nombre , datos[i].sexo);
//				}else{
//					printf("\n\t%s \t%c \tInfantil", datos[i].nombre , datos[i].sexo);
//				}
//			}
//		}
//		
////		for(i = 0 ; i < n ; i++){
////			priintf("\n\t%s \t%c \t%s", datos[i].nombre , datos[i].sexo , cat[i]);
////		}
//	}
//----------------------------------------------------------------------02---
Se desea organizar un torneo de tenis doble mixto con 16 parejas. Los datos
de los participantes son
	Nombre
	Sexo
	Handicap(int) 
Se pide:
	a.Estructurar los datos y permitir su ingreso desde teclado utilizando
	  para ello un solo vector de estructutras.
	b.Indicar cuales son las parejas formadas considerando que el hombre de
	  mayor handicap debe jugar con la mujer de menor handicap y viceversa.
	c.Indicar los nombres de la pereja cuya suma de handicaps es la maxima.  















	
	
	
	
	
	
	
	
	
	
