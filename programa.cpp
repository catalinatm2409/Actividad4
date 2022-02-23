#include <iostream>
#include <string>
#include <math.h>
using namespace std;

float suma(int m,double a[]){
float rta = 0;
for(int i=0;i<m;i++){
rta += a[i];
}
return rta;
}

float sumatoria_cuadrados(int m, double a[]){
float rta = 0;
for(int i=0;i<m;i++){
rta += pow(a[i],2);
}
return rta;
}

int suma_digitos(int x){
return 0;
}

double* maximo_minimo(int m,double a[]){
double max = a[0];
double min = a[0];
for(int i=0;i<m;i++){
if(a[i]>max){
max = a[i];
}
if(a[i]<min){
min = a[i];
}
}
double b[2] = {max, min};
return b;
}

//int binario(int a){
//return 0va;
//}

int main(){
int n;
cout<<"PUNTO 1"<<endl;
cout<<"Cuantos numeros desea sumar?"<<endl;
cin>>n;
double a[n];
for(int i=0;i<n;i++){
cout<<"Ingrese el valor "<<i;cin>>a[i];
}
cout<<"La suma de los numeros ingresados es "+to_string(suma(n,a))<<endl;

cout<<"PUNTO 2"<<endl;
int m;
cout<<"Cuantos numeros desea que se sumen al cuadrado?"<<endl;
cin>>m;
double b[m];

for(int i=0;i<m;i++){
cout<<"Ingrese el valor "<<i;cin>>b[i];
}
cout<<"La suma de los cuadrados de los numeros ingresados es "+to_string(sumatoria_cuadrados(m,b))<<endl;

cout<<"PUNTO 5"<<endl;
int j;
cout<<"Cuantos numeros desea comparar?"<<endl;
cin>>j;
double c[j];

for(int i=0;i<j;i++){
cout<<"Ingrese el valor "<<i;cin>>c[i];
}
cout<<"El numero maximo es "+to_string(maximo_minimo(j,c)[0])+" y el numero minimo es "+to_string(maximo_minimo(j,c)[1])<<endl;

return 0;
}

