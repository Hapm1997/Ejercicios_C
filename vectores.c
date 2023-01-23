//# include <stdio.h>
//# define n 5
//-----------------Ejemplo 01--------------------
//	int main(){
//		int vec[n] , i;
//		for(i = 0 ; i < n ; i++){
//			printf("\n vec[%d] = ", i);
//			scanf("%d", &vec[i]);
//		}
//		printf("\n\n");
//		for(i = 0 ; i < n ; i++){
//			printf("%7d" , vec[i]);
//		}
//	}
//-----------------Copiar dos vectores-------------------
//	int main(){
//		int vec1[n] , i , e;
//		int vec2[] = { 1 , 2 , 3 , 4 , 5};
//		
//		for(i = 0 ; i < n ; i++){
//			vec1[i] = vec2[i];
//		}
//		for(i = 0 ; i < n ; i++){
//			printf("vec1[%d] = %7d		vec2[%d] = %7d \n", i , vec1[i] , i , vec2[i]);
//		}
//	}
//----------------Valores superiores al promedio------------
//	int main(){
//		int vec[n] , i;
//		int acum = 0 , cont = 0;
//		float prom;
//		
////		Ingreseo de valores
//		for(i = 0 ; i < n ; i++){
//			printf("\n vec[%d] = ", i);
//			scanf("%d", &vec[i]);
//		}
//		
////		Calculo del promedio
//		for( i = 0 ; i  < n ; i++){
//			acum = acum + vec[i];
//		}
//		prom = (float)acum / n;
//		
//		printf("\n\n");
//		for(i = 0 ; i < n ; i++){
//			printf("%7d", vec[i]);
//			if(vec[i] > prom){
//				cont++;
//			}
//		}
//		printf("\n\n Hay %d valores mayores que %.2f.",  cont , prom);
//	}
//---------------------------
//	int main(){
//		int vec[5];
//		int pos = 4000;
//		printf("Leyendo posicion %d : %d", pos , vec[pos]);
//	}
//]------------------Transferencia de Vectores a funciones----------------
//# define z 6
//	Prototipo de la funcion
//	void funcion(int[z] , int);
//	
//	int main(){
//		int vec[z] , i , a = 3;
//		
//		for(i = 0 ; i < z ; i++){
//			vec[i] = i;
//		}
//		
//		funcion( vec , a);
//		
//		printf("\n Valor de a = %d \n\n\n\n\n", a);
//		printf("Valores del vector \n\n");
//		
//		for(i = 0 ; i  < n  ; i++){
//			printf("%7d", vec[i]);
//		}
//	}
//	
//	void funcion( int vector[z] , int a){
//		int i;
//		for(i = 0 ; i < n ; i++){
//			vector[i] = vector[i] * 2;
//		}
//		a = 8;
//	}
//-------------------------Tamaño  de los vectores-----------------
//	#define z 6
////	Prototipo
//	void funcion(int[]);
//	
//	int main(){
//		int vec[z];
//		printf("\n\n Tamaño de vec = %d", sizeof(vec));
//		funcion(vec);	
//	}
//	
//	void funcion(int vector[]){
//		printf("\n\n Tamaño de vector = %d", sizeof(vector));
//	}
//----------------Busqueda secuencial I-------------------------------------
//Se construira una funcion que reciba un vector de enteros, su tamaño y un 
//valor a buscar en el vector.
//La funcion retornara la posicion del ultimo valor encontrado, si este se
//encuentra en el vector, o -1  si no lo encuentra. 

//	# define a 6
	
//	int buscar1( int vec[], int a , int valor);
//	
//	int main(){
//		int vec[6] = { 2 , 4 , 6 , 8 , 4 , 5};
//		int valor, a = 6;
//		printf("Ingrese un numero\n");
//		scanf("%d", &valor);
//		printf("El valor %d esta en la ultima posicion enccontrada = %d", valor , buscar1(vec , a , valor));
//	}
//	
//	int buscar1( int vector[] , int a , int valor){
//		int i , pos = -1;
//		for(i =  0 ; i < a ; i++){
//			if(vector[i] == valor){
//				pos = i + 1;
//			}
//		}
//		return pos;
//	}
//-----------------------------Busqueda secuencial II------------------
//Se construira una funcion que reciba un vector de enteros, su tamaño y un 
//valor a buscar en el vector.
//La funcion retornara la posicion del primer valor encontrado, si este se
//encuentra en el vector, o -1  si no lo encuentra. 

//	int buscar2( int vec[], int a , int valor);
//	
//	int main(){
//		int vec[6] = { 2 , 4 , 6 , 8 , 4 , 5};
//		int valor, a = 6;
//		printf("Ingrese un numero\n");
//		scanf("%d", &valor);
//		printf("El valor %d esta en la primera posicion enccontrada = %d", valor , buscar2(vec , a , valor));
//	}
//
//	int buscar2( int vector[] , int l , int valor){
//		int i , pos = -1;
//		for( i = 0 ; (i < l) && (pos < 0) ; i++){
//			if(vector[i] == valor){
//				pos = i + 1;
//			}
//		}
//		return pos;
//	}
//	-----------------------------Busqueda binaria iterativa-------------------
//La busqueda binaria se efectua sobre un vector ordenado
	
