#include<iostream>
#include<cstdlib>

using namespace std;

double f1();
double f2();
double f3();
double f4();
void rindas_summa();

int main(){

char c;
do{
f1();
cout<<"\n\nLai turpinatu ievadiet Y vai y: ";
cin>>c; cout<<"\n";
system("cls"); // cls - tira ekranu
} while(c=='y' || c=='Y');

cout<<"Programmas STOP!";

cin.get();
system("pause>nul");
return 0;
}

double f1(){
	double x,n,y;
	cout<<"Ievadi lidz kadam skaitlim veidot reizinajuma tabulu: "; cin>>n;

	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++)
		cout<<x*y<<"\t";
		cout<<"\n";
	}
}

double f2(){
	double x,y;
	cout<<"Ievadi x = "; cin>>x;
	cout<<"Ievadi y = "; cin>>y;

	if(y<=x+1 && y<=-x+1 && y>=x*0){
		cout<<"Popal!";
	}
	else cout<<"Mimo!";
}

double f3(){
	double x,y;
	cout<<"Ievadi x = "; cin>>x;
	cout<<"Ievadi y = "; cin>>y;

	if(y>=-1 && y<=1 && x>=0 && x<=1){
		cout<<"Popal!";
	}
	else cout<<"Mimo!";
}

double f4(){
	double x,y,r1=6,r2=3;
		cout<<"Ievadi X = "; cin>>x;
		cout<<"Ievadi Y = "; cin>>y;

	if (x*x + y*y >= r2*r2 && x*x + y*y <= r1*r1 && x>=0 && y>=0) {cout<<"Popal!";}
		else cout<<"Ne popal!";
}

void rindas_summa(){
	int i; // snizu
	double n; // lidz kadam precizitatem skaitam
	double summa = 0;

	cout<<"Ievadi n = "; cin>>n;

	for (i=1;1./i>=n;i++){
		summa = summa+1./i;
		cout<<1./i<<"   ";
	}
	cout<<"\nRindas summa = "<<summa;
}
