#ifndef MOD5_H_INCLUDED
#define MOD5_H_INCLUDED
#include <iostream>

/*
Andre Eka Putra Simanjuntak
1301204173
*/
using namespace std;

#define info(P) (P)-> info
#define next(P) (P)-> next
#define first(P) ((P).first)
#define NIL NULL
struct pegawai{
    string nama, NIP;
    int gaji;
};

typedef pegawai infotype;
typedef struct ElmPeg *adr;

struct ElmPeg {
    infotype info;
    adr next;
};

struct List{
    adr first;
};


void createList_1301204173(List &L);
void insertLast_1301204173(List &L, adr p);
void deleteFirst_1301204173(List &L);
void deleteLast_1301204173(List &L);
void deleteAfter_1301204173(List &L, adr prec);

adr new_element_1301204173(infotype peg);
void add_N_data_1301204173(List &ListPeg);
void show_all_data_1301204173(List ListPeg);
adr search_by_NIP_1301204173(List ListPeg, string NIP);
void delete_Data_1301204173(List &ListPeg, string NIP);
int jumlah_pegawai_1301204173(List ListPeg);
int total_salary_1301204173(List ListPeg);
// Terbimbing
int selectMenu_1301204173();
#endif // MOD5_H_INCLUDED