//	int busbin( int vec[], int a , int valor);
//	
//	int main(){
//		int vec[6] = { 1 , 2 , 3 , 4 , 5 , 6};
//		int valor, a = 6;
//		printf("Ingrese un numero\n");
//		scanf("%d", &valor);
//		printf("El valor %d esta en la primera posicion enccontrada = %d", valor , busbin(vec , a , valor) + 1);
//	}
////	Busqueda Binaria
//	int busbin(int vector[] , int l , int valor){
//		int bajo , alto , medio;
//		bajo = 0;
//		alto = l - 1;
//		
//		while(bajo <= alto){
//			medio = (bajo + alto) / 2;
//			if(vector[medio] == valor){
//				return medio; //LO ENCONTRAMOS
//			}
//			if(valor < vector[medio]){
//				alto = medio - 1;
//			}else{
//				bajo = medio +1;
//			}
//		}
//		return -1;
//	}
//----------------------------------Busqueda  del minimo------------------
//Se construira una funcion que reciba un vector de enteros y su longitud,
//y retorne la posicion dentro del vector del elemento  del valor minimo.
//En caso de haber dos o mas valores minimos iguales se retorna la posicion
//del primero de ellos.

//	int minimo( int vec[], int a);
//	
//	int main(){
//		int vec[6] = {3 , 6 , 4 , 2 , 7 , 1 };
//		int a = 6;
////		printf("Ingrese un numero\n");
////		scanf("%d", &valor);
//		printf("El valor minimo esta en la posicion enccontrada = %d" , minimo(vec , a) + 1);
//	}
//
//	int minimo( int vector[] , int l){
//		int i , posMin = 0;
//		for( i = 0 ; i < l  ; i++){
//			if(vector[i] < vector[posMin]){
//				posMin = i;
//			}
//		}
//		return posMin;
//	}
//--------------------------------Intercambio entre el minimo y el primero-------------------
//Este ejemplo es una extension del anterior y prepara el terreno para el proximo tema.
//Se trata de intercambiar el elemento de valor minimo con el primero, de manera de
//dejar el menor valor en el primer lugar.
	
//	int cambio( int vec[] , int a);
//	int main(){
//		int i , vec[6] = {3 , 0 , 4 , 2 , 7 , 1 };
//		int a = 6;
//		printf("Vector sin modificar\n");
//		for(i = 0; i < a ; i++){
//			printf("Valor = %d		Pos. = %d\n" , vec[i] , i );	
//		}
//		printf("\n\n\n");
//		printf("Vector  modificado\n");
//		cambio(vec , a);
//		for(i = 0 ; i < a ; i++){
//			printf("Valor = %d		Pos. = %d\n	" , vec[i] , i);
//		}
//	}
//
//	int cambio(int vector[] , int l){
//		int i , aux , posMin = 0;
//		for(i = 1 ; i < l ; i++){
//			if(vector[i] < vector[posMin]){
//				posMin = i;
//			}
//		}
//		aux 			= vector[0];
//		vector[0] 		= vector[posMin];
//		vector[posMin]  = aux;
//		return vector[6];
//	}
//---------------------------Ordenamiento por seleccion---------------
//		void seleccion (int vector[] , int a);
//		int main(){
//			int i , vec[6] = {3 , 0 , 4 , 2 , 7 , 1 };
//			int a = 6;
//			printf("Vector sin modificar\n");
//			for(i = 0; i < a ; i++){
//				printf("Valor = %d		Pos. = %d\n" , vec[i] , i );	
//			}
//			printf("\n\n\n");
//			printf("Vector  ordenado de menor a mayor\n");
//			seleccion(vec , a);
//			for(i = 0 ; i < a ; i++){
//				printf("Valor = %d		Pos. = %d\n	" , vec[i] , i);
//			}
//		}		
//		void seleccion ( int vector[] , int l){
//			int i , posMin;
//			int aux , prim;
//			for(prim = 0 ; prim < l-1 ; prim ++){
//				posMin = prim;
//				for(i = prim+1 ; i < l ; i++){//----------BUSQUEDA DEL MINIMO
//					if(vector[i] < vector[posMin]){
//						posMin = i;
//					}
//				}
////				-----------INTERCAMBIO
//				aux 			= vector[prim];
//				vector[prim]	= vector[posMin];
//				vector[posMin]	= aux;
//			}
//			return vector[l];
//		}
//---------------------------Ordenamiento  por burbujeo-------------------

