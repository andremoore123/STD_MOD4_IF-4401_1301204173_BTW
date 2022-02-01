#include "mod5.h"

void createList_1301204173(List &L){
    first(L) = NIL;
}

void insertLast_1301204173(List &L, adr P){
    adr X;
    if (first(L) == NIL){
        first(L) = P;
    } else {
        X = first(L);
        while (next(X) != NIL){
            X = next(X);
        }
        next(X) = P;
    }
}

void deleteFirst_1301204173(List &L){
    adr P;
    if (next(first(L)) == NIL){
        first(L) = NIL;
    } else {
        first(L) = (next(first(L)));
    }
    next(P) = NIL;
}

void deleteLast_1301204173(List &L){
    adr p;
    p = first(L);
    while (next(next(p)) != NIL){
        p = next(p);
    }
    next(p) = NIL;
}

void deleteAfter_1301204413(List &L, adr prec){
    adr p, x;
    x = next(prec);
    p = first(L);
    if (p == NIL){
        cout << "Tidak ada data yang dapat dihapus";
    } else if (x != NIL){
        while (next(p) != prec){
            p = next(p);
        }
        next(p) = x;
    }
}

adr new_element_1301204173(infotype peg){
    adr P;
    P = new ElmPeg;
    info(P) = peg;
    next(P) = NIL;
    return P;
}

void add_N_data_1301204173(List &ListPeg){
    int jumlah, i;
    pegawai n;
    adr p;
    i = 0;
    cout << "Masukkan jumlah data yang akan diinput: ";
    cin >> jumlah;
    while (i < jumlah){
        cout << "[" << i+1 << "]" << endl;
        cout << "Nama: ";
        cin >> n.nama;
        cout << "NIP: ";
        cin >> n.NIP;
        cout << "Gaji: ";
        cin >> n.gaji;
        cout << endl;
        p = new_element_1301204173(n);
        insertLast_1301204173(ListPeg, p);
        i++;
    }
}

void show_all_data_1301204173(List ListPeg){
    adr p;
    int i = 0;
    if (first(ListPeg)==NIL){
        cout << "List Kosong" << endl;
    } else {
        p = first(ListPeg);
        cout << "Menampilkan semua data pada list: "<< endl;
        while (p != NIL){
            cout << "[" << i+1 << "]" << endl;
            cout << "Nama: " << info(p).nama << endl;
            cout << "NIP: " << info(p).NIP << endl;
            cout << "Gaji: " << info(p).gaji << endl << endl;
            p = next(p);
            i++;
        }
    }
}

adr search_by_NIP_1301204173(List ListPeg, string NIP){
    adr p, q;
    bool found;
    found = false;
    p = first(ListPeg);
    q = first(ListPeg);
    while (!found && p != NIL){
        if (info(p).NIP == NIP){
            found = true;
            q = p;
        }
        p = next(p);
    }
    return q;
}


void delete_Data_1301204173(List &ListPeg, string NIP){
    adr p, q;
    if (first(ListPeg) != NIL){
        p = search_by_NIP_1301204173(ListPeg,NIP);
        q = first(ListPeg);
        if (info(p).NIP == NIP){
            if (first(ListPeg) == p){
                deleteFirst_1301204173(ListPeg);
            } else {
                while (p != q){
                    q = next(q);
            }
            if (next(p)== NIL){
                deleteLast_1301204173(ListPeg);
            } else if (info(p).NIP == NIP) {
                deleteAfter_1301204413(ListPeg, p);
        }
        }
    }
    }
}

int jumlah_pegawai_1301204173(List ListPeg){
    adr p;
    int i = 0;
    p = first(ListPeg);
    while (p != NIL){
        i++;
        p = next(p);
    }
    return i;
}

int total_salary_1301204173(List ListPeg){
    adr p;
    int i = 0;
    p = first(ListPeg);
    while (p != NIL){
        i += info(p).gaji;
        p = next(p);
    }
    return i;
}

int selectMenu_1301204173(){
    cout << endl << "==== MENU ====" << endl;
    cout << "1. Tambahkan data pegawai" << endl;
    cout << "2. Tampilkan data pegawai" << endl;
    cout << "3. Cari data pegawai berdasarkan NIP" << endl;
    cout << "4. Hapus data berdasarkan NIP" << endl;
    cout << "5. Jumlah pegawai saat ini" << endl;
    cout << "6. Rata-rata penghasilan pegawai" << endl;
    cout << "7. Nama pegawai dengan gaji tertinggi" << endl;
    cout << "0. Exit" << endl;

    int input = 0;
    cout << "Pilih Menu: ";
    cin >> input;
    return input;


}
