//----------------------------
//Asiganacion de un string a un vector
//	#include <stdio.h>
//	int main(){
//		char i , vec[] = "PEPE ";
//		for(i = 0 ; i < 6 ; i++){
//			printf("\n%d\t%c", vec[i] , vec[i]);
//		}
//	}
//------------------Strings con Scanf---------------
//	#include <stdio.h>
//	int main(){
//		int i , n = 20;
//		char vec1[20] , vec2[20] , vec3[20];
//		scanf("%s", vec1);
//		scanf("%s", vec2);
//		scanf("%s", vec3);
//		for(i = 0 ; i < 20 ; i++){
//			printf("%c", vec1[i]);
//		}
//		for(i = 0 ; i < n ; i++){
//			printf("%c", vec2[i]);
//		}
//		for(i = 0 ; i < n ; i++){
//			printf("%c", vec3[i]);
//		}
//	}
//------------------Strings con GETS---------------
//	#include <stdio.h>
//	int main(){
//		int i;
//		char v1[20] , v2[20] , v3[20];
//		gets(v1);
//		gets(v2);
//		gets(v3);
//		for(i = 0; i < 20 ; i++){
//			printf("%c", v1[i]);
//		}
//		for(i = 0; i < 20 ; i++){
//			printf("%c", v2[i]);
//		}		
//		for(i = 0; i < 20 ; i++){
//			printf("%c", v3[i]);
//		}
//	}
//------------------Funcion PUTS---------------
//	#include <stdio.h>
//	int main(){
//		char vec[] = "Hola, yo soy pepe.";
//		puts(vec);
//		puts("Y yo soy lola");
//	}
//------------------Funcion PRINITF---------------
//	#include <stdio.h>
//	int main(){
//		char vec[] = "Hola, yo soy pepe";
//		printf("%s\n", vec);
//		printf("%s", "Y yo soy lola");
//		printf("\n\n\n\n");
//		printf("1%12s%12s\n", "Pepe Luis" , "Gonzalez");
//		printf("2%12s%12s\n", "Lola" , "Miranda");
//		printf("\n\n\n\n");
//		printf("1 %12s %12-s\n", "pepe luis" , "gonzalez");
//		printf("2 %12s %12-s\n", "lola" , "miranda");
//	}
//--------------------Funcion STRCMP-----------------------
//PROTOTIPO  		int strcmp(const char *str1 , const char *str2);
//	valor retornado >0			str1 > str2
//	valor retornado =0			str1 = str2
//	valor retornado <0			str1 < str2
//	--------------------------------------------------------
////						Comparacion de strings
//	#include <stdio.h>
//	#include <string.h>
//	
//	#define max 20
//	
//	int main(){
//		char string[max];
//		printf("Ingrese palabras. Para finalizar : FIN\n\n");
//		
//		gets(string);
//		while(strcmp(string , "FIN")){
//			gets(string);
//		}
//		printf("\n\nPrograma terminado\n");
//	}
//------------------------Funcion STRLEN-------------------------
//	PROTOTIPO		size_t strlen(const char *s);
//	size_t = macro definida como unsigned int
//	Devuelve el tamaño de la string
//pag(162)
//------------------------Funcion STRCPY-------------------------
//	PROTOTIPO		strcpy(char *dest , const char *orig);
//	Copia al primer string los valores de la segunda

//-------------------------Largo de STRINGS-----------------------

//	#include <stdio.h>
//	#include <string.h>
//
//	#define max 20
//	
//	int main(){
//		char string[max] , maslargo[max];
//		
//		printf("Ingrese palabras. Para finalizar : FIN\n\n\n");
//		
//		gets(string);	//PRIMERA LECTURA
//		strcpy(maslargo , string); //El mas largo por ahora
//		
//		while(strcomp(string , "FIN")){
//			if(strlen(string) > strlen(maslargo)){
//				strcpy(maslargo , string);
//			}
//			gets(string);	//Nueva lectura
//		}
//		printf("\n\nMas largo : %s \n", maslargo);
//	}
//--------------------------------Comparacion de STRINGS-------------------

//	#include <stdio.h>
//	
//	int main(){
//		char  str1[] = "pepe";
//		char  str2[] = "pepe";
//		
//		if(!strcmp(str1 , str2)){			//si el resultdo es cero
//			printf("SON IGUALES");
//		}else{
//			printf("SON DISTINTOS");
//		}
//	}
//----------------------------Vector de Vectores--------------------------
//	#include <stdio.h>
//	
//	int main(){
//		char ciudad2[][18] = {"TOKYO" , "LONDRES" , "QUITO" , "ROMA" , "TORONTO"};
//		
//		char ciudad[5][18];
//		
//		strcpy( ciudad[0] , "ALEJANDRIA");
//		strcpy( ciudad[1] , "LIMA");
//		strcpy( ciudad[2] , "CARTAGO");
//		strcpy( ciudad[3] , "SPARTA");
//		strcpy( ciudad[4] , "ATENAS");
//	}

