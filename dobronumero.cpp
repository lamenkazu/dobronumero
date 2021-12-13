#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int a, x;
    for(int i = 0; i < 10; i++){ 
        cout << "Digite 0 para sair.\nEscolha um numero: ";
        cin >> a;
        if(a != 0){
            x = a * 2;
            cout << "O dobro do numero eh " << x << "\n\n\n";
            i = 0;
        } else{
            i = 10; 
        }
    }
    return 0;
}