void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{

  cout<<"Obetener el producto de las dos matrices ";
  for(int i=0; i<5; ++i){

      for(int j=0; j<5; ++j){
        r[i] [j] = 0;
    }
    }
      for(int i=0; i<5; ++ i){
        for(int j=0; j<=5; ++j){
         for(int z=0; z<5; ++z)
          r[i][j] += m1[i][z] * m2[z][j];
    }
	
    }	
	producto(matriz1,matriz2,resultado);
	  mostrar(resultado);
		 break;
	producto(matriz1,matriz2,resultado);
	  mostrar(resultado);
		 break;
  }




