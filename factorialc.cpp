#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

unsigned long long facto_r(int n) {
    if (n==0||n==1)
        return 1;
    else
        return n*facto_r(n-1);
}

unsigned long long facto_i(int n) {
    unsigned long long resultado=1;
    for (int i=2; i<=n; i++) {
        resultado*=i;
    }
    return resultado;
}

int main() {
    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    
    clock_t inicio=clock();
    unsigned long long resultado_r=facto_r(n);
    clock_t fin=clock();
    double tiempo_r=((double)(fin-inicio))/CLOCKS_PER_SEC;
    
    inicio=clock();
    unsigned long long resultado_i=facto_i(n);
    fin=clock();
    double tiempo_i=((double)(fin-inicio))/CLOCKS_PER_SEC;
    
    cout<<fixed<<setprecision(8);
    cout<<"\nRecursivo: "<<n<<"! = "<<resultado_r<<", Tiempo: "<< tiempo_r<<" segundos\n";
    cout<<"Iterativo: "<<n<< "! = "<<resultado_i<<", Tiempo: "<< tiempo_i<<" segundos\n";

    return 0;
}
