#include <iostream>
#include "mod5.h"
using namespace std;
/*
Andre Eka Putra Simanjuntak
1301204173
*/
int main(){
    List L;
    adr p, searchAddress;
    string searchNIP, jawaban;
    pegawai n;
    int menu = 0;
    createList_1301204173(L);

// Tugas Terbimbing
/*
    cout << "Membuat 6 List" << endl;
        n.nama = "Andre";
        n.NIP = "023";
        n.gaji = 1000000;
        p = new_element_1301204173(n);
        insertLast_1301204173(L, p);

        n.nama = "Eka";
        n.NIP = "044";
        n.gaji = 1500000;
        p = new_element_1301204173(n);
        insertLast_1301204173(L, p);

        n.nama = "Sri";
        n.NIP = "002";
        n.gaji = 5000000;
        p = new_element_1301204173(n);
        insertLast_1301204173(L, p);

        n.nama = "Artha";
        n.NIP = "200";
        n.gaji = 2500000;
        p = new_element_1301204173(n);
        insertLast_1301204173(L, p);

        n.nama = "Kesya";
        n.NIP = "184";
        n.gaji = 1800000;
        p = new_element_1301204173(n);
        insertLast_1301204173(L, p);

        n.nama = "Sean";
        n.NIP = "231";
        n.gaji = 1500000;
        p = new_element_1301204173(n);
        insertLast_1301204173(L, p);

    show_all_data_1301204173(L);

    cout << "Total gaji karyawan: " << total_salary_1301204173(L) << endl;
    cout << "Jumlah pegawai: " << jumlah_pegawai_1301204173(L) << endl << endl;


    cout << "Menghapus data karyawan pertama" << endl;
    deleteFirst_1301204173(L);
    show_all_data_1301204173(L);
    cout << "Menghapus data karyawan terakhir" << endl;
    deleteLast_1301204173(L);
    show_all_data_1301204173(L);
    cout << "Menghapus data karyawan dengan NIP = 184" << endl;
    delete_Data_1301204173(L, "184");

    show_all_data_1301204173(L);
*/


// Tugas Mandiri
    menu = selectMenu_1301204173();
    while (menu != 0){
        switch (menu){
    case 1:
         add_N_data_1301204173(L);
            cout << "Kembali ke menu utama? (Y/N): ";
            cin >> jawaban;
            if (jawaban == "Y"){
                menu = selectMenu_1301204173();
                break;
            } else {
                cout << endl << "Anda keluar dari program"<< endl;
                return 0;
            }
    case 2:
        cout << "Menampilkan seluruh data pegawai" << endl;
        show_all_data_1301204173(L);

        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> jawaban;
        if (jawaban == "Y"){
            menu = selectMenu_1301204173();
            break;
        } else {
            cout << endl << "Anda keluar dari program"<< endl;
            return 0;
        }
    case 3:
        cout << "Masukkan NIP pegawai: ";
        cin >> searchNIP;
        cout << endl;
        if (first(L) != NIL){
            searchAddress = search_by_NIP_1301204173(L, searchNIP);
            if (info(searchAddress).NIP == searchNIP){
                cout << "Nama: " << info(searchAddress).nama << endl;
                cout << "NIP: " << info(searchAddress).NIP << endl;
                cout << "Gaji: " << info(searchAddress).gaji << endl;
            } else {
                cout << "Pegawai dengan NIP tersebut tidak ditemukan" << endl;
            }
        } else {
               cout << "List Kosong" << endl;
        }

        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> jawaban;
        if (jawaban == "Y"){
            menu = selectMenu_1301204173();
            break;
        } else {
            cout << endl << "Anda keluar dari program"<< endl;
            return 0;
        }
    case 4:
        cout << "Masukkan NIP pegawai yang akan dihapus: ";
        cin >> searchNIP;
        cout << endl;
        if (first(L) != NIL){
            searchAddress = search_by_NIP_1301204173(L, searchNIP);
            if (info(searchAddress).NIP == searchNIP){
                delete_Data_1301204173(L, searchNIP);
            } else {
                cout << "Pegawai dengan NIP tersebut tidak ditemukan" << endl;
            }
            }else {
              cout << "List Kosong" << endl;
            }


        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> jawaban;
        if (jawaban == "Y"){
            menu = selectMenu_1301204173();
            break;
        } else {
            cout << endl << "Anda keluar dari program"<< endl;
            return 0;
        }
    case 5:
        cout << "Jumlah pegawai saat ini: " << jumlah_pegawai_1301204173(L) << endl;

        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> jawaban;
        if (jawaban == "Y"){
            menu = selectMenu_1301204173();
            break;
        } else {
            cout << endl << "Anda keluar dari program"<< endl;
            return 0;
        }
    case 6:
        cout << "Rata-rata penghasilan pegawai: " << total_salary_1301204173(L)/jumlah_pegawai_1301204173(L)<< endl;

        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> jawaban;
        if (jawaban == "Y"){
            menu = selectMenu_1301204173();
            break;
        } else {
            cout << endl << "Anda keluar dari program"<< endl;
            return 0;
        }
    case 7:
        int maks;
        adr q;
        p = first(L);
        q = first(L);
        maks = info(p).gaji;
        while (p != NIL){
            if (info(p).gaji > maks){
                maks = info(p).gaji;
                q = p;
            }
            p = next(p);
        }
        cout << "Nama pegawai dengan gaji terbesar adalah: " << info(q).nama << endl;

        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> jawaban;
        if (jawaban == "Y"){
            menu = selectMenu_1301204173();
            break;
        } else {
            cout << endl << "Anda keluar dari program"<< endl;
            return 0;
        }
}
    }
    cout << endl << "Anda keluar dari program"<< endl;
    return 0;
}
