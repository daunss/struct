#include <stdio.h>

#define JUMLAH 3

typedef struct {
    char nama[30];
    int harga;
    int stok;
} Menu;

int main(void) {
    // TODO 1: buat array daftar berisi 3 menu
    Menu daftar[JUMLAH] = {
        {"Nasi Goreng", 15000, 10},
        {"Es Teh",       5000, 25},
        {"Mie Ayam",    12000,  0}
    };

    // TODO 2: tampilkan tabel dengan loop
    printf("No  Menu          Harga     Stok\n");
    for (int i = 0; i < JUMLAH; i++) {
        printf("%-4d%-14s%-10d%d\n", i + 1, daftar[i].nama, daftar[i].harga, daftar[i].stok);
    }

    // TODO 3: cari index menu termahal, lalu tampilkan
    int maxIndex = 0;
    for (int i = 1; i < JUMLAH; i++) {
        if (daftar[i].harga > daftar[maxIndex].harga) {
            maxIndex = i;
        }
    }
    printf("\nMenu termahal: %s (Rp%d)\n", daftar[maxIndex].nama, daftar[maxIndex].harga);

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