//void burbujeo (int vector[] , int l);
//
//int main(){
//	int i , vec[6] = {3 , 0 , 4 , 2 , 7 , 1 };
//	int a = 6;
//	printf("Vector sin modificar\n");
//	for(i = 0; i < a ; i++){
//		printf("Valor = %d		Pos. = %d\n" , vec[i] , i );	
//	}
//	printf("\n\n\n");
//	printf("Vector  ordenado de menor a mayor\n");
//	burbujeo(vec , a);
//	for(i = 0 ; i < a ; i++){
//		printf("Valor = %d		Pos. = %d\n	" , vec[i] , i);
//	}
//}	
//
//
//void burbujeo(int vector[] , int l){
//	int i , j , aux;
//	for(i = 0 ; i < l -1 ; i++){
//		for(j = 0 ; j < l - i -1 ; j++){
//			if (vector[j] > vector[j+1]){
//				aux 			= vector[j];
//				vector[j]		= vector[j + 1];
//				vector[j + 1]	= aux;
//			}
//		}
//	}
//	return vector[l];
//}
//-------------------------Apareamiento de vectores--------------
//	#include <stdio.h>
//	#define n 5
//	void mostrar (int cuenta[] , char tipo[] , float saldo[] , int l);
//	void acceso (int cuenta[] , char tipo[] , float saldo [] , int l , int c);
//	int buscar (int cuenta[] , int l , int num);
//	
//	int main(){
//		int cuenta[n] 	= {343 , 543 , 567 , 785 , 946};
//		char tipo[n] 	= {'B' , 'C' , 'A' , 'C' , 'A'};
//		float saldo[n] 	= {453.43 , 567.63 , 876.34 , 458.67 , 353.87};
//		
//		int c;
//		
//		mostrar(cuenta , tipo , saldo , n);
//		printf("\n\nNumero de cuenta a consultar = ");
//		scanf("%d", &c);
//		acceso(cuenta , tipo , saldo , n , c);
//	}
//	
//	void mostrar(int cuenta[] , char tipo[] , float saldo[] , int l){
//		int i;
//		printf("\n\t\t	Cuenta	\t	Tipo	\t	Saldo\n\n");
//		for(i = 0 ; i < l ; i++){
//			printf("\n%25d %14c %20.2f", cuenta[i] , tipo[i] , saldo[i]);
//		}
//	}
//	
////	MUESTRA CAMPOS RESULTANTES DE  LA BUSQUEDA
//	void acceso (int cuenta[] , char tipo[] , float saldo[] , int l , int c){
//		int pos;
//		pos = buscar(cuenta , l , c);
//		if(pos < 0){
//			printf("\n\n\nNumero de cuenta inexistente\n\n");
//		}else{
//			printf("\n\n");
//			print("%25d %14c %20.2f", cuenta[pos] , tipo[pos] , saldo[pos]);
//		}
//	}
////	RETORNA LA POSICION DE LA CUENTA BUSCADA O -1
//	int buscar(int cuenta[] , int l , int num){
//		int i;
//		for(i = 0 ; i < l ; i++){
//			if(cuenta[i] == num){
//				return i;
//			}
//		}
//		return -1;
//	}
//-------------------------------------------------------------------
//Construir, mostrar y acceder a los vectores apareados.
//
//Se declara un sistema de 5 cuentas y se cargan los vectores correspondientes
//en el momento de la declaracion.
//
//Se presenta en pantalla el sistema de 3 vectores cargados y se pide el ingreso
//de un numero de cuenta, que se buscara dentro del vector cuenta().
//
//La busqueda propiamente dicha la realiza la funcion buscar() que es similar a la
//presentada en el ejemplo de busqueda secuencial.
//
//La funcion acceso() muestra en pantalla el contenido de los 3 campos habiendo 
//obtenido su posicion de la funcion buscar().
//
//Si esta retorno -1 se informa que el numero de cuenta no esta contenido en el vector.
//#include <stdio.h>
//#define n 5
	
//	void mostrar (int cuenta[] , char tipo[] , float saldo[] , int n);
//	void acceso (int cuenta[] , char tipo[] , float saldo[] , int n , int c);
//	int buscar (int cuenta[] , int l , int c);
//	void ordenar(int cuenta[] , char tipo[] , float saldo[] , int n);
//	
//	int main(){
//		int i , n =  10 , c;
//		int cuenta[10] 	= { 723 , 345 , 564 , 653 , 276 , 234 , 645 , 985 , 123 , 864};
//		float saldo[10]  = { 543.23 , 654.89 , 234.32 , 456.43 , 869.34 , 782.23 , 234.54  , 345.45 , 678.23 , 345.65};
//		char  tipo[510]	= { 'A'  , 'B'  , 'C' , 'A'  , 'C' , 'A' , 'C' , 'B' , 'A' , 'C'};
//		
//		mostrar(cuenta , tipo , saldo , n);
//		
//		printf("\n\n");
//		printf("Ingrese el numero de cuenta:\n");
//		scanf("%d" , &c);
//		printf("\n\n");
//		
//		acceso(cuenta , tipo , saldo , n , c);
//		
//		printf("\n\n");
//		ordenar(cuenta , tipo , saldo , n);
//		
//	}
//	
//	void mostrar (int cuenta[] , char tipo[] , float saldo[] , int l){
//		int i;
//		for(i = 0 ; i < l ; i++){
//			printf("Cuenta: %d		Tipo: %c		Saldo: %.2f \n", cuenta[i] , tipo[i] , saldo[i]);
//		}
//	}
//	
//	int buscar (int cuenta[] , int l , int c){
//		int i;
//		for(i = 0 ; i < l ; i++){
//			if(cuenta[i] == c){
//				return i;
//			}	
//		}
//		return -1;
//	}
//	
//	void acceso (int cuenta[] , char tipo[] , float saldo[] , int l , int c){
//		int i , pos;
//		pos = buscar(cuenta , l , c);
//		if(pos < 0){
//			printf("La cuenta ingresada no existe\n");
//		}else{
//			printf("Cuenta: %d		Tipo: %c		Saldo: %.2f\n", cuenta[pos] , tipo[pos] , saldo[pos]);
//		}
//	}
//	
//	void ordenar (int cuenta[] , char tipo[] , float saldo[] , int n){
//		int j , i , e , auxInt ; 
//		char auxChar ; 
//		float auxFlo;
//		
//		for(i = 0 ; i < n ; i++){
//			for(e = 0 ; e < n ; e++){
//				if(tipo[e] > tipo[e + 1] || (tipo[e] == tipo[e + 1] && cuenta[e] > cuenta[e + 1])){
//					auxInt = cuenta[e];
//					cuenta[e] =  cuenta[e + 1];
//					cuenta[e + 1] = auxInt;
//					
//					auxChar = tipo[e];
//					tipo[e] = tipo[e + 1];
//					tipo[e + 1] = auxChar;
//					
//					auxFlo = saldo[e];
//					saldo[e] = saldo[e + 1];
//					saldo[e +1] = auxFlo;	
//				}
//			}
//		}
//		for(j = 1 ; j <= n ; j++){
//			printf("Cuenta: %d		Tipo: %c		Saldo:  %.2f\n", cuenta[j] , tipo[j] , saldo[j]);
//		}
//	}
//-------------------------------------------------------------------------
//								MATRICES
//Pasaje de matrices a funciones
//En este ejemplo se muestra el pasaje de una matriz de 7 filas por
//10 columnas a dos funciones. Recordemos que no se transferira una
//copia de la matriz sino que su direccion de inicio, algo por demas 
//beneficioso para ahorrar memoria.
//
//Observese el doble lazo para barrido de filas y columnas y el 
//modo en que se obtienen numeros psudoaleatorios utilizando funciones 
//de la biblioteca estandar.
		
