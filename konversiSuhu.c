#include <stdio.h>

void konversiSemua(double angkaCelcius);  //deklarasi fungsi dulu, untuk isi dari fungsinya ada di akhir kode

int main(){
    int pilihan;
    double angkaCelcius, hasil;
    char konversiLagi;

            //kenapa pake do while? karena kondisinya disini ngeloop >1 kalau user mau lagi, dan min proses dilakukan 1x
    do{     //jadi bagian loop akan dijalankan lebih dulu, lalu baru dicek kondisi di akhir apakah user mau mengulang lagi or not
        printf("II========================================II\n"); 
        printf("||  KALKULATOR PENGHITUNG KONVERSI SUHU!  ||\n");
        printf("||                                        ||\n");
        printf("||========================================||\n");
        printf("||                                        ||\n");  //dikasih frame agar terlihat seperti tampilan kalkulator^^
        printf("|| Konversikan suhu dari celcius ke dalam:||\n");
        printf("|| [1] Fahrenheit                         ||\n");
        printf("|| [2] Reamur                             ||\n"); 
        printf("|| [3] Kelvin                             ||\n");
        printf("|| [4] Konversi ke-ketiganya              ||\n");
        printf("||                                        ||\n");
        printf("II----------------------------------------II\n");
        printf("||     Masukkan pilihan anda (1/2/3/4):   ||\n");
        printf("||   >>                                   ||\n");
        scanf ("%d", &pilihan);

        while((pilihan != 1)&&(pilihan != 2)&&(pilihan != 3)&&(pilihan != 4)){
            printf("II----------------------------------------II\n");
            printf("||    Pilihan Tidak Valid, Coba Lagi!     ||\n");
            printf("II----------------------------------------II\n");    //jika yg dipilih selain dari angka 1,2,3 atau 4, maka akan tampil bacaan tsb
            printf("II----------------------------------------II\n");    //dan akan terus mengulang hingga angka yg diinput sesuai
            printf("||     Masukkan pilihan anda (1/2/3/4):   ||\n");
            printf("||   >>                                   ||\n");
            scanf ("%d", &pilihan);
        }

        printf("||Masukkan angka celcius: \n");  //user diminta untuk memasukkan angka antara 1,2,3 atau 4
        scanf("%lf", &angkaCelcius);


        if(pilihan == 1){                       //bagian conditionalnya, yang menunjukkan jika yg dipilih yaitu pilihan [1] alias Fahrenheit,
            hasil = (angkaCelcius * 9/5) + 32;  //maka perhitungannya seperti ini
            printf("II----------------------------------------II\n");
            printf("||          Hasil Konversi: %.2lf F       ||\n", hasil);
            printf("II----------------------------------------II\n");
        } else if(pilihan == 2){                //jika yg dipilih yaitu pilihan [2] atau Reamur,
            hasil = angkaCelcius * 4/5;         //maka perhitungannya seperti ini
            printf("II----------------------------------------II\n");
            printf("||          Hasil Konversi: %.2lf R       ||\n", hasil);
            printf("II----------------------------------------II\n");
        } else if(pilihan == 3){                //jika yg dipilih yaitu pilihan [3] atau Kelvin,
            hasil = angkaCelcius + 273.15;      //maka perhitungannya seperti ini
            printf("II----------------------------------------II\n");
            printf("||          Hasil Konversi: %.2lf K       ||\n", hasil);
            printf("II----------------------------------------II\n");
        } else if(pilihan == 4){            //ini saya menggunakan fungsi, jadi tinggal dipanggil fungsinya kalo yg dipilih pilihan [4]
            konversiSemua(angkaCelcius);    //maka perhitungan akan menampilkan semua hasil konversi ke ketiga suhu
        }

        printf("||                                        ||\n");
        printf("||Ingin menghitung konversi kembali? (y/n)||\n");
        printf("||                                        ||\n");
        printf("II========================================II\n"); 
        scanf(" %c", &konversiLagi);             //nah kalo diliat before %c ada spasi agar "\n" yg diatasnya tidak dianggap sebagai karakter.
                                                 //kalo ga pakai spasi nanti waktu di run, program ga akan minta input kita jadi akan langsung lompat dan selesai

    } while(konversiLagi == 'y');

    printf("||             Konversi Selesai.          ||\n");
    printf("II========================================II\n");
}

void konversiSemua(double angkaCelcius){                //ini isi dari fungsinya yang menghitung 3 konversi sekaligus
    double fahrenheit = (angkaCelcius * 9/5) + 32;
    double reamur = angkaCelcius * 4/5;
    double kelvin = angkaCelcius + 273.15;

    printf("II----------------------------------------II\n");
    printf("||          Hasil Konversi: %.2lf F       ||\n", fahrenheit);
    printf("||          Hasil Konversi: %.2lf R       ||\n", reamur);
    printf("||          Hasil Konversi: %.2lf K       ||\n", kelvin);
    printf("II----------------------------------------II\n");
}