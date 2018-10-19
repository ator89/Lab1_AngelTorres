#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <math.h>

//funcion de menú principal
int menu();
//función de la pirámide
void pyramid(int);
//funcion ejercicio 2
int ejercicio2(int);
//función 3
void ejercicio3(double,double,double);


int main(){

  int opcion = 0;
  int n;

  do{
    switch( opcion = menu()){
       case 1:{//Pyramid
	       n=0;
	       cout << "Ingrese un valor n: " << endl;
	       cin >> n;
	       
	       if(n <= 0){
	          cout << "El tamaño debe ser mayor a 0:" << endl;
	       }else{ 		  
		  
		    pyramid(n);
	       }
	    }//end case 1
	    break;
       case 2:{//Logaritmo natural
	       int m=0;
	       cout << "Ingrese el valor a aproximar: " << endl;
    	       cin >> m;

	       if(m<=0){
	          cout << "Ingrese un valor correcto" << endl;
	       }else{
	          ejercicio2(m);
	       }
	    }
	    break;
       case 3: {//función para aproximar un número
	       double m,p,y;
	       
	       cout << "Ingrese m:" << endl;
	       cin >> m;
	       cout << "Ingrese p: " << endl;
	       cin >> p;
	       cout << "Ingrese y: " << endl;
	       cin >> y;
	       
	       ejercicio3(m,p,y);
	       
	    }
	    break;
    }//end switch
  }while( opcion != 4 );
  return 0;
}

//función ejercicio 2 - Logaritmo natural
int ejercicio2(int n){
   
   int millar = n/1000;
   int centena = (n - (millar*1000))/100;
   int decena = (n - (millar*1000 + centena*100))/10;
   int unidad = n - (millar*1000 + centena*100+decena*10);
   
   cout << centena << endl;
   
    
   
   
   
}     

//función ejercicio 3
void ejercicio3(double m, double p, double y){
   //y=m*sqrt(x)
   double x;
   x=(y/m)*(y/m);
   
   while(x<y){
      cout << "X " << x << endl;
      x+=p;
   }
   cout << "El valor de x es: " << x; 
}

//funcion de la pirámide
void pyramid(int n){
  int i, j, space;
  int row = 2*( n + 1 );
   
  for( i = 1; i <= row; i++){
     for( space = i; space < 3; space++ ){
        cout << " ";
     }
     for(j = 1; j <= ( 2 * i - 1 ); j++ ){
        cout << "*";
     }
     for( space = i; space < 3; space++ ){
        cout << " ";
     } 
     cout << "\n";
  } 
}



//función de menú
int menu(){
  int retval=0;
   while(retval==0){
     cout << "\tMENU" << endl
	  << "1 - Ejercicio 1" << endl
	  << "2 - Ejercicio 2" << endl
	  << "3 - Ejercicio 3" << endl
	  << "4 - Salir" << endl
	  << "Ingrese una opcion: ";
     cin >> retval;

     if(retval < 1 || retval > 4 ){
        retval=0;
	cout << "Opción incorrecta, intente de nuevo" << endl;
     }
  }
  return retval;
}
