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
int ejercicio2(int numero){
   
   
   
  
   
   
   int y=0;
   y=numero;
   int dividor=1;
   int count2=1;
   int counter=0;
   while(y>10){
 	y=y/10;
		
	if(y>10){
		dividor=dividor*10;
		count2=count2*10;
		
	}
	if(y<10){
		dividor= dividor*1;
		count2=count2*10;
	}
	counter = counter +1;
		
		
	}
   cout<< "Numero 1: " << dividor<<endl;
   cout<< "Numero 2: " << count2<< endl;

   int ver2 = numero;
   ver2 = ver2/dividor;
   cout<< "DIvision redondear: " << ver2<< endl;
   ver2= ver2*dividor;
   cout<< "Redondeado: " << ver2 << endl;
   double ver3 = ver2;
   double logaritmo=ver3/count2;
   cout<<"EL logaritmo: "<< logaritmo<<endl;

   cout<< endl;
   cout<< endl;

   double suma=0;
   double resultado=0;
   cout<< "Ln("<<numero<<") = ";

   //Log 10
   for(int i =0; i< counter; i++){
	suma =suma+ log(10);
		
		
	cout<<"log(10) + ";
   }


  int contadorlogs2=0;
  //Contador de la division de logaritmos
  while(logaritmo>1.3){
	logaritmo = logaritmo/2;
	contadorlogs2 = contadorlogs2 +1; 
	}
	double suma2=0;
	for(int j=0; j<contadorlogs2; j++){
		suma2 = suma2 + log(2);
		cout<< "Log(2) + ";
	}
	cout << "Log(" << logaritmo << ")";
	resultado = suma + suma2 + log(logaritmo);
	cout<< endl;
    cout<<"Resultado: " << resultado<< endl; 
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
