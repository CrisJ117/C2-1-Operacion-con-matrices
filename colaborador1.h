void ingresar(float (*m1)[5], float (*m2)[5])
{

 	cout<<"\=======INGRESAR LOS VALORES DE LAS MATRICES=======\n";
	 float a, ingresar;
	   for(int i = 0; i < 5; i++){
    cout << "\n Ingresar valor " << i + 1 << "****:\n";
      for(int j = 0; j < 5; j++){
	cout << "\n posicion " << i + 1 << "****:\n";
	cin >> a;
    matriz[i][j] = a;
	}
	ingresar(matriz1,matriz2);
	mostrar(matriz1);
	mostrar(matriz2);
		break;
