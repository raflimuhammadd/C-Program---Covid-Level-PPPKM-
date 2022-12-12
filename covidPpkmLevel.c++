#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;

typedef struct covid
{
  string provinsi;
  string KabupatenKota;
  int totalPenduduk;
  int PendudukVaksin;
  int totalLansia;
  int LansiaVaksin;
  int levelPpkm;
} cvd;

cvd listCovid[10];

void printListCovid()
{
  int flag = 0;

  cout << "========================================================================================================================" << endl;
  cout << "================================================== Data Covid ==========================================================" << endl;
  cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
  cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << listCovid[i].provinsi << "\t\t- " << listCovid[i].KabupatenKota << "\t\t- " << listCovid[i].totalPenduduk << "\t\t- " << listCovid[i].PendudukVaksin << "\t\t- " << listCovid[i].totalLansia << "\t\t- " << listCovid[i].LansiaVaksin << "\t\t- " << listCovid[i].levelPpkm;
    cout << endl;
  }

  cout << "========================================================================================================================" << endl;
}

void lansiaCovid()
{
  float tempLansia;
  float tempPenduduk;
  int j;
  for (int i = 0; i < 10; i++)
  {
    cout << "Presentase Provinsi " << listCovid[i].provinsi << " "
         << "Kota"
         << " " << listCovid[i].KabupatenKota << endl;
    tempLansia = (float)listCovid[i].LansiaVaksin / listCovid[i].totalLansia * 100;
    cout << "Persentase Vaksin Lansia = " << tempLansia << " %";
    cout << endl;
    tempPenduduk = (float)listCovid[i].PendudukVaksin / listCovid[i].totalPenduduk * 100;
    cout << "Persentase Vaksin Penduduk = " << tempPenduduk << " %";
    cout << endl;
    if (tempLansia >= 60 && tempPenduduk >= 70)
    {
      cout << "PPKM LVL 1";
      listCovid[i].levelPpkm = 1;
      cout << endl;
      cout << endl;
    }
    else if ((tempLansia >= 40 && tempLansia < 60) && (tempPenduduk >= 50 && tempPenduduk < 70))
    {
      cout << "PPKM LVL 2";
      listCovid[i].levelPpkm = 2;
      cout << endl;
      cout << endl;
    }
    else if (tempLansia < 40 && tempPenduduk < 50)
    {
      cout << "PPKM LVL 3";
      listCovid[i].levelPpkm = 3;
      cout << endl;
      cout << endl;
    }
  }
}

void printArray(string arr[], int arraysize)
{
  for (int i = 0; i < arraysize; i++)
    cout << arr[i] << ", ";
}

void binarySearchProvinsi(string arr[], int size)
{
  string dicari;
  cout << "\nBerikut Data  : \n";
  printListCovid();
  sort(arr, arr + size);
  cout << endl;
  cout << "Cari data : ";
  cin >> dicari;
  cout << "\n\nMencari Data Untuk " << dicari;
  if (binary_search(arr, arr + size, dicari))
  {
    cout << "\nData Ditemukan Di : \n";
    for (int i = 0; i < 10; i++)
    {
      if (listCovid[i].provinsi == dicari)
      {
        cout << "================================================== Data Ditemukam ======================================================" << endl;
        cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << listCovid[i].provinsi << "\t\t- " << listCovid[i].KabupatenKota << "\t\t- " << listCovid[i].totalPenduduk << "\t\t- " << listCovid[i].PendudukVaksin << "\t\t- " << listCovid[i].totalLansia << "\t\t- " << listCovid[i].LansiaVaksin << "\t\t- " << listCovid[i].levelPpkm;
        cout << endl;
        cout << "========================================================================================================================" << endl;
      }
    }
  }
  else
  {
    cout << "\nData tidak ditemukan\n";
  }
}

void binarySearchKota(string arr[], int size)
{
  string dicari;
  cout << "\nTBerikut Data : \n";
  printListCovid();
  sort(arr, arr + size);
  cout << endl;
  cout << "Cari data : ";
  cin >> dicari;
  cout << "\n\nMencari Data Untuk " << dicari;
  if (binary_search(arr, arr + size, dicari))
  {
    cout << "\nData Ditemukan Di : \n";
    for (int i = 0; i < 10; i++)
    {
      if (listCovid[i].KabupatenKota == dicari)
      {
        cout << "================================================== Data Ditemukam ======================================================" << endl;
        cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << listCovid[i].provinsi << "\t\t- " << listCovid[i].KabupatenKota << "\t\t- " << listCovid[i].totalPenduduk << "\t\t- " << listCovid[i].PendudukVaksin << "\t\t- " << listCovid[i].totalLansia << "\t\t- " << listCovid[i].LansiaVaksin << "\t\t- " << listCovid[i].levelPpkm;
        cout << endl;
        cout << "========================================================================================================================" << endl;
      }
    }
  }
  else
  {
    cout << "\nData tidak ditemukan\n";
  }
}

