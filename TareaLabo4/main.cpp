#include <iostream>
#include <conio.h>

using namespace std;

int tests, l;
int largest = 0;
int A[100];
int i = 0;
char key;

void pedirDatos(){
    cout<<"Inserte longitud de arreglo: "<<endl;
    cin>> l;
    cout<<"Inserte arreglo: "<<endl;
    i=0;
    largest=0;
    while (1){
        if(i>l-1){
            break;
        }
        key = getche();
        A[i] = (int)key-48;
        cout<<" ";
        i++;
    }
}

void encontrandoNumero(){
    for (i=0; i<l; i++){
        while (A[i]!=0){
            if (A[i]>0 & (largest<A[i])){
                largest = A[i];
                A[i] = A[i]-1;
            } else {
                A[i] = A[i]-1;
            }
        }
    }
    if (largest%2 == 0){
        cout<<"n/El numero faltante mayor divisible entre 2 es: " << largest+2<<endl;
    } else {
        cout<<"n/El numero faltante mayor divisible entre 2 es: " << largest+1<<endl;
    }

}

int main()
{
    cout<<"Inserte numero de tests"<<endl;
    cin>>tests;
    if ((tests >=1) & (tests <=10)){
        while (tests >=1 & tests <= 10){
            pedirDatos();
            encontrandoNumero();
            tests -= 1;
        }
    } else {
        cout<<"el valor tiene que ser entre 1 y 10"<<endl;
    }
    return 0;
}
