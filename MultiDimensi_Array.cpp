#include<iostream>
using namespace std;

void tampil_array(int tampilan[3][3]){ //menampilkan isi array
    for(int i=0;i<=2;i++){ 
        for(int j=0;j<=2;j++){
            cout<<tampilan[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void pencarian(int cari[3][3],int angka){ //sequential search
    bool ada;
    int i=0,j;
    while(i<=2){
        j=0; //agar j terulang menjadi 0
        while(j<=2){
            if(angka==cari[i][j]){
                cout<<"Angka lo ada dikoordinat : "<<j<<","<<i;
                ada=true;
            }
            j++;
        }
        i++;
    }
    if(ada==false)cout<<"Angka lo gak ada ulang sana ";
}

int main(){ 
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //yang mirip copas pak wkwkw
    int angka;
    tampil_array(array);
    cout<<"Masukan anggka ingin lo cari : ";
    cin>>angka;
    pencarian(array,angka);
    return 0;
}