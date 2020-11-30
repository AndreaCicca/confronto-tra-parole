#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	char a[100];
	char b[100];
	char dollaro[4]="$$$";
	int ciclo1=0;
	int ciclo2=0;
	int uguale = 0;
	int lunghezza =0; //lunghezza della strunga più corta
	int lunghezzal =0; //lunghezza della stringa più lunga
	bool prefisso = false;

	do{
		cout<<"Dai la prima parola: "<<endl;
		cin.getline(a,100);
		ciclo1=strcmp(a,dollaro);
		if (ciclo1==0) break;
		
		cout<<"Dai la seconda parola: "<<endl;
		cin.getline(b,100);
		ciclo2=strcmp(b,dollaro);
		if (ciclo2==0) break;
		
		uguale=strcmp(a,b);
		//cout<<uguale<<endl;
		
		if (uguale==0){
			cout<<"le parole sono uguali"<<endl;	
		} else{
			//se la prima parola è lessicograficamento più rilevante
			if (uguale<0){
			cout<<"la prima parola precede la seconda"<<endl;
			
			if (strlen(b)<strlen(a)){
				lunghezza= strlen(b);
				lunghezzal= strlen(a);
			}else{
				lunghezza= strlen(a); 
				lunghezzal= strlen(b);
			} 
			
			//ciclo per capire se la prima parola e' il prefisso della seconda
			prefisso=false;
			for (int i=0; i<lunghezza; i++){
				if (a[i]==b[i]) prefisso = true;
				else prefisso = false;
			}
			if (prefisso==true) cout<<"la prima parola e' il prefisso della seconda"<<endl;
			
			//ciclo per capire se la seconda parola e' il suffisso della prima
			prefisso=false;
			for (int i=0; i<lunghezza+1; i++)
			{
				if (a[lunghezzal-lunghezza+2]==b[i]){
					prefisso=true;
					
				}
				
			/*	if (prefisso==false){
					cout<<"falso"<<endl;
			 	}*/
				
			}
			if (prefisso==true) cout<<"la seconda parola e' il suffisso della prima"<<endl;
				
		}
		
		if (uguale>0){
		
			//se la seconda parola è lessicograficamento più rilevante
			cout<<"la seconda parola precede la prima"<<endl;
			if (strlen(b)<strlen(a)){
				lunghezza= strlen(b);
				lunghezzal= strlen(a);
			}else{
				lunghezza= strlen(a); 
				lunghezzal= strlen(b);
			} 
				
				//ciclo per capire se la seconda parola e' il prefisso della prima
				for (int i=0; i<lunghezza; i++){
					if (a[i]==b[i]) prefisso = true;
					else prefisso = false;
					}
				if (prefisso==true) cout<<"la seconda parola e' il prefisso della prima"<<endl;
				
				
				//ciclo per capire se la prima parola e' il suffisso della seconda
				prefisso=false;
				for (int i=0; i<lunghezza+1; i++)
				{
					if (a[lunghezzal-lunghezza+2]==b[i]){
						prefisso=true;
						}
				
					/*if (prefisso==false){
						cout<<"falso"<<endl;
					 }	*/
				
				}
				if (prefisso==true) cout<<"la prima parola e' il suffisso della seconda"<<endl;
		}
		}
	
	
	prefisso=false;
	lunghezza=0;
	} while (ciclo1!=0||ciclo2!=0);
	
	cout<<"Terminato!"<<endl;
	}

