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
    int sum =0;
    int b=3;
    while(b!=0){
        b = x/10;
        sum+= x%10;
        x=b;
    }
    return sum;
}

string numero_binario(int d){
    string bin;
    int res;
    int coc;
    while(d!=0){
        coc =d/2;
        res = d%2;
        d=coc;
        if (res==0){
            bin +="0";
        }
        else{
            bin+="1";
        }
    }
    string num_b (bin.rbegin(),bin.rend());
    return num_b;
}

string numero_hexadecimal(int p){
    string num_h;
    int res;
    int coc;
    if (p>=16){
        while(p>=16){
            coc=p/16;
            res=p%16;
            if (res ==10){
                num_h+="A";
            }
            else if(res==11){
                num_h+="B";
            }
            else if (res ==12){
                num_h+="C";
            }
            else if (res ==13){
                num_h+="D";
            }
            else if (res ==14){
                num_h+="E";
            }
            else if (res ==15){
                num_h+="F";
            }
            else if (res ==16){
                num_h+="G";
            }
            else{
                num_h+=to_string(res);
            }
            p=coc;
        }
        num_h+=to_string(p);
        string num (num_h.rbegin(),num_h.rend());
        return num;
        }
    else { 
            if (p ==10){
                num_h+="A";
            }
            else if(p==11){
                num_h+="B";
            }
            else if (p ==12){
                num_h+="C";
            }
            else if (p ==13){
                num_h+="D";
            }
            else if (p ==14){
                num_h+="E";
            }
            else if (p ==15){
                num_h+="F";
            }
            else if (p ==16){
                num_h+="G";
            }
            else{
                num_h+=to_string(p);
            }
            return num_h;
      }
}

int numero_primo(int n){
    int primo;
    if (n==1){
        primo =2;
    }

    return primo;
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

cout<<"PUNTO 3"<<endl;
int d;
cout<<"Inserte el número que desea convertir en forma binaria: "<<endl;
cin>>d;
cout<<"El número "+to_string(d)+ " en forma binaria es "+numero_binario(d)<<endl;

cout<<"PUNTO 4"<<endl;
int p;
cout<<"Inserte el número que desea convertir en forma hexadecimal: "<<endl;
cin>>p;
cout<<"El número "+to_string(p)+ " en forma hexadecimal es "+numero_hexadecimal(p)<<endl;

cout<<"PUNTO 5"<<endl;
int j;
cout<<"Cuantos numeros desea comparar?"<<endl;
cin>>j;
double c[j];

for(int i=0;i<j;i++){
cout<<"Ingrese el valor "<<i;cin>>c[i];
}
cout<<"El numero maximo es "+to_string(maximo_minimo(j,c)[0])+" y el numero minimo es "+to_string(maximo_minimo(j,c)[1])<<endl;

cout<<"PUNTO 7"<<endl;
int x;
cout<<"¿Para cuál número desea sumar sus propios dígitos?: "<<endl;
cin>>x;
cout<<"La suma de los dígitos es: "+to_string(suma_digitos(x))<<endl;

cout<<"PUNTO 8"<<endl;
int o;
cout<<"Inserte el n-ésimo número que desea consultar: "<<endl;
cin>>o;
cout<<"El numero #"+to_string(o)+" primo es: "+to_string(numero_primo(o))<<endl;

return 0;
}

