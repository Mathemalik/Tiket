/* 
Create by : 
1911511234 : Miftaugro Malik
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

int
main ()
{
  char mifta[255] /*nama */ ;
  int ugro /* tanggal */ , malik /*umur */ , jenisf /*jenis_film */ ,
    jamp /*jam_putar */ , jenisb /*jenis_bangku */ ,
    jumlaht /*jumlah_tiket */ , tiket /*tiket */ , potongan /*potongan */ ,
    hargab /*harga_bangku */ , totalh /*total_harga */ ;
  int uang /*uang */ , kembalian /*kembalian */ , mengulang /*mengulang */ ,
    belit[20] /*belitiket */ , pilih /*pilih */ ;
  char ulang /*ulang */ , nim[10] /*nim */ ;
  string ttl /*ttl */ ;
  int i = 1;			/*i */

  do
    {
      system ("cls");
      cout << "DAFTAR PEMESANAN TIKET 21" << endl;
      cout << "======================================" << endl;
      fflush (stdin);
      cout << " Nama Pelanggan \t\t: ";
      gets (mifta);
      fflush (stdin);
      cout << " Tanggal lahir (thn-bln-tgl) \t: ";
      cin >> ttl;

      stringstream geek (ttl);
      ugro = 0;
      geek >> ugro;


      if (ugro > 2019)
	{
	  cout << " Maaf kamu salah input tahun! Maksimal Tahun 2019 " <<
	    endl;
	  goto back;
	}
      else if (ugro < 1900)
	{
	  cout << " Maaf kamu salah input tahun! Minimal Tahun 1900 " << endl;
	  goto back;
	}
      malik = 2019 - ugro;
      cout << " Umur \t\t\t\t: " << malik << " Tahun" << endl;

      if (malik >= 17)
	{
	  fflush (stdin);
	  cout <<
	    " Jenis Film dengan pilihan : \n 1. Anak-anak \n 2. Komedi Remaja \n 3. Dewasa \n Pilih (1/2/3)  = ";
	  cin >> jenisf;
	  cout << endl;
	  if (jenisf > 3)
	    {
	      cout << " Maaf, kode jenis film yang kamu masukkan salah! " <<
		endl;
	      goto back;
	    }
	}
      else if (malik < 17 && malik > 13)
	{
	  fflush (stdin);
	  cout <<
	    " Jenis Film dengan pilihan : \n 1. Anak-anak \n 2. Komedi Remaja \n  \n Pilih (1/2)  = ";
	  cin >> jenisf;
	  cout << endl;
	  if (jenisf > 2)
	    {
	      cout << " Maaf, kode jenis film yang kamu masukkan salah! " <<
		endl;
	      goto back;
	    }
	}
      else if (malik <= 13 && malik > 3)
	{
	  fflush (stdin);
	  cout << " Jenis Film = Anak-anak \n";
	  jenisf = 1;
	}
      else
	{
	  cout <<
	    " Maaf tidak dapat menonton karena usia kurang dari sama dengan 3 tahun"
	    << endl;
	  goto back;
	}

      cout <<
	" Jam Putar dengan pilihan : \n 1. 10.00 \n 2. 13.20 \n 3. 18.20 \n 4. 21.20 \n Pilih (1/2/3/4)  = ";
      cin >> jamp;
      cout << endl;

      switch (jenisf)
	{
	  fflush (stdin);
	case 1:
	  if (jamp == 1)
	    {
	      cout <<
		" Judul Film: \" Dora the Movie\" \n Teater : \" Teater 1\" \n";
	      tiket = 25000;
	    }
	  else if (jamp == 2)
	    {
	      cout <<
		" Judul Film: \"Naruto the Movie\" \n Teater : \"Teater 1\" \n";
	      tiket = 25000;
	    }
	  else if (jamp == 3)
	    {
	      cout <<
		" Judul Film: \" Doraemon the Movie\" \n Teater : \"Teater 1\" \n";
	      tiket = 25000;
	    }
	  else if (jamp == 4)
	    {
	      cout <<
		" Judul Film: \" Tidak Beroperasi\" \n Teater : \"Teater Kosong\" \n";
	      goto back;
	    }
	  else
	    {
	      cout << " Maaf, kode jam putar yang kamu masukkan salah! " <<
		endl;
	      goto back;
	    }
	  break;
	case 2:
	  if (jamp == 1)
	    {
	      cout <<
		" Judul Film : \" SuperMan is Dad\" \n Teater : \"Teater 2\"\n";
	      tiket = 35000;
	    }
	  else if (jamp == 2)
	    {
	      cout <<
		" Judul Film : \" Pocong Pink\" \n Teater : \"Teater 3\" \n";
	      tiket = 35000;
	    }
	  else if (jamp == 3)
	    {
	      cout <<
		" Judul Film : \" Tahu Bunting Cinta\" \n Teater :\"Teater 1\" \n";
	      tiket = 35000;
	    }
	  else if (jamp == 4)
	    {
	      cout <<
		" Judul Film : \" Horor Merah Jambu\" \n Teater : \"Teater 3\" \n";
	      tiket = 35000;
	    }
	  else
	    {
	      cout << " Maaf, kode jam putar yang kamu masukkan salah" <<
		endl;
	      goto back;
	    }
	  break;
	case 3:
	  if (jamp == 1)
	    {
	      cout <<
		" Judul Film : \" tidak beroperasi\" \nTeater : \"Teater kosong\"\n";
	      goto back;
	    }
	  else if (jamp == 2)
	    {
	      cout <<
		" Judul film : \" satu atap dua cinta\" \n Teater : \"Teater 3\"\n ";
	      tiket = 40000;
	    }
	  else if (jamp == 3)
	    {
	      cout <<
		" Judul Film : \" the rainBow\" \n Teater : \"Teater 2\"\n ";
	      tiket = 40000;
	    }
	  else if (jamp == 4)
	    {
	      cout << " Judul Film : \" IronMan\" \n Teater :\"Teater 1\"\n";
	      tiket = 40000;
	    }
	  else
	    {
	      cout << " Maaf, kode jam putar yang kamu masukkan salah " <<
		endl;
	      goto back;
	    }
	  break;
	default:
	  cout << " Maaf anda salah input !!";
	}
      cout << endl;
      cout <<
	" Jenis Bangku : \n 1. VIP \n 2. Bisnis \n 3. Biasa \n Pilih (1/2/3)  = ";
      cin >> jenisb;
      if (jenisb == 1)
	{
	  hargab = 20000;
	}
      else if (jenisb == 2)
	{
	  hargab = 10000;
	}
      else if (jenisb == 3)
	{
	  hargab = 0;
	}
      else
	{
	  cout << " Maaf, kode jenis bangku yang kamu masukkan salah " <<
	    endl;
	  goto back;
	}


      cout << " Jumlah Tiket \t= ";
      cin >> jumlaht;
      if (jumlaht >= 3)
	{
	  potongan = 5000;
	}
      else if (jumlaht <= 0)
	{
	  cout << " Jumlah tiket yang dipesan minimal 1 tiket " << endl;
	  goto back;
	}
      else
	{
	  potongan = 0;
	}

      cout << endl;
      // untuk memilih kursi sebanyak berapa tiketnya
      cout << " Kursi yang tersedia : " << endl;
      while (i <= 30)
	{
	  cout << " " << i;
	  i++;
	}

      cout <<
	"\n Pilih Kursi (hanya masukkan nomor kursi awal yang diinginkan) = ";
      cin >> pilih;

      // untuk mengcopy array
      for (int j = 0; j < jumlaht; j++)
	{
	  belit[j] = pilih;
	  pilih++;
	}

      // untuk menampilkan tiket yang dibeli
      cout << " Kursi yang dipilih \t= ";
      for (int g = 0; g < jumlaht; g++)
	{
	  cout << belit[g] << "  ";
	}

      cout << endl;
      totalh = ((tiket + hargab) * jumlaht) - potongan;
      cout << endl;
      cout << " Total Bayar \t\t= Rp." << totalh;
      cout << "\n Uang \t\t\t= Rp.";
      cin >> uang;
      kembalian = uang - totalh;
      if (kembalian < 0)
	{
	  cout << " Maaf jumlah uang kurang dari total bayar !!" << endl;
	  goto back;
	}
      cout << " Kembalian \t\t= Rp." << kembalian << endl;
      cout << endl;

      system ("cls");
      cout << " DAFTAR PEMESANAN TIKET 21" << endl;
      cout << " ===============================" << endl;
      cout << " Nama	\t = " << mifta << endl;
      cout << " Tanggal Lahir \t = " << ttl << " (thn-bln-tgl)" << endl;
      cout << " Usia \t\t = " << malik << endl;
      cout << " Jenis Film \t = ";
      if (jenisf == 1)
	{
	  cout << "Anak-anak " << endl;
	}
      else if (jenisf == 2)
	{
	  cout << "Komedi Remaja " << endl;
	}
      else
	{
	  cout << "Dewasa " << endl;
	}

      cout << " Jam tayang \t = ";
      if (jamp == 1)
	{
	  cout << "10:20 " << endl;
	}
      else if (jamp == 2)
	{
	  cout << "13:20 " << endl;
	}
      else if (jamp == 3)
	{
	  cout << "18:20 " << endl;
	}
      else
	{
	  cout << "21:20 " << endl;
	}

      switch (jenisf)
	{
	  fflush (stdin);
	case 1:
	  if (jamp == 1)
	    {
	      cout <<
		" Judul Film \t= Dora the Movie \n Teater \t= Teater 1 \n";
	    }
	  else if (jamp == 2)
	    {
	      cout <<
		" Judul Film \t= Naruto the Movie \n Teater \t= Teater 1 \n";
	    }
	  else if (jamp == 3)
	    {
	      cout <<
		" Judul Film \t= Doraemon the Movie \n Teater \t Teater 1 \n";
	    }
	  else if (jamp == 4)
	    {
	      cout <<
		" Judul Film \t= Tidak Beroperasi \n Teater \t= Teater Kosong \n";
	    }
	  break;
	case 2:
	  if (jamp == 1)
	    {
	      cout <<
		" Judul Film \t\t= SuperMan is Dad \n Teater \t= Teater 2 \n";
	    }
	  else if (jamp == 2)
	    {
	      cout << " Judul Film \t= Pocong Pink \n Teater \t= Teater 3\n";
	    }
	  else if (jamp == 3)
	    {
	      cout <<
		" Judul Film \t= Tahu Bunting Cinta \n Teater \t= Teater 1\n";

	    }
	  else if (jamp == 4)
	    {
	      cout <<
		" Judul Film \t= Horor Merah Jambu \n Teater \t= Teater 3 \n";
	    }
	  else
	    {
	      cout << " Maaf, kode jam putar yang kamu masukkan salah" <<
		endl;
	    }
	  break;
	case 3:
	  if (jamp == 1)
	    {
	      cout <<
		" Judul Film \t= tidak beroperasi \n Teater\t= Teater kosong \n";
	    }
	  else if (jamp == 2)
	    {
	      cout <<
		" Judul film \t= satu atap dua cinta \n Teater \t= Teater 3\n ";
	    }
	  else if (jamp == 3)
	    {
	      cout << " Judul Film \t= the rainBow \n Teater \t= Teater 2\n ";
	    }
	  else if (jamp == 4)
	    {
	      cout << " Judul Film \t= IronMan \n Teater \t= Teater 1\n";
	    }
	  break;
	}


      cout << " Jenis Bangku \t = ";
      if (jenisb == 1)
	{
	  cout << " VIP " << endl;
	}
      else if (jenisb == 2)
	{
	  cout << " Bisnis " << endl;
	}
      else
	{
	  cout << " Biasa " << endl;
	}

      cout << " No Bangku : " << endl;

      for (int ngels = 1; ngels <= 30; ngels++)
	{
	  cout << " " << ngels;
	}

      cout << endl;

      // untuk menampilkan tiket yang dibeli
      cout << " Kursi yang dipilih no \t= ";
      for (int g = 0; g < jumlaht; g++)
	{
	  cout << belit[g] << "  ";
	}
      cout << endl;
      cout << endl;
      cout << " Jumlah Tiket \t = " << jumlaht << endl;
      cout << " Total Bayar \t = " << totalh << endl;
      cout << " Uang \t\t = " << uang << endl;
      cout << " Kembalian \t = " << kembalian << endl;

      cout << endl;

      cout << " Programmer : " << endl;
      cout << " NIM  \t\t= ";
      cin >> nim;
      if (nim == " 1911511234")
	{			// nim saya = 1911511234
	  cout << " Nama \t= Miftaugro Malik" << endl;
	}
      else
	{
	  cout << " Dibuat Oleh \t= Miftaugro Malik " << endl;
	}


      cout << "\n 1. Mengulang lagi \n 2. Keluar/Selesai \n Pilih (1/2) \t= ";
      cin >> mengulang;
      if (mengulang == 1)
	{
	back:
	  cout << " Mengulang lagi (Y/T) \t= ";
	  cin >> ulang;
	  if (ulang == 't' || ulang == 'T')
	    {
	      return 0;
	    }
	}
      else if (mengulang == 2)
	{
	  exit (0);
	}
    }
  while (ulang == 'y' || ulang == 'Y');
  getch ();
  return 0;
}
