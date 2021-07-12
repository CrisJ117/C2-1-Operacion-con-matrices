void transpuesta(float (*m1)[5], float (*r)[5])
{
    cout<<"\======OBTENER LA TRASPUESTA DE LA PRIMERA MATRIZ======\n"; 

      for(int m=0;m<5;m++){
      for(int n=0;n<5;n++){
    
       r[n][m]=m1[n][m];
    
    cout<<r[n][m]<<" ";
    }
    cout<<"\n"; 
    } 

    }
	transpuesta(matriz1,resultado);
	mostrar(resultado);
		break;



}