void binarySearchPpkm(char arr[], int size)
{
  int dicari;
  cout << "\nBerikut Data : \n";
  printListCovid();
  sort(arr, arr + size);
  cout << endl;
  cout << "Cari level PPKM : ";
  cin >> dicari;
  cout << "\n\nMencari Data Untuk " << dicari;
  if (binary_search(arr, arr + size, dicari))
  {
    cout << "\nData Level PPKM Ditemukan : \n";
    for (int i = 0; i < 10; i++)
    {
      if (listCovid[i].levelPpkm == dicari)
      {
        cout << "================================================== Data Ditemukam ======================================================" << endl;
        cout << "|  Provinsi -|- Kabupaten/Kota -|- Total Penduduk -|- Penduduk Tervaksin -|- Total Lansia -|- Lansia Tervaksin -|- Level PPKM |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << listCovid[i].provinsi << "\t\t- " << listCovid[i].KabupatenKota << "\t\t- " << listCovid[i].totalPenduduk << "\t\t- " << listCovid[i].PendudukVaksin << "\t\t- " << listCovid[i].totalLansia << "\t\t- " << listCovid[i].LansiaVaksin << "\t\t- " << listCovid[i].levelPpkm;
        cout << endl;
        cout << "========================================================================================================================" << endl;
      }
    }
  }
  else
  {
    cout << "\nData tidak ditemukan\n";
  }
}

void searchProvinsi()
{
  string arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = listCovid[i].provinsi;
    // arr[i] = '\0';
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  binarySearchProvinsi(arr, size);
}

void searchKota()
{
  string arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = listCovid[i].KabupatenKota;
    // arr[i] = '\0';
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  binarySearchKota(arr, size);
}

void searchPpkm()
{
  char arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = listCovid[i].levelPpkm;
    // arr[i] = '\0';
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  binarySearchPpkm(arr, size);
}

int main()
{
  string provinsi_cvd[10] = {"Jatim", "Jabar", "Bali", "Jateng", "DKI", "DIY", "Bali", "NTB", "NTT", "Kaltim"};
  string KabupatenKota_cvd[10] = {"Surabaya", "Indramayu", "Tabanan", "Jepara", "Jakarta", "Sleman", "Denpasar", "Sumbawa", "Malaka", "Balikpapan"};
  int totalPenduduk_cvd[10] = {2000, 1400, 1400, 1800, 3000, 4200, 3800, 4500, 6000, 4000};
  int pendudukVaksin_cvd[10] = {600, 800, 700, 1200, 1100, 1600, 1000, 2200, 3000, 2800};
  int totallansiaCovid[10] = {400, 500, 600, 1000, 1000, 1200, 1400, 1600, 1000, 2000};
  int LansiaVaksin_cvd[10] = {320, 250, 350, 400, 450, 800, 510, 500, 500, 1200};
  int pilihan;
  int option;
  int cari;
  int count = 0;
  int i, j, min_idx;
  int temp1;
  string flag;

  for (int i = 0; i < 10; i++)
  {
    listCovid[i].provinsi = provinsi_cvd[i];
    listCovid[i].KabupatenKota = KabupatenKota_cvd[i];
    listCovid[i].totalPenduduk = totalPenduduk_cvd[i];
    listCovid[i].PendudukVaksin = pendudukVaksin_cvd[i];
    listCovid[i].totalLansia = totallansiaCovid[i];
    listCovid[i].LansiaVaksin = LansiaVaksin_cvd[i];
  }

  printListCovid();
  lansiaCovid();

  do
  {

    cout << "1. Ascending " << endl;
    cout << "2. Descending  " << endl;
    cout << "3. Searching " << endl;
    cout << "Masukkan Pilihan Anda :  ";
    cin >> pilihan;

    if (pilihan == 1)
    {
      string flag = "belumUrut";
      cvd temp_data;
      while (flag == "belumUrut")
      {
        flag = "urut";
        for (int i = 1; i < 10; i++)
        {
          // insertiton sort ascending
          temp_data = listCovid[i];
          j = i - 1;
          while (listCovid[j].levelPpkm > temp_data.levelPpkm && j >= 0)
          {
            listCovid[j + 1] = listCovid[j];
            j--;
          }
          listCovid[j + 1] = temp_data;
        }
      }
      printListCovid();
    }

    else if (pilihan == 2)
    {
      string read = "tidakUrut";
      cvd temp_data;
      while (read == "tidakUrut")
      {
        read = "urut";
        for (int i = 1; i < 10; i++)
        {
          // insertiton sort ascending
          temp_data = listCovid[i];
          j = i - 1;
          while (listCovid[j].levelPpkm < temp_data.levelPpkm && j >= 0)
          {
            listCovid[j + 1] = listCovid[j];
            j--;
          }
          listCovid[j + 1] = temp_data;
        }
      }
      printListCovid();
    }

    else if (pilihan == 3)
    {
      int pilihan3;
      cout << "1. Provinsi " << endl;
      cout << "2. Kota " << endl;
      cout << "3. Level PPKM " << endl;
      cout << "Pilih salah satu : ";
      cin >> pilihan3;

      if (pilihan3 == 1)
      {
        searchProvinsi();
      }
      if (pilihan3 == 2)
      {
        searchKota();
      }
      if (pilihan3 == 3)
      {
        searchPpkm();
      }
    }

  } while (pilihan != 0);

  return 0;
}