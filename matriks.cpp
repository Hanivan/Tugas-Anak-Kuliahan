#include <iostream>

using namespace std;

int main(){
   
    int A[25][25];
    int B[25][25];
    int hasil[25][25];
    int baris, kolom, i,j, c;
   
    cout<<"Masukan Jumlah Baris = ";
    cin>>baris;
    cout<<"Masukan Jumlah Kolom = ";
    cin>>kolom;
   
    cout<<"\n";
    for(i=1; i<=baris; i++)
    {
        for(j=1; j<=kolom; j++)
        {
            cout<<"Input A ["<<i<<","<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    
    cout<<"Masukan Jumlah Baris = ";
    cin>>baris;
    cout<<"Masukan Jumlah Kolom = ";
    cin>>kolom;
    cout<<"\n";
    for(i=1; i<=baris; i++)
    {
        for(j=1; j<=kolom; j++)
        {
            cout<<"Input B ["<<i<<","<<j<<"] = ";
            cin>>B[i][j];
        }
    }
   
    for(i=1; i<=baris; i++)
    {
       
        for(j=1; j<=kolom; j++)
        {
                hasil[i][j]=0;
            for(int k=1; k<=kolom; k++)
            {
                c=A[i][k]*B[k][j];
                hasil[i][j]=hasil[i][j]+c;
            }
       
        }
    }
   
    cout<<"\nHasil Perkalian Matriks A dan B = \n";
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=2; j++)
        {
            cout<<" "<<hasil[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
       
   
}