//	#include <stdio.h>
//	#include <stdlib.h>
//	
//	#define filas 7
//	#define columnas 10
//	
//	void cargar ( int [] [columnas] , int);
//	void mostrar ( int [] [columnas]  , int);
//	
//	int main(){
//		int matriz [filas] [columnas];
//		
//		cargar(matriz , filas);
//		mostrar(matriz , filas);
//	}
//
//	void cargar( int mat[] [columnas] , int n){
//		int i , j;
//		srand(time(0));		//Iniciamos la semilla
//		for(i = 0 ; i < n ; i++){
//			for(j = 0 ; j < columnas ; j++){
//				mat[i][j] = rand() % 100; //Numeros randon entre 0 y 99
//			}
//		}
//	}
//	
//	void mostrar(int mat[] [columnas] , int n){
//		int i , j;
//		printf("\n\n\n");
//		for(i = 0 ; i < n ; i ++){
//			for(j = 0 ; j < columnas ; j++){
//				printf("%6d",	mat[i][j]) ;
//			}
//		}
//	}
//---------------------------------------------------------------------------
//		SISTEMA DE 3 ECUACIONES CON 3 INCOGNITAS(pag. 147)
//	#include <stdio.h>
//	
//	int det(int [][3]);
//	void cargar(int [] [4]);
//	void mostrar (int [] [4]);
//	
//	int main(){
//		int matriz[3][4] , deter[3][3];
//		float d[3];
//		int delta , i ,  j , z ;
//		cargar(matriz);
//		mostrar(matriz);
//		
////		SE CALCULA EL DETERMINANTE DELTA
//		for(i = 0 ; i < 3 ; i++){
//			for(j = 0 ; j < 3 ; j++){
//				deter[i][j] = matriz[i][j];
//			}
//		}
//		delta = det(deter);
//		
////		OBTIENE LAS 3 SOLUCIONES
//		for(z = 0 ; z < 3 ; z++){
//			for(i = 0 ; i < 3 ; i++){
//				for(j = 0 ; j < 3 ; j++){
//					deter[i][j] = matriz[i][j];
//				}
//			}
//			for(i = 0 ; i < 3 ; i++){
//				deter[i][z] = matriz[i][3];
//			}
//			d[z] = (float) det(deter) / delta;
//		}
//		
//		printf("\n\n\n\nSolucion\n\n");
//		printf("\t X = %8.2f \n \t Y = %8.2f \n \t Z = %8.2f",	d[0] , d[1] , d[2]);
//	}
//
////	LEE EL SISTEMA DE ECUACIONES
//	void cargar(int mat[][4]){
//		int i , j ;
//		for(i = 0 ; i < 3 ; i++){
//			for(j = 0 ; j < 3 ; j++){
//				printf("%d	%d		", i + 1 , j + 1);
//				scanf("%d",	&mat[i][j]);		
//			}
//			printf("Termino independiente %d	", i + 1);
//			scanf("%d", &mat[i][3]);
//		}
//	}
//	
////	PRESENTA EN PANTALLA EL SISTEMA DE ECUACIONES
//	void mostrar(int mat[][4]){
//		int i , j ;
//		printf("\n");
//		for(i = 0 ; i < 3 ; i++){
//			printf("\n\n\t");
//			printf("%6d X +%6d Y +%6d Z=%6d", mat[i][0] , mat[i][1] , mat[i][2] , mat[i][3]);
//		}
//	}
//	
////	RESUELVE EL DETERMINANTE 3X3
//	int det(int m[][3]){
//		int res ,  r0 , r1 , r2 ;
//		r0 = m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]);
//		r1 = m[1][0] * (m[0][1] * m[2][2] - m[0][2] * m[2][1]);
//		r2 = m[2][0] * (m[0][1] * m[1][2] - m[0][2] * m[1][1]);
//		res = r0 -  r1 + r2;
//		return res;
//	}
//---------------------------------------------------------------
//				EJERCICIOS
//---------------------------------01--------------------------
//Ingrese 20 valores enteros y muestrelos en pantalla en una linea,
//en el orden de ingreso, y en la linea siguiente, en  orden inverso 
//al del ingreso.
//	#include <stdio.h>
//	#define c  5
//	int main(){
//		
//		int i , vec[c];
//		
//		for(i = 0 ; i < c ; i++){
//			printf("\n\t Ingrese un numero %d_	", i + 1);
//			scanf("%d", &vec[i]);
//		}
//		
//		for(i = 0 ; i < c ; i++){
//			printf("%6d", vec[i]);
//		}
//		printf("\n\n\n");
//		for(i = (c - 1) ; i >= 0 ; i--){
//			printf("%6d", vec[i]);
//		}		
//	}
//-----------------------------------02-------------------
//Ingrese 20 valores enteros y posteriormente un valor entero
//adicional al que llamaremos 'div'. Indique cuantos componentes
//del vector son divisibles por 'div'. 
//	int main(){
//		int vec[c] , i , div , cont = 0;
//		for(i = 0 ; i < c ; i++){
//			printf("\tIngrese un numero: 1_%d	", i + 1);
//			scanf("%6d", &vec[i]);
//		}
//		printf("\t Ingrese  un numero DIV:");
//		scanf("%6d", &div);
//		
//		for(i = 0 ; i < c ; i++){
//			if((vec[i] % div) == 0){
//				cont++;
//				printf("El numero %d es divisible por %d\n", vec[i] , div);
//			}
//		}
//		
//		printf("Los numeros ingresados divisibles por %d son %d", div , cont);
//	}
//--------------------------------03--------------------------------
//Realiza una funcion que reciba un vector de enteros y su longitud,
//y retorne el promedio de sus valores.
//	#include <stdio.h>
//	float promedio( int vec[] , int c);
//	
//	int main(){
//		int i , vec[5] , c = 5;
//		
//		for(i = 0 ; i < c ; i++){
//			printf("\tIngrese un  numero:%d_", i + 1);
//			scanf("%6d", &vec[i]);
//		}
//		printf("\n\n\n");
//		printf("Los numeros ingresados son:\n");
//		for(i = 0 ; i < c ; i++){
//			printf("%6d", vec[i]);
//		}
//		printf("\nEl promedio es %.2f", promedio(vec , c));
//	}
//	
//	float promedio( int vec[] , int c){
//		int i , acu = 0;
//		float prom	;
//		for(i = 0 ;  i < c ; i++){
//			acu = acu + vec[i];
//		}
//		prom = (float) acu / c;
//		return prom;
//	}
//----------------------------04------------------------------
//Crear una funcion que reciba un vector de enteros y su longitud,
//y cargue sus variables con valores aleatorios comprendidos entre
//0 y 99(utilizar la funcion rand)
//	#include <stdio.h>
//	void cargar( int vec[] , int c);
//	
//	int main(){
//		int i , vec[5] , c = 5;
//		cargar( vec , c);
//		for(i = 0 ; i < c ; i++){
//			printf("%6d", vec[i]);
//		}
//	}
//	
//	void cargar( int vec[] , int c){
//		int i;
//		srand(time(0));		//Iniciamos la semilla
//		for(i = 0 ; i < c ; i++){
//			vec[i] = rand() % 100; //Numeros randon entre 0 y 99
//		}
//	}
//-----------------------------05----------------------------
//Realizar una funcion que simule arrojar un dado (retorna valores
//enteros aleatorios entre 1 y  6)
//
//Utilizando dicha funcion realice el experimento de arrojar 1000
//veces el dado, almacenando las cantidades de aparicion de cada 
//cara  en un vector.
//
//Imprima la cantidad de veces que aparecio cada cara  y su porcentaje
//sobre el total.

