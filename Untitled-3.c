#include <stdio.h>
#include <stdlib.h>

void inputnama (int);
void inputnilai (int, char[][100]);
void ratarata (int, float[][3]);
void cetak (char[][100], float[][3], float[]);

int i, j, banyak;

int main()
{
    char nama[banyak][100];
    float skor[banyak][3], rata[banyak];

    puts("Menghitung Rata-Rata Nilai B. Inggris, Matematika, & Digital Mahasiswa");
    printf("Berapa jumlah mahasiswa ? ");
    scanf("%i", &banyak);

    inputnama (banyak);
    inputnilai (banyak, nama);
    ratarata (banyak, skor);
    cetak (nama, skor, rata);

    return 0;
}

void inputnama (int banyak){

    char nama[banyak][100];

    puts("Masukkan Nama Mahasiswa!");
    for(i=0; i<banyak; i++){
        printf("Nama Mahasiswa-%i = ", i+1);
        scanf("%s", &nama[i]);
    }

}

void inputnilai (int banyak, char nama[][100]){

    float skor[banyak][3];

    puts("Masukkan Nilai Mahasiswa!");
    for(i=0; i<banyak; i++){
        printf("Nilai %s\n", nama[i]);
        for(j=0; j<3; j++){
            if(j==0)
                printf("B. Inggris = ");
            else if(j==1)
                printf("Matematika = ");
            else
                printf("Digital = ");

            scanf("%f", &skor[i][j]);
        }
    }
}

void ratarata (int banyak, float skor[][3]){

    float total[banyak], rata[banyak];
    for(i=0; i<banyak; i++){
        for(j=0; j<3; j++){
            total[i] = skor[i][j];
        }
        puts("");
        rata[i] = total[i]/3;
    }
}

void cetak (char nama[][100], float skor[][3], float rata[]){

    printf("\n\n");
    printf("-----------------------------------------------------\n");
    printf("No. | Nama Mhs       | B.Ing | MTK | DGTL | Rata2   |\n");
    printf("-----------------------------------------------------\n");
    for(i=0; i<banyak; i++){
            printf("%i     %-16s %-7g %-5g %-6g %-5g\n", i+1, nama[i], skor[i][0], skor[i][1], skor[i][2], rata[i]);
    }
}
