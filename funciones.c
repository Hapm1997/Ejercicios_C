#include <stdio.h>

////--------------------------------Ejemp 01---------------------
//int main(void){
//	int a;
//	a = 2;
//	funcion();
//	printf("\n main %d", a);
//}
//
//funcion(void){
//	int a;
//	a = 3;
//	printf("\n funcion %d", a);
//}
//---------------Variables Locales en un bloque---------------------
//int main(void){
//	int a , b;
//	a = 2;
//	b = 20;
////	-----INICIA EL BLOQUE-----
//	{
//		int a;
//		a = 5;
//		b = 30;
//		
//		printf("a del bloque es %d \n", a);
//		printf("b del bloque es %d \n", b);
//		b++;
//	}
////	------FIN DEL BLOQUE------
//printf("%d %d", a , b);
//}
//------------------Variables locales y globales conflictivas-------
//int a;
//int main(void){
//	printf("Valor inicial de a es %d \n", a);
//	a = 2;
//	funcion();
//	printf("El valor de a en el main es %d \n", a);
//}
//funcion(void){
//	int a;
//	a = 3;
//	printf("El valor de a en la funcion es %d \n", a);
//}
//--------------------Funcion suma con traspaso de datos----------
//int main(){
//	int a , b , c;
//	a = 5;
//	b = 9;
//	c = sumar(a , b);
//	printf("\n %d + %d = %d", a , b , c);
//}
//sumar( int x , int y){
//	int z;
//	z = x + y;
//	return z;
//}
//----------------Misma que la anterior pero abreviada---------------
//int main(){
//	int a = 5 , b = 9;
//	printf("\n %d + %d = %d", a , b , suma(a , b));
//}
//suma( int x , int y){
//	return x + y;
//}
//---------------Funciones Anidadas--------------------
//1_Realizar una funcion que reciba un 
//entero de una cifra y retorne su cubo
//	int cubo(int a){
//		return a * a * a;
//	}
//2_Realizar una funcion que reciba 3 enteros 
//de una cifra y retorne la suma del cubo de los
//tres, utilizando la funcion anterior
//	int tres( int x , int y , int z){
//		int suma = cubo(x) + cubo(y) + cubo(z);
//		return suma;
//	}
//3_Realizar una funcion que reciba un entero de 3 cifras
//y devuelva 1 en caso que se cumpla que dicho numero
//es igual a la suma del cubo de sus cifras individuales
//y retorne un 0 en caso contrario. Utilizar para esto la funcion
//del enunciado anterior.
//	int igual( int n){
//		int a , b , c;
//		//Separacion en tres cifras
//		a = n / 100;
//		c = n % 10;
//		b = (n / 10) % 10;
//		
//		if(tres(a , b , c) == n){
//			return 1;
//		}else{
//			return 0;
//		}
//	}	
//4_Determinar cuales son los numeros de 3 cifras(que no
//comiencen con cero) tales que la suma del cubo de cada
//una de sus cifras individuales sea igual al numero propuesto.
//Es decir aquellos que cumplan: abc = a^3 + b ^3 + c^3
//Siendo abc un numero de tres cifras (y no un producto). 
//Existen cuatro de estos numeros quedando para el lector determinar 
//cuales son. Se da a continuacion el programa completo.
//	int main(){
//		int j;
//		for(j = 100 ; j < 1000 ; j++){
//			if(igual(j)){
//				printf("%d \n", j);
//			}
//		}
//	}
//------------------Funciones con FLOAT------------------------------
//	float superficie( float radio){
//		float sup;
//		sup = 3.14 * radio * radio;
//		return sup;
//	}
//	
//	int main(){
//		float radio;
//		printf("Ingrese el radio\n");
//		scanf("%f", & radio);
//		printf("\n\n Radio = %.2f 		Superficie = %.2f" , radio , superficie(radio));
//	}
//-------------------Funcion con float y prototipo-----------------------
//	float sup(float);	/*PROTOTIPO*/
//	
//	int main(){
//		float radio;
//		printf("Ingrese el radio\n");
//		scanf("%f", &radio);
//		printf("\n Radio = %4.2f 	Superficie = %4.2f", radio , sup(radio));
//	}
//	float sup( float radio){
//		float sup;
//		sup = 3.14 * radio * radio;
//		return sup;
//	}
//------------------Funcion Calculo Recursivo del Factorial----------------------
	/*Calculo del factorial de n en forma recursia*/