//	int dado();
	
//	int main(){
//		int i , c = 30 , r , cont_uno = 0 , cont_dos = 0 , cont_tres = 0 , cont_cuatro = 0 , cont_cinco = 0 , cont_seis = 0; 
//		int vec[6] = { 0 , 0  , 0 , 0 , 0 , 0 } ;
//		float vec_prom[6] = { 0 , 0 , 0 ,  0  , 0 , 0};
//		srand(time(0));
//		for(i = 0 ; i  < c ; i++){
//			r = (rand() % 6) + 1;
//			printf("%6d", r);
//			switch (r) {
//				case 1 : vec[0]++;
//				break;
//				case 2 : vec[1]++;
//				break;
//				case 3 : vec[2]++;
//				break;
//				case 4 : vec[3]++;
//				break;
//				case 5 : vec[4]++;
//				break;
//				case 6 : vec[5]++;
//				break;
//				default: printf("\n ERROR\n");
//				break;
//			}
//		}
//		for(i  = 0 ; i < 6 ; i++){
//			vec_prom[i] = ((float) vec[i] * 100) / c;
//			printf("\n%d = %d - %% %.2f", (i + 1) , vec[i] , vec_prom[i]);
//		}
//		
//		
//	}

//	int dado(){
//		int r , i;
//		srand(time(0));
//		for(i = 0 ; i< 5 ; i++){
//			return r = (rand() % 6) + 1;	
//		}
//	}
//------------------06-----------------------------
//Realice una funcion que reciba un vector de enteros y 
//su longitud y retorne 1 si el vector esta ordenado en
//forma creciente, y 0 en caso contrario.
//	#include <stdio.h>
//	int orden( int vec[] , int c);
//	
//	int main(){
//		int vec[5] , i , c = 5;
//		
//		for(i = 0 ; i < c ; i++){
//			printf("\tIngrese un numero: %d	", i + 1);
//			scanf("%d", &vec[i]);
//		}
//		printf("\n\n\n");
//		printf("Los numeros ingresados son:\n");
//		for(i = 0 ; i < c ; i++){
//			printf("%6d", vec[i]);
//		}
//		
//		if(orden(vec , c)){
//			printf("\nEstan ordenados de forma creciente");
//		}else{
//			printf("\nNo estan ordenados de forma creciente");
//		}
//	}
//	
//	int orden ( int vec[] , int c){
//		int i , f_mayor = 0 , mayor , f_crece = 0;
//		for(i = 0 ; i < c ; i++){
//			if(!f_mayor){
//				mayor = vec[i];
//				f_mayor = 1;
//			}else{
//				if(vec[i] > mayor){
//					mayor = vec[i];
//				}else{
//					f_crece = 1;
//				}
//			}
//		}
//		
//		if(f_crece){
//			return 0;
//		}else{
//			return 1;
//		}
//	}
//------------------------07------------------------
//Implementar una funcion que reciba dos vectores de enteros
//del mismo tamaño y longitud, y retorne 1 si ambos vectores
//son iguales(identicos contenidos en identicas posiciones) y
//0 en caso contrario.
//	int igual( int vec1[] , int vec2[] , int c);
//	int main(){
//		int i , vec1[5] , vec2[5] , c = 5;
//		for(i = 0 ; i < c ; i ++){
//			printf("Ingrese un numero: %d	", i + 1);
//			scanf("%d", &vec1[i]);
//		}
//		printf("\n\n\n");
//		for(i = 0 ; i < c ; i ++){
//			printf("Ingrese un numero: %d	", i + 1);
//			scanf("%d", &vec2[i]);
//		}
//		
//		printf("\n\n\n");
//		printf("\n\tLos primeros numeros ingresados son:");
//		for(i = 0 ; i < c ; i ++){
//			printf("%6d", vec1[i]);
//		}
//		printf("\n\n\n");
//		printf("\n\tLos segundos numeros ingresados son:");
//		for(i = 0 ; i < c ; i ++){
//			printf("%6d", vec2[i]);
//		}
//		printf("\n\n\n");
//		if(igual(vec1 , vec2 , c)){
//			printf("\nLas dos listas de numeros son indenticas");
//		}else{
//			printf("\nLas dos listas de numeros no son indenticas");
//		}
//	}
//	
//	int igual( int vec1[] , int vec2[] , int c){
//		int i , f_igual = 1;
//		for(i = 0 ; i < c ; i++){
//			if(vec1[i] != vec2[i]){
//				f_igual = 0;
//			}
//		}	
//		if(f_igual){
//			return 1;
//		}else{
//			return 0;
//		}
//	}
//-----------------------------08---------------------------------
//Tomando como base el ejemplo de vectores apareados con cuentas bancarias,
//muestre en pantalla todos los datos de cuentas tipo 'A'.

