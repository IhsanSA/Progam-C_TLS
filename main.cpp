#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
string Password1;
int AngkaAcak;

int main(){
cout<< "Pengecek kekuatan password\n";
cout<< "-------- -------- --------\n";
cout<< "\nSilahkan masukan password yang ingin anda gunakan(minimal 6 karakter): ";
cin>> Password1;

if(Password1.size()<6){
  cout<< "password terlalu singkat.\n";
  cout << "silahkan masukan password yang lebih panjang";
  goto akhir;
}
      if(Password1== "qwerty")
        {
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-1 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "password"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-2 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "123456"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-3 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "qwerty123"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-4 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "1234567890"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-5 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "12345678"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-6 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "111111"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-7 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "1q2w3e"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-8 yang paling sering digunakan";
    goto akhir;
    }

      if(Password1== "1asdasdasdasd"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-9 yang paling sering digunakan";
    goto akhir;
    }
      if(Password1== "Password"){
    cout<< "jangan menggunakan password tersebut karena password berada diperingkat ke-10 yang paling sering digunakan";
    goto akhir;
    }

        else{ //Random Number Generator
      srand(time(0));
      AngkaAcak=rand()%10000;
      cout<< "\n Password anda sudah aman.\n";
      cout<< "Agar password sulit ditebak, anda bisa menambahkan angka contohnya "<< Password1 << AngkaAcak;
  }
  akhir:
  return 0;
  }
