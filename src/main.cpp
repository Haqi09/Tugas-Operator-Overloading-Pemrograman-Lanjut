#include <iostream>
#include "include/PersegiPanjang.h"

using namespace std;

int main()
{
    int menu;
    float panjang, lebar, tengahx, tengahy;
    PersegiPanjang final (0,0,0,0);

    cout << "Input Data Persegi Panjang 1" <<endl;
    cout << "Panjang            : "; cin >> panjang;
    cout << "Lebar              : "; cin >> lebar; 
    cout << "Titik Tengah X     : "; cin >> tengahx; 
    cout << "titik Tengah Y     : "; cin >> tengahy; cout << endl;
    PersegiPanjang objek1(tengahx, tengahy, panjang, lebar);
    
    cout << "Input Data Persegi Panjang 2" <<endl;
    cout << "Panjang            : "; cin >> panjang;
    cout << "Lebar              : "; cin >> lebar;
    cout << "Titik Tengah X     : "; cin >> tengahx; 
    cout << "titik Tengah Y     : "; cin >> tengahy; cout << endl;
    PersegiPanjang objek2(tengahx, tengahy, panjang, lebar);

    while(1){
        cout << "Data Persegi Panjang 1" << endl;
        objek1.hasil(); cout << endl;
        cout << "Data Persegi Panjang 2" << endl;
        objek2.hasil(); cout << endl;

        cout << "1. (Operator ==)   Hubungan Persegi Panjang 1 & 2" << endl;
        cout << "2. (Operator +)    Menggabungkan Luasan Kedua Persegi Panjang" << endl;
        cout << "3. (Operator -)    Irisan Kedua Persegi Panjang" << endl;
        cout << "4. (Operator ++)   Menambah Luasan Persegi Panjang 2x" << endl;
        cout << "5. (Operator --)   Mengurangi Luasan Persegi Panjang 1/2x" << endl;
        cout << "6. (Operator [])   Mengambil Masing-Masing Properti dari Kelas PersegiPanjang" << endl;
        cout << "7. Exit" << endl << endl;
        cout << "Silahkan Pilih Menu" << endl;
        cin >> menu; 

        switch(menu)
        {
            case 1:
            {
                system("cls");
                cout << "(Operator ==) Hubungan Persegi Panjang 1 & 2" << endl;
                if (objek1==objek2)
                {
                    cout  << "Kedua persegi panjang beririsan" <<  endl;
                }
                else
                {
                    cout << "Kedua persegi panjang tidak beririsan" << endl;
                }
                cout << endl;
            
            }
            break;

            case 2:
            {
                system("cls");
                cout << "(Operator +) Menggabungkan Luasan Kedua Persegi Panjang" << endl;
                if(objek1==objek2)
                {
                    final = objek1 + objek2;
                    final.hasil();
                }
                else
                {
                    cout << "Tidak dapat dilakukan karena persegi panjang tidak beririsan" << endl;
                }
                cout << endl;
            }
            break;
            
            case 3:
            {
                system("cls");
                cout << "(Operator -) Menggabungkan Luasan Kedua Persegi Panjang" << endl;
                if(objek1==objek2)
                {
                    final = objek1 - objek2;
                    final.hasil();
                }
                else
                {
                    cout << "Tidak dapat dilakukan karena persegi panjang tidak beririsan" << endl;
                }
                cout << endl;
            }
            break;

            case 4:
            {
                system("cls");
                cout << "(Operator ++) Luasan Persegi Panjang 1 sebesar 2x" << endl;
                ++objek1;
                objek1.hasil();
                --objek1;
                cout << endl;

                cout << "(Operator ++) Luasan Persegi Panjang 2 sebesar 2x" << endl;
                ++objek2;
                objek2.hasil();
                --objek2;
                cout << endl;
            }
            break;

            case 5:
            {
                system("cls");
                cout << "(Operator --) Luasan Persegi Panjang 1 sebesar 1/2x" << endl;
                --objek1;
                objek1.hasil();
                ++objek1;
                cout << endl;

                cout << "(Operator --) Luasan Persegi Panjang 2 sebesar 1/2x" << endl;
                --objek2;
                objek2.hasil();
                ++objek2;
                cout << endl;
            }
            break;

            case 6:
            {
                system("cls");
                cout << "(Operaotr []) Menampilkan Masing-Masing Properti dari Kelas PersegiPanjang" << endl;
                cout << "1. Menampilkan X Min dari Persegi Panjang" << endl;
                cout << "   X Min Persegi Panjang 1 :" << objek1[0] << endl;
                cout << "   X Min Persegi Panjang 2 :" << objek2[0] << endl;
                cout << endl;

                cout << "2. Menampilkan X Max dari Persegi Panjang" << endl;
                cout << "   X Max Persegi Panjang 1 :" << objek1[1] << endl;
                cout << "   X Max Persegi Panjang 2 :" << objek2[1] << endl;
                cout << endl;

                cout << "3. Menampilkan Y Min dari Persegi Panjang" << endl;
                cout << "   Y Min Persegi Panjang 1 :" << objek1[2] << endl;
                cout << "   Y Min Persegi Panjang 2 :" << objek2[2] << endl;
                cout << endl;

                cout << "4. Menampilkan Y Max dari Persegi Panjang" << endl;
                cout << "   Y Max Persegi Panjang 1 :" << objek1[3] << endl;
                cout << "   Y Max Persegi Panjang 2 :" << objek2[3] << endl;
                cout << endl;
            }
            break;


            case 7:
            {
                return 0;
            }
            break;
        }
    }
}