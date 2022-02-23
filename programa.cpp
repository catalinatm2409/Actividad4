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
cout<<"Ingrese el valor"<<i;cin>>a[i];
}
cout<<suma(n,a)<<endl;

int m;
cout<<"Cuantos numeros desea que se sumen al cuadrado?"<<endl;
cin>>m;
double b[m];

for(int i=0;i<m;i++){
cout<<"Ingrese el valor"<<i;cin>>b[i];
}
cout<<sumatoria_cuadrados(m,b)<<endl;
return 0;
}

