#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <cstdlib> // buat manggil srand
#include <ctime>   // buat manggil time, untuk buat srand berubah
using namespace std;

int main()
{
    // harrga harga
    int hargapaket = 0, paket1 = 3000, p1j, paket3 = 9000, p3j, paket5 = 15000, p5j;
    int paketm = 0, paketm1 = 2500, pm1j, paketm3 = 8500, pm3j, paketm5 = 12500, pm5j;
    float paketbebas = 41.66666666666667, pbebas;
    int hargapakettambah = 0, pakettbh30 = 1500, pakettbh1 = 3000;

    // Admin credentials
    string usera, passa, aid, apass;
    usera = "P";
    passa = "lojin";

    // Menu Makanan
    int hmakanan[10] = {0, 9500, 30000, 19500, 20000, 24500, 18500, 18500, 10000, 18500};
    int makanan, m1, m2, m3, m4, m5, m6, m7, m8, m9;

    // user
    string userin, passin;
    string userot, passot;

    // declaration
    int pilihanmain;
    string jenispaket;

    // random character
    char character[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"; // data karakter yang di gunakan
    string code;                                                                         // kode paket nya
    string coderedem; // buat ngeredem kode

// Main Menu
mainmenu:
    system("cls");
    cout << "+======================================== WAR.Net =====================================+" << endl;
    cout << "|                  ===== Pelayanan Rata Kiri, Harga Rata Kanan =====                   |" << endl;
    cout << "+=================== WAR.Net Yogyakarta || Jagonya Gaming Rata Kanan ! ================+" << endl
         << endl;
    cout << "========================================================================================" << endl;
    cout << "|  Kode      - MENU -                                                                 +|\n";
    cout << "|+   1. PEMBELIAN VOUCHER PAKET                                                       +|\n";
    cout << "|+   2. TAMBAH VOUCHER PAKET                                                          +|\n";
    cout << "|+   3. PEMESANAN SNACK                                                               +|\n";
    cout << "|+   4. MEMBER                                                                        +|\n";
    cout << "|+   5. ADMIN                                                                         +|\n";
    cout << "|+   6. EXIT                                                                          +|\n";
    cout << "========================================================================================" << endl
         << endl;
    cout << "Pilih menu anda : ";
    cin >> pilihanmain;

    // Menu Pilihan

    if (pilihanmain == 1)
    {
        goto beli;
    }
    else if (pilihanmain == 2)
    {
        goto tambah;
    }
    else if (pilihanmain == 3)
    {
        goto pesan;
    }
    else if (pilihanmain == 4)
    {
        goto member;
    }
    else if (pilihanmain == 5)
    {
        goto adimin;
    }
    else if (pilihanmain == 6)
    {
        goto exit;
    }
    else
    {
        system("cls");
        cout << "Menu Tidak di temukan";
        cout << "Tekan Enter untuk kembali ke menu utama";
        getch();
        goto mainmenu;
    }

// Backend Process

// Pembelian
beli:
    int pilihanpaket;
    {

        system("cls");
        cout << "==== Silahkkan Pilih Paket Anda =====" << endl;
        cout << "|  1. Paket 1 Jam                   |" << endl;
        cout << "|  2. Paket 3 Jam                   |" << endl;
        cout << "|  3. Paket 5 Jam                   |" << endl;
        cout << "=====================================" << endl;
        cout << endl;
        cout << "Silahkan Pilih Paket anda: ";
        cin >> pilihanpaket;
        switch (pilihanpaket)
        {
        case 1:
            jenispaket = "Paket 1 Jam";
            hargapaket = paket1;
            goto konfirmasi;
        case 2:
            jenispaket = "Paket 3 Jam";
            hargapaket = paket3;
            goto konfirmasi;
        case 3:
            jenispaket = "Paket 5 Jam";
            hargapaket = paket5;
            goto konfirmasi;
        default:
            system("cls");
            cout << "===== Menu Tidak Tersedia =====" << endl;
            cout << endl;
            cout << "Tekan Enter untuk kembali memilih paket";
            getch();
            goto mainmenu;
        }
    }

// Tambah Paket
tambah:
    system("cls");

    int pilihanpakettambah;
    cout << "==== Silahkkan Pilih Paket Anda =====" << endl;
    cout << "|  1. Paket 30 menit                |" << endl;
    cout << "|  2. Paket 1 Jam                   |" << endl;
    cout << "=====================================" << endl;
    cout << endl;
    cout << "Pilih paket tambahan anda: ";
    cin >> pilihanpakettambah;
    switch (pilihanpakettambah)
    {
    case 1:
        hargapakettambah = pakettbh30;
        goto tagihan;
    case 2:
        hargapakettambah = pakettbh1;
        goto tagihan;
    default:
        system("cls");
        cout << "===== Menu Tidak di temukan =====" << endl;
        cout << endl;
        cout << "Tekan Enter untuk kembali memilih paket";
        getch();
        goto tambah;
    }

// Pesan Snack
pesan:
    system("CLS");
    char lagimakan;
    cout << "+ ==============================================+" << endl;
    cout << "||      Kode    Daftar Makanan         Harga    ||" << endl;
    cout << "||______________________________________________||" << endl;
    cout << "||	 1. Nasi Kucing + Gorengan = Rp" << hmakanan[1] << "\t||" << endl;
    cout << "||	 2. Mie Rebus Telor        = Rp" << hmakanan[2] << "\t||" << endl;
    cout << "||	 3. Mie Rebus Tante        = Rp" << hmakanan[3] << "\t||" << endl;
    cout << "||	 4. Mie Goreng Tante       = Rp" << hmakanan[4] << "\t||" << endl;
    cout << "||	 5. Mie Goreng Telor       = Rp" << hmakanan[5] << "\t||" << endl;
    cout << "||	 6. Roti                   = Rp" << hmakanan[6] << "\t||" << endl;
    cout << "||	 7. Jeruk                  = Rp" << hmakanan[7] << "\t||" << endl;
    cout << "||	 8. Teh                    = Rp" << hmakanan[8] << "\t||" << endl;
    cout << "||	 9. Kopikap                = Rp" << hmakanan[9] << "\t||" << endl;
    cout << "+ ==============================================+" << endl;

    cout << " Silahkan Pilih Makanan anda : ";
    cin >> makanan;

    switch (makanan)
    {
    case 1:
        hmakanan[0] += hmakanan[1];
        cout << "Anda Memesan Nasi Kucing + Gorengan dengan total : " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 2:
        hmakanan[0] += hmakanan[2];
        cout << "Anda Memesan Mie Rebus Telor dengan total :" << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 3:
        hmakanan[0] += hmakanan[3];
        cout << "Anda Memesan Mie Rebus Tante dengan total :" << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 4:
        hmakanan[0] += hmakanan[4];
        cout << "Anda Memesan Mie Goreng Tante dengan total : " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 5:
        hmakanan[0] += hmakanan[5];
        cout << "Anda Memesan Mie Goreng Telor dengan total: " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 6:
        hmakanan[0] += hmakanan[6];
        cout << "Anda Memesan Roti dengan total : " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 7:
        hmakanan[0] += hmakanan[7];
        cout << "Anda Memesan Jeruk dengan total : " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 8:
        hmakanan[0] += hmakanan[8];
        cout << "Anda Memesan Teh dengan total : " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;
    case 9:
        hmakanan[0] += hmakanan[9];
        cout << "Anda Memesan Kopikap dengan total : " << hmakanan[0] << endl;
        cout << "Apakah ingin memesan lagi?(y/n)";
        cin >> lagimakan;
        if (lagimakan == 'y')
        {
            goto pesan;
        }
        else
        {
            goto tagihan;
        }
        break;

    default:
        cout << "Menu Tidak di temukan" << endl;
        cout << "Tekan Enter untuk kembali";
        getch();
        goto pesan;
        break;
    }

// Member
member:
    system("cls");
    int pilmember;
    cout << "=====Member=====" << endl;
    cout << "| 1.REGISTER   |" << endl;
    cout << "| 2.LOGIN      |" << endl;
    cout << "================" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilmember;
    if (pilmember == 1)
    {
        goto regmember;
    }
    else if (pilmember == 2)
    {
        goto logmember;
    }
    else
    {
        cout << "===== Menu Tidak di temukan =====" << endl;
        cout << "Tekan Enter untuk kembali ke menu member";
        getch();
        goto member;
    }

// register member
regmember:
    system("cls");
    // string userin, passin;
    cout << "======= Register =======" << endl;
    cout << "Masukkan Username: ";
    cin >> userin;
    cout << "Masukkan Password: ";
    cin >> passin;
    cout << endl;
    cout << "==============================================" << endl;
    cout << "| Username dan Password anda telah terdaftar |" << endl;
    cout << "==============================================" << endl;
    cout << "Tekan Enter untuk kembali ke menu member";
    getch();
    goto member;
// login member
logmember:
    system("cls");
    // string userot,passot;
    char sensor;
    cout << " ====== Login ====== " << endl;
    cout << "  Masukkan Username: ";
    cin >> userot;
    if (userot == userin)
    {
        cout << "Masukkan Password: ";
        sensor = _getch();   // sensor di pake buat ngerubah input jadi bintang
        while (sensor != 13) // 13 itu kode angka buat "enter"
        {
            passot += sensor;
            cout << "*";
            sensor = _getch();
        }
        // cin >> passot;
        if (passot == passin)
        {
            cout << "\n======= Login Berhasil =======";
            cout << "\n\nTekan Enter untuk melanjutkan";
            getch();
            goto membermenu;
        }
        else
        {

            cout << "\n======= Password anda salah =======";
            cout << "\n\nTekan Enter untuk kembali ke menu login";
            getch();
            goto logmember;
        }
    }

    else
    {
        system("cls");
        char pilakun;
        cout << "======= Username anda tidak terdaftar =======" << endl;
        cout << "Belum punya akun?(y/n)" << endl;
        cin >> pilakun;
        if (pilakun == 'y')
        {
            goto regmember;
        }
        else if (pilakun == 'n')
        {
            goto logmember;
        }
        else
        {
            system("cls");
            cout << "========= Menu Tidak di temukan =========" << endl;
            cout << "Tekan Enter untuk kembali ke menu member";
            getch();
            goto member;
        }
    }
// menu member
membermenu:
    system("cls");
    int pilmembermenu;
    cout << "===== Member Menu =====" << endl;
    cout << "|  1.Beli Voucher     |" << endl;
    cout << "|  2.Pesan Snack      |" << endl;
    cout << "|  3.Logout           |" << endl;
    cout << "=======================" << endl;
    cout << endl;
    cout << "Pilihan Anda: ";
    cin >> pilmembermenu;
    switch (pilmembermenu)
    {
    case 1:
        goto memberpaket;
    case 2:
        goto pesan;
    case 3:
        goto mainmenu;
    default:
        system("cls");
        cout << "========= Menu Tidak di temukan =========" << endl;
        cout << endl;
        cout << "Tekan Enter untuk kembali ke menu member";
        getch();
        goto membermenu;
    }

// paket member
memberpaket:
    system("cls");
    int pilihanpaketmember, menit;
    cout << "===== Paket Member =====" << endl;
    cout << "|    1.Paket 1 jam     |" << endl;
    cout << "|    2.Paket 3 jam     |" << endl;
    cout << "|    3.Paket 5 jam     |" << endl;
    cout << "|    4.Paket bebas     |" << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << " Pilihan Anda: ";
    cin >> pilihanpaketmember;
    if (pilihanpaketmember == 1)
    {
        jenispaket = "Paket Member 1 Jam";
        hargapaket = paketm1;
        goto konfirmasi;
    }
    else if (pilihanpaketmember == 2)
    {
        jenispaket = "Paket Member 3 Jam";
        hargapaket = paketm3;
        goto konfirmasi;
    }
    else if (pilihanpaketmember == 3)
    {
        jenispaket = "Paket Member 5 Jam";
        hargapaket = paketm5;
        goto konfirmasi;
    }
    else if (pilihanpaketmember == 4)
    {
        system("cls");
        cout << "================== Paket Bebas ===================" << endl;
        cout << "|  Silahkan tulis berapa lama anda ingin bermain |" << endl;
        cout << "|  Fyi: 1 jam = 60 menit                         |" << endl;
        cout << "==================================================" << endl;
        cout << endl;
        cout << "Masukkan menit: ";
        cin >> menit;
        jenispaket = "Paket Member Bebas";
        hargapaket = paketbebas * menit;
        goto konfirmasi;
    }
    else
    {
        cout << "========= Menu Tidak di temukan =========" << endl;
        cout << "Tekan Enter untuk kembali memilih paket";
        getch();
        goto memberpaket;
    }
    // konfirmasi tambah
konfirmasi:
    system("cls");
    int kontambahan;
    char pilkonfirmasi;
    cout << "=================== KONFIRMASI ===================" << endl;
    cout << "|  Paket yang anda pilih adalah Paket" << jenispaket << " |" << endl;
    cout << "|  dengan total harus di bayar Rp." << hargapaket << "          |" << endl;
    cout << "==================================================" << endl;
    cout << "Apakah ada pesanan lain? (y/n)     ";
    cin >> pilkonfirmasi;
    if (pilkonfirmasi == 'y')
    {
        // pilihan tambahan
    pilihantambahan:
        system("cls");
        cout << "=== Pilih Tambahan Anda ===" << endl;
        cout << "| 1. Snack                 |" << endl;
        cout << "| 2. Paket lain            |" << endl;
        cout << "============================" << endl;
        cout << "Pilihan Anda: ";
        cin >> kontambahan;
        switch (kontambahan)
        {
        case 1:
            goto pesan;
        case 2:
            goto tambah;
        default:
            system("cls");
            cout << "===== Menu Tidak di temukan =====" << endl;
            cout << "Tekan Enter untuk kembali";
            getch();
            goto pilihantambahan;
        }
    }

    else if (pilkonfirmasi == 'n')
    {
        goto tagihan;
    }
    else
    {
        cout << "===== Menu Tidak di temukan =====" << endl;
        cout << "Tekan Enter untuk kembali ke menu paket ";
        getch();
        goto konfirmasi;
    }
// Admin
adimin:
    system("cls");
    cout << "========= Login Admin =========\n";
    cout << "Masukkan Username Admin : ";
    cin >> aid;
    cout << endl
         << "Masukkan Password Admin : ";
    cin >> apass;
    if (aid == usera & apass == passa)
    {
        system("cls");
        cout << "===== Login Berhasil =====" << endl;
        cout << "Tekan Enter untuk melanjutkan";
        getch();
        goto MamankSuper;
    }
    else
    {
        system("cls");
        cout << "===== Login Gagal=====" << endl;
        cout << "Tekan Enter untuk kembali ke menu login";
        getch();
        goto adimin;
    }
    // Menu Update Admin
MamankSuper:
    system("cls");
    int opsi;
    cout << "===== MENU UPDATE ADMIN =====" << endl;
    cout << "|  1. Update Menu Paket     |" << endl;
    cout << "|  2. Update Menu Member    |" << endl;
    cout << "|  3. Update Menu Snack     |" << endl;
    cout << "|  0. Log Out               |" << endl;
    cout << "=============================";
    cout << "\n\nMenu yang akan di update: ";
    cin >> opsi;

    if (opsi == 1)
    {
        goto updatepaket;
    }
    if (opsi == 2)
    {
        goto updatemember;
    }
    if (opsi == 3)
    {
        goto updatesnack;
    }
    if (opsi == 0)
    {
        goto mainmenu;
    }
    else
    {
        cout << "===== Menu Tidak tersedia =====" << endl;
        cout << "Tekan Enter untuk kembali ke menu update";
        getch();
        goto MamankSuper;
    }

    // Update Menu Paket
updatepaket:
    system("cls");
    int upaket;

    cout << "======= PILIH MENU YANG AKAN DI UPDATE =======" << endl;
    cout << "|  1. Paket 1 Jam = " << paket1 << " |" << endl;
    cout << "|  2. Paket 3 Jam = " << paket3 << " |" << endl;
    cout << "|  3. Paket 5 Jam =" << paket5 << " |" << endl;
    cout << "|  0. Kembali Ke Menu Admin        |" << endl;
    cout << "================================================" << endl;
    cout << "Menu yang akan di update: ";
    cin >> upaket;

    if (upaket == 1)
    {
        cout << "Masukkan Harga Baru :";
        cin >> p1j;

        paket1 = p1j;
        goto updatepaket;
    }
    if (upaket == 2)
    {
        cout << "Masukkan Harga Baru :";
        cin >> p3j;

        paket3 = p3j;
        goto updatepaket;
    }
    if (upaket == 3)
    {
        cout << "Masukkan Harga Baru :";
        cin >> p5j;

        paket5 = p5j;
        goto updatepaket;
    }
    if (upaket == 0)
    {
        goto MamankSuper;
    }
    else
    {
        cout << "==== Menu Tidak Tersedia =====" << endl;
        cout << "Tekan Enter untuk kembali ke menu update";
        getch();
        goto updatepaket;
    }

updatemember:
    system("cls");
    int umember;

    cout << "==== PILIH MENU YANG AKAN DI UPDATE ====" << endl;
    cout << "|  1. Paket 1 Jam = " << paketm1 << " |" << endl;
    cout << "|  2. Paket 3 Jam = " << paketm3 << " |" << endl;
    cout << "|  3. Paket 5 Jam =" << paketm5 << " |" << endl;
    cout << "|  4. Paket Bebas = " << paketbebas << " |" << endl;
    cout << "|  0. Kembali Ke Menu Admin            |" << endl;
    cout << "========================================" << endl;
    cout << "Menu yang akan di update: ";
    cin >> umember;

    if (umember == 1)
    {
        cout << "Masukkan Harga Baru :";
        cin >> pm1j;

        paketm1 = pm1j;
        goto updatemember;
    }
    if (umember == 2)
    {
        cout << "Masukkan Harga Baru :";
        cin >> pm3j;

        paketm3 = pm3j;
        goto updatemember;
    }
    if (umember == 3)
    {
        cout << "Masukkan Harga Baru :";
        cin >> pm5j;

        paketm5 = pm5j;
        goto updatemember;
    }
    if (umember == 4)
    {
        cout << "Masukkan Harga Baru 1 jam :";
        cin >> pbebas;

        paketbebas = pbebas / 60;
        goto updatemember;
    }
    if (umember == 0)
    {
        goto MamankSuper;
    }
    else
    {
        cout << "Menu tidak tersedia" << endl;
        cout << "Tekan Enter untuk kembali ke menu update";
        getch();
        goto updatemember;
    }

updatesnack:
    system("cls");
    int umakan;

    cout << "======= PILIH MENU YANG AKAN DI UPDATE =======" << endl;
    cout << "\n\n|  1. Nasi Kucing + Gorengan = " << hmakanan[1] << " |" << endl;
    cout << "|  2. Mie Rebus Telor = " << hmakanan[2] << " |" << endl;
    cout << "|  3. Mie Rebus Tante = " << hmakanan[3] << " |" << endl;
    cout << "|  4. Mie Goreng Tante = " << hmakanan[4] << " |" << endl;
    cout << "|  5. Mie Goreng Telor = " << hmakanan[5] << " |" << endl;
    cout << "|  6. Roti = " << hmakanan[6] << " |" << endl;
    cout << "|  7. Jeruk = " << hmakanan[7] << " |" << endl;
    cout << "|  8. Teh = " << hmakanan[8] << " |" << endl;
    cout << "|  9. KopiKap = " << hmakanan[9] << " |" << endl;
    cout << "|  0. Kembali Ke Menu Admin                   |" << endl;
    cout << "================================================" << endl;
    cout << "Menu yang akan di update: ";
    cin >> umakan;

    if (umakan == 1)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m1;

        hmakanan[1] = m1;
        goto updatesnack;
    }
    if (umakan == 2)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m2;

        hmakanan[2] = m2;
        goto updatesnack;
    }
    if (umakan == 3)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m3;

        hmakanan[3] = m3;
        goto updatesnack;
    }
    if (umakan == 4)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m4;

        hmakanan[4] = m4;
        goto updatesnack;
    }
    if (umakan == 5)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m5;

        hmakanan[5] = m5;
        goto updatesnack;
    }
    if (umakan == 6)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m6;

        hmakanan[6] = m6;
        goto updatesnack;
    }
    if (umakan == 7)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m7;

        hmakanan[7] = m7;
        goto updatesnack;
    }
    if (umakan == 8)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m8;

        hmakanan[8] = m8;
        goto updatesnack;
    }
    if (umakan == 9)
    {
        cout << "Masukkan Harga Baru :";
        cin >> m9;

        hmakanan[9] = m9;
        goto updatesnack;
    }
    if (umakan == 0)
    {
        goto MamankSuper;
    }
    else
    {
        cout << "==== Menu Tidak Tersedia =====" << endl;
        cout << "Tekan Enter untuk kembali ke menu update";
        getch();
        goto updatesnack;
    }