//Construir, mostrar y acceder a los vectores apareados.
//
//Se declara un sistema de 5 cuentas y se cargan los vectores correspondientes
//en el momento de la declaracion.
//
//Se presenta en pantalla el sistema de 3 vectores cargados y se pide el ingreso
//de un numero de cuenta, que se buscara dentro del vector cuenta().
//
//La busqueda propiamente dicha la realiza la funcion buscar() que es similar a la
//presentada en el ejemplo de busqueda secuencial.
//
//La funcion acceso() muestra en pantalla el contenido de los 3 campos habiendo 
//obtenido su posicion de la funcion buscar().
//
//Si esta retorno -1 se informa que el numero de cuenta no esta contenido en el vector.

//int cuenta(int cuenta[] , int n , int c);
//void acceso(int cuenta[] , float saldo[] , char tipo[] , int n , int c);
//void ordenar(int cuenta[] , float saldo[] , char tipo[] , int n);
//void tipo_a(int cuenta[] , float saldo[] , char tipo[] , int n);
//void mayor_saldo(int cuenta[] , float saldo[] , char tipo[] , int n);
//void superior(int cuenta[] , float saldo[] , char tipo[] , int n);
//
//int main(){
//	int i , n = 10, c , 
//		cuenta[10] = {823 , 345 , 643 , 674 , 235 , 852 , 214 , 351  , 325 , 847} ;
//	float saldo[10] = {234.23 , 456.67 , 545.89 , 234.76 , 624.65 , 845.33 , 847.46 , 847.57 , 146.54 , 356.67};	
//	char tipo[10] = {'A' , 'B' , 'C' , 'A' , 'A' , 'B' , 'A' , 'C' , 'C' , 'B'};
//	
//	for(i = 0 ;  i < n ; i++){
//		printf("\tCuenta = %d	Saldo = %.2f 	Tipo = %c\n", cuenta[i] , saldo[i] , tipo[i]);
//	}
//	printf("\n\n\n");
//	printf("Ingrese una cuenta:	");
//	scanf("%d", &c);
//	printf("\n\n\n");
//	acceso(cuenta , saldo , tipo , n , c);
//	ordenar(cuenta , saldo , tipo , n);
//	tipo_a(cuenta , saldo , tipo , n);
//	mayor_saldo(cuenta , saldo , tipo , n);
//	superior(cuenta , saldo , tipo , n);	
//}
//
//int buscar(int cuenta[] , int n , int c){
//	int i;
//	for(i = 0 ; i < n ; i++){
//		if(cuenta[i] == c){
//			return i;
//		}
//	}
//	return -1;
//}
//
//void acceso(int cuenta[] , float saldo[] , char tipo[] , int n , int c){
//	int pos;
//	pos = buscar(cuenta , n , c);
//	if(pos < 0){
//		printf("No se encontro el numero de cuenta	%d\n", pos);
//	}else{
//		printf("Cuenta %d	Saldo %.2f	Tipo %c", cuenta[pos] , saldo[pos] , tipo[pos]);
//	}
//}
//
//void ordenar(int cuenta[] , float saldo[] , char tipo[] , int n){
//	int i , e , aux_cuenta;
//	float aux_saldo;
//	char aux_tipo;
//	for(i = 0 ; i < n ; i++){
//		for(e = 0 ; e < n - i - 1 ; e++){
//			if(tipo[e] > tipo[e + 1] || (tipo[e] == tipo[e + 1]) && (cuenta[e] > cuenta[e + 1])){
//				
//				aux_cuenta = cuenta[e];
//				cuenta[e] = cuenta[e + 1];
//				cuenta[e + 1] = aux_cuenta;
//			
//				aux_saldo = saldo[e];
//				saldo[e] = saldo[e + 1];
//				saldo[e + 1] = aux_saldo;
//			
//				aux_tipo = tipo[e];
//				tipo[e] = tipo[e + 1];
//				tipo[e + 1] = aux_tipo;
//			}
//		}
//	}
//	for(i = 0 ; i < n ; i++){
//		printf("\n\n\n");
//		printf("Cuentaas ordenadas");
//		for(i = 0 ; i < n ; i++){
//			printf("\nCuenta %d 	Tipo %c 	Saldo %.2f\n", cuenta[i] , tipo[i] , saldo[i]);
//		}
//	}
//}
//
//void tipo_a(int cuenta[] , float saldo[] , char tipo[] , int n){
//	int i;
//	printf("\n\n\n");
//	printf("Cuentaas Tipo A");	
//	for(i = 0 ; i < n ; i++){
//		if(tipo[i] == 'A'){
//			printf("\nCuenta %d		Tipo %c		Saldo %.2f\n", cuenta[i] , tipo[i] , saldo[i]);
//		}
//	}
//}
//-----------------------------------------------------09--------------
//Tomando como base el mismo ejemplo de vectores apareados con cuentas bancarias,
//muestre en pantalla los datos de la cuenta de mayor saldo.