//Ingresar 5 strings que no superen los 20 caracteres cada una
//(incluyendo el caracter nulo). Al finializar el ingreso se debe mostrar
//la en pantalla, en orden iinverso al de ingreso.

//	#include <stdio.h>
//	#define max 20
//	#define num 10
//
//	int main(){
//		char mat[num][max];
//		int i;
//		printf("Ingrese 10 palabras.\n\n");
//		
////		INGRESO
//		for(i = 0 ; i < num ; i++){
//			printf("Palabra %3d : ", i + 1);
//			gets( mat[i]);
//		}
//		
////		IMPRESION
//		printf("\n\nVector invertido \n");
//		for(i = num - 1 ; i >= 0 ; i--){
//			printf("\n%s", mat[i]);
//		}
//		printf("\n\nFin del programa");
//	}
//--------------------------------------------------------------------------------
//							Busqueda en vector de strings
//Se ingresaran 10 strings en un vector. Posteriormente se ingresara una string
//adicional con el objeto de buscarala dentro del vector.
//Se debe indicar si este string se encuentra dentro  del vector o no, y en caso
//afirmativo, en que posicion.
//Se limita la longitud de las strings a 20 caracteres incluyendo al caracter nulo.
//Se utiliza el procedimiento tradicional de busqueda secuencial.

//	#include <stdio.h>
//	#include <string.h>
//	
//	#define max 20
//	#define num 5
//	
//	int main(){
//		char mat[num][max] , palabra[max];
//		int i , pos = -1;
//		printf("Ingrese 10 paalabras. \n\n");
//		
////		INGRESO
//		for( i = 0 ; i < num ; i++){
//			printf("Palabra %3d : ", i + 1);
//			gets(mat[i]);
//		}
//		printf("\n\nIngrese  palabra a buscar : ");
//		gets(palabra);
////		
////		BUSQUEDA
//		for( i = 0 ; (i < num) && (pos == -1) ; i++){
//			if(! strcmp( mat[i] , palabra )){
//				pos = i + 1;
//			}
//		}
//		printf("\n\npos = %d\n", pos);
////		IMPRESION
//		printf("\n\nVector de busqueda\n");
//		for(i = 0 ; i < num ; i++){
//			printf("\n%10d\t%s", i , mat[i]);
//		}
//		printf("\n\n");
//		
//		if(pos == -1){
//			printf("%s no se encontro", palabra);
//		}else{
//			printf("%s esta en la posicion %d", palabra , pos);
//		}
//		
//		printf("\n\nFin del programa");
//	}
//---------------------------------------------------------------------------
//						Ordenamiento en vecctores de string
//El objetivo de  este programa es ordenar alfabeticamente una lista de strings
//que se ingresaran de forma similar a la del ejemplo anterior.
//El metodo de ordenamiento utilizado es el burbujeo. Debe prestarse especial
//atencion a la etapa de ordenamiento, en la cual el contenedor de intercambio
//es una string de las mismas caracteristicas de las que integran el vector.
//Naturalmente, la comparacion se realiza utilizando la funcion strcmp() y el
//intercambio con la funcion strcpy().
//
//	#include <stdio.h>
//	#include <string.h>
//	
//	#define max 20
//	#define num 10
//	
//	int main(){
//		char mat[num][max] , aux[max];
//		int i , j;
//		printf("Ingrese 10 palabras. \n\n");
//		
////		INGRESO
//		for(i = 0 ; i <  num ; i++){
//			printf("Palabra %3d : ", i + 1);
//			gets(mat[i]);
//		}
//		
////		ORDENAMIENTO
//		for(i = 0 ; i < num ; i ++){
//			for(j = 0 ; j < num - i -  1 ; j ++){
//				if( strcmp( mat[j] , mat[j + 1]) > 0){
//					strcpy( aux		 	, mat[j]);
//					strcpy( mat[j]	 	, mat[j + 1]);
//					strcpy( mat[j + 1]	, aux);
//				}
//			}
//		}
//		
////		IMPRESION
//		printf("\n\nVector ordenado \n");
//		for(i = 0 ; i < num ; i ++){
//			printf("\n%d	%s", i + 1 , mat[i]);
//		}
//		printf("\nFin del programa");
//	}
//--------------------------------------------------------------------------------
//				Ordenamiento con arrastre, vectores apareados de strings
//En este caso se  manejaran dos vectores apareados correspondientes a una nomina de
//alumnos y sus correspondientes notas.
//Se pretende obtener el listado ordenado en forma decreciente de notas
//Notese que el vector clave de ordenamiento es el de las notas. El vector de nombre
//sera arrastrado por aquel en todos los intercamnios. Para esto se utilizara la
//funcion strcpy() y un vector auxiliar como en el ejemplo anterior.				