// tagihan
tagihan:
    system("cls");
    cout << "=================Tagihan=================" << endl;
    cout << "  Harga Paket    : Rp." << hargapaket << endl;
    cout << "  Harga Tambahan : Rp." << hargapakettambah << endl;
    cout << "  Harga Snack    : Rp." << hmakanan[0] << endl;
    cout << "                  ______________ +" << endl;
    cout << endl;
    cout << "  Total Harga    : Rp." << hargapakettambah + hargapaket + hmakanan[0] << endl;
    cout << endl;
    cout << "  Silahkan lakukan pembayaran" << endl;
    cout << "  Masukkan uang Anda ke mesin" << endl;
    cout << "  Konfirmasi dengan menekan enter" << endl;
    getch();
    system("cls");
    if (hargapaket == 0 && hmakanan[0] != 0)
    {
        cout << "====Pembayaran Berhasil====" << endl;
        cout << "Tekan Enter Untuk Keluar" << endl;
        cout << "Silahkan ambil pesanan anda" << endl;
        getch();
        goto mainmenu;
    }
    else if (hargapaket != 0)
    {
        cout << "====Pembayaran Berhasil====" << endl;
        cout << "Tekan Enter Untuk Melihat Voucher" << endl;
        getch();
        goto kodepaket;
    }
    else
    {
        cout << "====Pembayaran Gagal====" << endl;
    }