//	void mayor_saldo(int cuenta[] , float saldo[] , char tipo[] , int n){
//		int i , f_mayor = 0 , pos_mayor , mayor;
//		for(i = 0 ; i < n ; i ++){
//			if(!f_mayor){
//				mayor = saldo[i];
//				pos_mayor = i;
//				f_mayor = 1;
//			}else{
//				if(saldo[i] > mayor){
//					mayor = saldo[i];
//					pos_mayor = i;
//				}
//			}
//		}
//		printf("\n\n\n");
//		printf("Cuentaas con mayor Saldo\n");	
//		printf("Cuenta %d	Tipo %c		Saldo %.2f", cuenta[pos_mayor] , tipo[pos_mayor] , saldo[pos_mayor]);
//	}
//-------------------------------------10--------------------------------
//Tomando como base el mismo ejemplo de vectores apareados con cuentas
//bancarias, muestre en pantalla todos los datos de las cuentaas cuyo 
//saldo supere los $300, ordeanados en forma decreciente de saldo(los
//mas grandes primero)	

//	void superior(int cuenta[] , float saldo[] , char tipo[] , int n){
//		int i  , aux_cuenta , e;
//		float s = 500.00 , aux_saldo;
//		char aux_tipo;
//		printf("\n\n\n%d", n);
//		printf("Cuentaas con Saldo mayor a 500, ordenadas de mayor a menor saldo\n");	
//		for(i = 0 ; i < n ; i++){
//				for(e = 0 ; e < n - i ; e++){
//					if(saldo[e] < saldo[e + 1] /*|| (tipo[e]  tipo[e + 1] &&)*/){
//						
//						aux_saldo = saldo[e];
//						saldo[e] = saldo[e + 1];
//						saldo[e + 1] = aux_saldo;
//						
//						aux_cuenta = cuenta[e];
//						cuenta[e] = cuenta[e + 1];
//						cuenta[e + 1] = aux_cuenta;
//						
//						aux_tipo = tipo[e];
//						tipo[e] = tipo[e + 1];
//						tipo[e + 1] = aux_tipo;
//					}
//				}	
//		}
//		for(i = 0 ; i < n ; i++){
//			if(saldo[i] > s){
//				printf("Cuenta %d 	Tipo %c 	Saldo %.2f\n", cuenta[i] , tipo[i] , saldo[i]);
//			}
//		}
//	}
//------------------------11--------------------------------------
//En un torneo de busqueda submarina compiten 15 buceadores(numerados del 
//1 al 15).
//
//Se pide mostrar la tabla de posiciones actualizada (y ordenada) con cada
//captura hecha por un competidor. El dato que se proporciona cada vez es
//simplemente el numero de buceador que logro una captura. El ingreso de
//datos(y la competencia) finaliza con el ingreso de un numero de competidor
//negativo.
	
//	void cargar(int vec[] , int capturas[], int n);
//	void tabla( int vec[] , int capturas[] , int n);
//	void orden( int vec[] , int capturas[] , int n);
//
//	int main(){
//		int i , vec[10] , capturas[10] = {0}, n = 10;
//		cargar(vec , capturas , n);
//		printf("\n\n\n\n");
//		tabla(vec , capturas , n);
//		
//		
//	}
//
//	void cargar(int vec[] , int capturas[], int n){
//		int i ;
//		printf("\tNumeros de los competidores");
//		for(i = 0 ; i <  n ; i++){
//			vec[i] = i + 1;
//			printf("\t%6d", vec[i]);
//		}
//		printf("\n\tCapturas hechas\t\t");
//		for(i = 0 ; i < n ;  i++){
//			printf("\t%6d", capturas[i]);
//		}
//	}
//	
//	void tabla( int vec[] , int capturas[], int n){
//		int i , comp ;
//		
//		printf("\t\t\tIngrese el competidor que hizo una captura	");
//		scanf("%d", &comp);
//		while(comp > 0){
//			if(comp > 10){
//				printf("\t\t\tIngreso un competidor incorrecto , vuelva a ingresar:\n");
//				printf("\t\t\tIngrese el competidor que hizo una captura	");
//				scanf("%d", &comp); 
//			}else{
//				for(i = 0 ; i < n ; i++){
//					if(vec[i] == comp){
//						capturas[i]++;
//					}
//				}
//				orden(vec , capturas , n);
//				printf("\n\n\n\n");		
//				
//				printf("\t\t\tIngrese el competidor que hizo una captura	");
//				scanf("%d", &comp);
//			}
//		}
//		printf("\t\t\tTermino el ingreso de competidores");
//	}
//
//	void orden( int vec[] , int capturas[] , int n){
//		int i , e , aux_capturas , aux_competidores;
//		
//		for(i = 0 ; i < n ; i++){
//			for(e = 0 ; e < n - i - 1 ; e ++){
//				if(capturas[e] < capturas[e + 1]){
//					
//					aux_capturas = capturas[e];
//					capturas[e] = capturas[e + 1];
//					capturas[e + 1] = aux_capturas;
//					
//					aux_competidores = vec[e];
//					vec[e] = vec[e + 1];
//					vec[e + 1] = aux_competidores;
//				}
//			}
//		}
//		printf("\n\tNumeros de los  competidores: \t");
//		for(i = 0 ; i < n ; i ++){
//			printf("%6d", vec[i]);
//		}
//		printf("\n\t\tNumeros de capturas: \t");
//		for(i = 0 ; i < n ; i ++){
//			printf("%6d", capturas[i]);
//		}		
//	}
//----------------------------------12-----------------------
//Se ingresaran (en un orden cualquiera) los datos de 16 equipos
//de futbol, compuestos por codigo del equipo(int) y cantidad de 
//puntos(int). Mostrar la tabla de posiciones ordenada y a 
//continuacion el fixture de la primera fecha de play off, es decir,
//los partidos entre el primero y el ultimo, etc.
	
