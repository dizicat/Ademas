#include<iostream>
using namespace std;
int main()
{
	float can1=0;
	float can2=0;
	float can3=0;
	float can4=0;
	float voto,sumv,por1,por2,por3,por4;
	while(voto!=0){
		if(voto==1){
			can1=can1+1;
		}if(voto==2){
			can2=can2+1;
		}if(voto==3){
			can3=can3+1;
		}if(voto==4){
			can4=can4+1;
		}
		cin>>voto;
	}
	sumv=can1+can2+can3+can4;
	por1=(can1/sumv)*100;
	por2=(can2/sumv)*100;
	por3=(can3/sumv)*100;
	por4=(can4/sumv)*100;
	cout<<"voto candidato 1 :"<<can1<<endl;
	cout<<"porcentaje: "<<por1<<endl;
	cout<<"voto candidato 2: "<<can2<<endl;
	cout<<"porcentaje :"<<por2<<endl;
	cout<<"voto candidato 3:"<<can3<<endl;
	cout<<"porcentaje:"<<por3<<endl;
	cout<<"voto candidato 4:"<<can4<<endl;
	cout<<"porcentaje :"<<por4<<endl;
	cout<<"cantidad de votantes"<<sumv<<endl;
	
}
