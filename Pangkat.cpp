#include <iostream>

using namespace::std;

int pangkatRekursif(int angka, int pangkat){
    if(pangkat==1)
        return angka;
    else
        return angka*pangkatRekursif(angka,(pangkat-1));
}


main(){
    int angka,pangkat;
    cout<<"----------------\n";
    cout<<"|    Pangkat   |\n";
    cout<<"----------------\n";
    cout<<"Angkat   : ";cin>>angka;
    cout<<"Pangkat  : ";cin>>pangkat;
    cout<<"--------------- \n";
    cout<<"Hasil    : "<<pangkatRekursif(angka,pangkat);
    cout<<endl;
}

