#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    int n;
    float media = 0;

    //obter as temperaturas
    cout << "digite a quantidade de temperatura: ";
    cin >> n;
    float temperatura[n];
    for(int i=0; i<n; i++){
        cout << "digite a temperatura"<< (i+1) << ": ";
        cin>> temperatura[i];
    }
     
    //calaculo
    for (int i=0; i<n; i++){
        media = media + temperatura[i]; 
    }
    media = media/n;

    //display
    cout << "\nA media das temperaturas = "<<media;
}