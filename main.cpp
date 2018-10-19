#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <math.h>

//funcion de menú principal
int menu();
//

void pyramid(int);

int main(){

  int opcion = 0;
  int n;

  do{
    switch( opcion = menu()){
       case 1:{
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
       case 2:
	       cout << "" << endl;
	       
	       break;
       case 3: 
	       cout << "" << endl;
    }//end switch
  }while( opcion != 4 );
  return 0;
}

void pyramid(int n){
  int i,j,space;
  int row = 2*(n+1);
   
  for( i = 1; i <= row; i++){
     for(space = i; space < 3; space++){
        cout << " ";
     }
     for(j = 1; j <= (2*i-1);j++){
        cout << "*";
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
