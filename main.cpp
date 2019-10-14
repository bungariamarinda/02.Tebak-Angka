#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
    //vatiable
  int kunci, tebakan, maks, nyawa=3;
  srand(time(NULL));    //acak

  //loop
  do{
    cout << "Masukan maksimal nilai (10-100) ="; cin >> maks;   //tampilkan nilai maksimal
        if(maks<10 || maks>100){
        cout << "Masukan angka antara 10-100 = !!" << endl;
        cout<<endl;
        }
    }while (maks<10 || maks>100);   //maksimal tebakan

  cout << "silahkan tebak angka antara 0 sampai "<<maks<<endl;  //tebak angka
  kunci = rand()% maks+1;
  cout <<"(cheat : ini adalah angka yang ditebak):"<<kunci<<endl;   //tampilkan cheat

  do{
    cout <<"Masukan tebakann anda :";cin >>tebakan; //masukan tebakan
        if(tebakan<kunci){
        cout << "tebakan anda terlalu kecil"<<endl; //tebakan terlalu kecil
        nyawa--;
        cout<<"tebakan anda salah, nyawa :"<<nyawa<<endl;   //tampilkan tebakan salah
        }

        else if(tebakan>kunci){
        cout << "Tebakan anda terlalu besar"<<endl; //tebakan terlalu besar
        nyawa--;
        cout << "tebakan anda salah, nyawa  : "<< nyawa<<endl;  //tampilkan tebakan salah
        }

        else if(kunci == tebakan){ //jika tebakan benar
        cout <<"tebakan anda benar"<<endl;

        }

    }while(kunci!=tebakan && nyawa !=0 );
    //end loop
    return 0;
  }