//	void cargar( int code[] , int puntos[] , int n);
//	void orden( int code[] , int puntos[] , int n);
//	void fixture(int code[] , int puntos[] , int n);
//	
//	int main(){
//		int code[8] , puntos[8] , n = 8; 
//		cargar(code , puntos , n);
//		printf("\n\n\n\n");
//		orden(code , puntos , n);
//		printf("\n\n\n\n");
//		fixture(code , puntos , n);
//	}
//	
//	void cargar( int code[] , int puntos[8] , int n){
//		int i;
//		
//		for(i = 0 ; i < n ; i++){
//			printf("\nIngrese los codigos del equipo N: %d:	", i + 1);
//			scanf("%d", &code[i]);
//			printf("\nIngrese el puntaje del equipo %d:	", code[i]);
//			scanf("%d", &puntos[i]);
//		}
//		printf("\n\n\n\n");
//		printf("\tCodigo de equipo	Puntos\n");		
//		for(i = 0 ; i < n ; i++){
//			printf("\t%d			%d\n", code[i] , puntos[i]);			
//		}		
//	}
//	
//	void orden(int code [] , int puntos[] , int n){
//		int i , e , aux_code , aux_puntos;
//		
//		for(i = 0 ; i < n ; i++){
//			for(e = 0 ; e < n - i - 1 ; e++){
//				if(puntos[e] < puntos[e + 1]){
//					
//					aux_puntos = puntos[e];
//					puntos[e] = puntos[e + 1];
//					puntos[e + 1] = aux_puntos;
//					
//					aux_code = code[e];
//					code[e] = code[e + 1];
//					code[e + 1] = aux_code;
//				}
//			}
//		}
//		printf("\tCodigo de equipo	Puntos Ordenada\n");		
//		for(i = 0 ; i < n ; i++){
//			printf("\t%d			%d\n", code[i] , puntos[i]);			
//		}		
//	}
//	
//	void fixture(int code[] , int puntos[] , int n){
//		int i , e , j = 0;
//		for(i = 0 ; i < n / 2 ;  i++){
//			j++;
//			printf("\t%d  vs  %d\n", code[i] , code[n - j]);
//		}
//	}
//-------------------------------------13--------------------------------------
//Generar y mostrar una matriz de 8x8 enteros cuyos elementos valgan 0,
//excepto 2 de ellos que valdran 1 y estaran ubicados en posiciones aleatorias
//de la matriz.
//Mostrar dicha matriz en pantalla.
//	# include <stdio.h>
//	# include <stdlib.h>
//	
//	#define filas 8 
//	#define col 8
//	
//	void cargar (int [][col] , int);
//	void mostrar (int [][col] , int);
//	void misma (int [][col] , int);
//	
//	int main(){
//		int matriz[filas][col];
//		
//		cargar(matriz , filas);
//		mostrar(matriz , filas);
//		misma(matriz , filas);
//	}
//	
//	void cargar( int matriz[][col] , int n){
//		int i , j , r , t ;
//		srand(time(0));
//		for(i = 0 ; i < n  ; i++){
//			for(j = 0 ; j < col ; j++){
//				matriz[i][j] = 0;
//			}
//		}
//		for(i = 0 ; i  < 2 ; i++){
//			r = rand() % 8;
//			t = rand() % 8;
//			matriz[r][t] = 1;			
//		}
//	}
//	
//	void mostrar ( int matriz[][col] ,  int n){
//		int i , j ;
//		printf("\n\n\n");
//		for(i = 0 ; i < n ; i ++){
//			printf("\n\n\n");
//			for(j = 0 ; j < col ; j++){
//				printf("%6d", matriz[i][j]);
//			}
//		}
//	}
//-------------------------------------14------------------------------
//Crear una funcion que reciba la matriz del problema anterior y retorne 1
//si los elementos distintos de 0 comparten la misma fila, columna o
//diagonal.
//En caso contrario, retornar 0

//	void  misma(int  matriz[][col] , int n){
//		int i , j , cont_uno , cont = 0;
//		for(i = 0 ; i < n ; i++){
//			for(j = 0 ; j < col ;  j++){
////				while(j != 7){
//					if(matriz[i] == 1){
//						cont++;
//					}
////				}
//			}
//		}
//		if(cont==2){
//			printf("igual");
//		}else{
//			printf("%6d", cont);
//		}
//		
//	}