//	int factorial (int);
//	int main(){
//		int n ;
//		scanf("%d", &n);
//		printf("\n %d !  =  %d ", n , factorial(n));
//	}
//	
//	int factorial( int n){
//		int f = 1;
//		if(n != 0){
//			f = n * factorial(n-1);
//			return f;
//		}
//	}
//---------------Ejercicios Funciones------------------------------------------------
//--------------01-------------------------
//En el siguiente programa, se puede comprobar que 
//la variable a local al bloque que es diferente 
//de la variable a local al mmain.
//	int main(){
//		int a , i;
//		for(i = 0 ; i < 3 ; i++){
//			int a;
//			a++;
//			printf("\n a del bloque es %d", a);
//		}
//		printf("\n a del main %d", a);
//	}
//---------------02-----------------------------
//En el siguiente programa se esta cometiendo un 
//error al transferir un entero a la funcion y 
//recibirlo con un parametro char.
//	funcion (char a){
//		printf("\n Funcion %d", a);
//	}
//	int main(){
//		int a;
//		a = 1857;
//		funcion(a);
//		printf("\n Main %d", a);
//	}
//---------------------03-----------------------------------
//Se desea realizar un programa que utilice una funcion que calcule
//y retorne el valor de x^y(x elevado a la potencia de y), siendo 
//'x' e 'y' enteros y positivos, y por lo tanto dando un resultado 
//tambien entero.
//Debido al rapido crecimiento de este valor sera necesario retornar
//el valor en un unsigned long.
//	unsigned long  potencia(int , int);
//	int main(){
//		int a , b;
//		printf("Ingrese un numro\n");
//		scanf("%d", &a);
//		printf("Ingrese un numero\n");
//		scanf("%d", &b);
//		printf("El valor ingresado %d elevado al segundo valor ingresado %d es = %ld", a , b , potencia(a , b));
//	}
//
//	unsigned long  potencia( int a , int b){
//		unsigned long  resultado;
//		int i;
//		resultado = a;
//		for(i = 1 ; i < b ; i++){
//			resultado = resultado * a;
//		}
//		return resultado;
//	}
//-----------------------04----------------------------------
//Construir una funcion que reciba un entero positivo
//y retorne 1 si este es primo y 0 en caso contrario.
//	int main(){
//		int n;
//		printf("Ingrese un numero:\n");
//		scanf("%d", &n);
//		if(primo(n)){
//			printf("El numero ingresado es primo");
//		}else{
//			printf("El numero ingresado no es primo");
//		}
//	}
//	int primo( int a){
//		int i , cont = 0;
//		for(i = 2 ; i < a ; i++){
//			if((a % i) == 0){
//				cont++;
//			}
//		}
//		if(!cont){
//			return 1;
//		}else{
//			return 0;
//		}
//	}
//-----------------------------05---------------------------------
//Utilizar la funcion del problema anterior para construir otra
//funcion que reciba dos enteros positivos y retorne la cantidad
//de numeros primos que se encuentran en el rango determinado por
//ellos.
//	int main(){
//		int a ,b;
//		printf("Ingrese un numero\n");
//		scanf("%d", &a);
//		printf("Ingrese un numero\n");
//		scanf("%d", &b);
//		printf("La cantidad de numeros primos entre %d y %d es %d", a , b , primo( a , b));
//	}
//	
//	int primo( int a , int b){
//		int i , cont = 0 , e , contPrimos = 0;
//		for(i = a ; i <= b ; i++){
//			cont = 0;
//			for(e = 2 ; e < i ; e++){
//				if((i % e) == 0){
//					cont++;
//				}
//			}	
//			if(cont == 0){
//				contPrimos++;
//			}		
//		}	
//		return contPrimos;
//	}
//----------------------------------06------------------------------
//Utilizar la funcion del problema anterior para mostrar las 
//cantidades de numeros primos que hay en los rangos[1000 - 2000], 
//[2000 - 3000] y [3000 - 4000].
//	int main(){
//		int a = 1000 , b = 2000 , c = 3000 , d = 4000 ;
//		printf("La cantidad de numeros primos entre %d y %d es: %d \n", a , b , primo( a , b ));
//		printf("La cantidad de numeros primos entre %d y %d es: %d \n", b , c , primo( b , c ));
//		printf("La cantidad de numeros primos entre %d y %d es: %d \n", c , d , primo( c , d ));
//	}
//		
//	
//	int primo( int a , int b){
//		int i , cont = 0 , e , contPrimos = 0;
//		for(i = a ; i <= b ; i++){
//			cont = 0;
//			for(e = 2 ; e < i ; e++){
//				if((i % e) == 0){
//					cont++;
//				}
//			}	
//			if(cont == 0){
//				contPrimos++;
//			}		
//		}	
//		return contPrimos;
//	}
//------------------------------07-------------------------------
//Construir una funion que reciba un entero positivo y retorne 1 si 
//este es perfecto y 0 si no lo es. Utilizarla para mostrar los
//primeros 5 numeros perfectos.
//	Numero perfecto: es aquel entero cuyo valor es igual a la suma
//	de sus divisores exactos, excluyendo al numero mismo.
//	Por ejemplo 6 = 3 + 2 + 1.
//	int main(){
//		int n;
//		printf("Ingrese un numero\n");
//		scanf("%d", &n);
//		if(perfecto(n)){
//			printf("El numero %d es un numero perfecto\n", n);
//		}else{
//			printf("El numero %d no es un numero perfecto\n", n);
//		}
//	}
//	int perfecto(int a){
//		int i , acu = 0 ;
//		for(i = 1 ; i < a ; i++){
//			if((a % i) == 0){
//				acu = acu + i;
//			}	
//		}
//		if(acu == a){
//			return 1;
//		}else{
//			return 0;
//		}
//	}
//----------------------------------08-------------------------------
//Construir una funcion que reciba dos numeros enteros positivos 
//y que retorne un 1 si estos constituyen un par de numeros amigos 
//y 0 si no lo son. Utilizarla para mostrar algun par de numeros 
//amigos.
//	Numeros amigos: dos numeros enteros son amigos si cada uno
//	de ellos es igual a la suma de los divisores exactos del otro,
//	execptuando al mismo numero.
//	int main(){
//		int a , b;
//		printf("Ingresa un numero\n");
//		scanf("%d", &a);
//		printf("Ingresa un numero\n");
//		scanf("%d", &b);
//		if(amigo( a , b )){
//			printf("Los numeros %d y %d son numeros amigos\n", a , b);
//		}else{
//			printf("Los numeros %d y %d no son numeros amigos\n", a , b);
//		}
//	}
//
//	int amigo( int a , int b){
//		int i , e , acuA = 0 , acuB = 0;
//		for(i = 1 ; i < a ; i++){
//			if((a % i) == 0){
//				acuA = acuA + i;
//			}
//		}
//		for(e = 1 ; e < b ; e++){
//			if((b % e) == 0){
//				acuB = acuB + e;
//			}
//		}
//		if(acuA == b && acuB == a){
//			return 1;
//		}else{
//			return 0;
//		}
//	}
//-----------------------------09----------------------
//Construir una funcion que lea un caracter de teclado y lo
//escriba en pantalla colocando el caracter cuyo codigo ASCII
//es el siguiente al recibido.
//	char code(char);
//	int main(){
//		unsigned char n;
//		printf("Escriba un caracter de teclado\n");
//		n = getchar();		
//		printf("El codigo ASCII siguiente es = %d \n", code(n));
//	}
//	char code( char n){
//		return n + 1;
//	}