// generate kode paket
kodepaket:
    system("cls");
    // generate ranndom alphanumeric
    srand(time(0)); // di pake buat acuan munculin random number nya

    for (int i = 0; i < 5; i++) // looping untuk mencetak karakter, limit di mulai dari 0
    {
        code += character[rand() % 62]; // code += character maksud nya adalah code = code + character yang berarti isi dari "code" adalah random character
    }
    // tampilan kode paket
    cout << "=====Kode Paket=====" << endl;
    cout << "Kode Paket : " << code << endl;
    cout << "Tekan enter untuk keluar" << endl;
    getch();
    
     goto redemcode;

    redemcode:
    
    cout<<"SILAHKAN REDEM VOUcER ANDA"<<endl;
    cout<<"Masukkan Kode: ";
    cin>> coderedem;
    
    if( coderedem == code){
        cout<<"kode vocer berhasil di redem";
        getch();
    }
    else{
        cout<<"KODE YANG ANDA MASUKKAN SALAH/TELAH DIREDEM"<<endl;
        cout<<"SILAHKAN MASUKKAN KODE YG BENAR"<<endl;

        getch();
        system("cls");
        goto redemcode;

    }


    // Exit
exit:
    system("cls");
    cout << "Aplikasi di tutup" << endl;
    getch();

    return 0;
} // batas akhir coyy jan kelewat