//	#include <stdio.h>
//	#include <string.h>
//	
//	#define max 20
//	#define num 10 
//
//	int main(){
//		char alum[num][max] , aux_alum[max];
//		int notas[num] , i , j , aux_notas;
//		
////		INGRESAR
//		for(i = 0 ; i < num ; i++){
//			printf("\n%6d Ingresa el nombre del alumno:	", i +1);
//			fflush(stdin);		//Limpieza del bufer del teclado
//			gets(alum[i]);
//			printf("\n\tLa nota del alumno %s	es:	", alum[i]);
//			scanf("%d", &notas[i]);			
//		}
////		TABLA INGRESADA
//		printf("\n\n\n");
//		printf("\t\tAlumno\tNota\n");
//		for(i = 0 ; i < num ; i++){
//			printf("%d\t%s\t%5d\n", i + 1 , alum[i] , notas[i]);
//		}
//		
////		ORDENAMIENTO
//		for(i = 0 ; i < num ; i++){
//			for(j = 0 ;  j < num - i -1 ; j ++){
//				if(notas[j] < notas[j + 1]){
//					
//					aux_notas 	= notas[j];
//					notas[j] 	= notas[j + 1];
//					notas[j + 1]= aux_notas;
//					
//					strcpy( aux_alum 	, alum[j]);
//					strcpy( alum[j] 	, alum[j + 1]);
//					strcpy( alum[j + 1] , aux_alum);
//				}
//			}
//		}
//		
////		TABLA ORDENADA
//		printf("\t\tAlumnos\tNotas\n");
//		for(i = 0 ; i < num ; i++){
//			printf("\t%3d\t%s\t%5d\n", i + 1 , alum[i] , notas[i]);
//		}
//	}

//					Ejercicios
//---------------------------------------------------------------
//---------------------------01
//Realizar un programa que permita comprobar la diferencia de compor-
//tamiento entre las funciones gets() y scanf();
	
//	#include <stdio.h>
//	#include <string.h>
//	
//	#define num 20
//	
//	int main(){
//		char v1[num] , v2[num] , v3[num];
//		int i;
//		
//		printf("Ingrese una frase:	");
//		
//		scanf("%s" , v1);
//		fflush(stdin);
//		scanf("%s" , v2);
//		fflush(stdin);
//		scanf("%s" , v3);
//		fflush(stdin);
//		printf("La frase capturada por scanf\n");
//		for(i = 0 ; i < num ; i++){
//			printf("%c", v1[i]);
//		}
//		for(i = 0 ; i < num ; i++){
//			printf("%c", v2[i]);
//		}
//		for(i = 0 ; i < num ; i++){
//			printf("%c", v3[i]);
//		}
//		
//		printf("Ingrese una frase:	\n");
//		gets(v1);
//		gets(v2);
//		gets(v3);
//		printf("La frase capturada por gets\n");
//		for(i = 0 ; i < num ; i++){
//			printf("%c", v1[i]);
//		}
//		for(i = 0 ; i < num ; i++ ){
//			printf("%c", v2[i]);
//		}
//		for(i = 0 ; i < num ; i++){
//			printf("%c", v3[i]);
//		}
//	}
//--------------------------02
//Construya una funcion de comparacion de strings similar
//a strcmp() que contemple la existencia de las letras ñ y Ñ

//------------------------03

//	#include <stdio.h>
//	
//	int main(){
//		char vec[2][5] ; int i;
//		for(i = 0 ; i < 2 ;  i++){
//			gets(vec[i]);
//		}
//		printf("\n\n\n");
//		for(i = 0 ; i < 2 ; i++){
//			puts(vec[i]);
//		}
//		printf("\n\n\n");
//		for(i = 0 ; i < 2 ;  i++){
//			gets(vec[i]);
//		}		
//		for(i = 0  ; i < 2 ; i++){
//			printf("%s\n", vec[i]);
//		}
//	}
//---------------------05
//Ingresar la nomina de 10 alumnos (es decir, sus nombres) y sus
//respectivos promedios. Determinar quien es el alumno de mejor
//promedio(suponerlo unico).

//	#include <stdio.h>
//	
//	#define num 10
//	#define max 20
//	
//	int main(){
//		
//	}











	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
