void mediayvarianza(float (*m1)[5], float (*m2)[])
{

cout<<"\=============CALCULAR LA MEDIA Y VARIANZA=============\n";
     cout<<"\nCuantos numeros son? ";
     cin>>cantidad;
     
     sumatoria = new int[cantidad];
     
       for(int i= 0;i < cantidad;i++)
    {
     cout<<"Escribe el valor "<<i+1<<":";
     cin>>sumatoria[i];
    }
    
       for(int e = 0;e < cantidad;e++)
    {
       media = media + sumatoria[e];
    }
    
       media = media / cantidad;
    
    system("cls");
    
     cout<<"La Media es: ";
     cout<<media<<endl;
    
       for(int k = 0;k < cantidad;k++)
    {
     varianza = varianza + (((sumatoria[k])-(media))*((sumatoria[k])-(media)));
         
    }
    }
     varianza = varianza / cantidad;d
     cout<<"la varianza es: ";
     cout<<varianza<<endl;
     cout<<"La desviacion estandar es +/-: ";
     cout<<sqrt(varianza);




}
