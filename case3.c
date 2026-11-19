#include <stdio.h>

typedef struct {
    char nama[30];
    int harga;
    int stok;
} Menu;

// TODO 1: tulis function jual() di sini
int jual(Menu *m, int jumlah) {
    if (m->stok >= jumlah) {
        m->stok -= jumlah;
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    Menu daftar[3] = {
        {"Nasi Goreng", 15000, 10},
        {"Es Teh",       5000, 25},
        {"Mie Ayam",    12000,  0}
    };

    // TODO 2: panggil jual() untuk 3 transaksi
    // TODO 3: cetak hasilnya dengan if-else
    if (jual(&daftar[0], 4)) {
        printf("Jual 4 Nasi Goreng : Berhasil (sisa stok %d)\n", daftar[0].stok);
    } else {
        printf("Jual 4 Nasi Goreng : Gagal (stok %d)\n", daftar[0].stok);
    }

    if (jual(&daftar[2], 1)) {
        printf("Jual 1 Mie Ayam    : Berhasil (sisa stok %d)\n", daftar[2].stok);
    } else {
        printf("Jual 1 Mie Ayam    : Gagal (stok %d)\n", daftar[2].stok);
    }

    if (jual(&daftar[0], 8)) {
        printf("Jual 8 Nasi Goreng : Berhasil (sisa stok %d)\n", daftar[0].stok);
    } else {
        printf("Jual 8 Nasi Goreng : Gagal (stok %d)\n", daftar[0].stok);
    }

  /*
@@@@=                                  .::*@%@@@@@
@@%.                                   .:-:+@@@@@@
@#         .                           .:--:*@@@@@
*                                      .:----*@@@@
    .                                  .:-----%@@@
   .               ..                   ::---==@@@
  .   ..           -                    -:---=-#@@
..                = -: :         .. . .:=------+@%
..  :            ++-=: =.   .... :::=--:=-::::==@%
.. .::-   .     -=-:.:::=  .:::-:==-:=-:--:---==%@
.:...-:   .:::=*%%%%#%#-:-.-:::-=+=:-++-=-----==%@
:-.-:::. . :. =+%@*#@@**::=:.:-:-+:::==--:----==%%
.:-=-::: -..-  =+=-+%-::::===-.-%#@@#%++::--:-*+%%
.::----=.:-:--.:..::........:.:*=@%--#*-:--::*#+@%
-----:=-----:---              .::=:-+= .-:..=@*#@%
--:---=::==-=----....    ... .. . :=: -#:..+@%*%%%
----:--:::==-:::--::............ :=-=*%:.-#%##%%%%
----:=--:::=-...:::::......:   .:=-*@%-=#%%**#####
=--::=---:::-:..::-:.       ...-:--+###%##########
:      .--::--.:..:+-:..::-:::-:::-###############
         .--:-:...:+::::.:...:-.::-#########**####
   ..:::.. :-:--...::::... .:-:...-#####*##****###
  .:::::::. =-:-::.   ..:  .:::...:*#*#*#****#####
 .:::::::::.=-:----..   :  .--:....=#*###**#######
  */

    return 0;
}
