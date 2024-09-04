#include <iostream>;
#include <Windows.h>;
#include <time.h>;
#include <stdlib.h>;


using namespace std;


void space() {
	cout << "" << endl;
}


void clear() {
	system("cls");
}


int main() {

	int coinMiktari = 1000;          // Baþlangýç coin miktarý.
	int minOynamaMiktari = 100;     // En az oynama miktarý.

	int kurpiyerMinZar = 1;       // Kurpiyerin atabileceði en az zar deðeri.
	int kurpiyerMaxZar = 6;      // Kurpiyerin atabileceði en fazla zar deðeri.

	int oyuncuMinZar = 1;      // Oyuncunun atabileceði en az zar deðeri.
	int oyuncuMaxZar = 6;     // Oyuncunun atabileceði en fazla zar deðeri.

	char esitteKazanma = 'K';

	bool durum = true;
	while (durum) {

		int secim, oyuncuNo, kurpiyerNo, oynamaMiktari;

		cout << "[1] Oynamaya Basla" << endl;
		cout << "[2] Ayarlar" << endl;
		cout << "[3] Oyun Hakkinda Bilgi Al" << endl;
		cout << "[4] Iletisim" << endl;
		space();
		cout << "Secim: ";
		cin >> secim;

		clear();

		if (secim == 1) {
			cout << "Coin Miktari: " << coinMiktari << endl;
			space();
			cout << "Kac coin ile oynayacaksiniz: ";
			cin >> oynamaMiktari;

			clear();

			if (oynamaMiktari <= coinMiktari) {
				if (oynamaMiktari >= minOynamaMiktari) {

					oyuncuNo = rand() % oyuncuMaxZar + oyuncuMinZar;

					kurpiyerNo = rand() % kurpiyerMinZar + kurpiyerMaxZar;

					cout << "Sayi tutuyorsunuz.." << endl;
					Sleep(3000);

					cout << "Kurpiyer sayi tutuyor.." << endl;
					Sleep(3000);

					clear();

					if (oyuncuNo > kurpiyerNo) {
						cout << "Siz: " << oyuncuNo << endl;
						cout << "Kurpiyer: " << kurpiyerNo << endl;
						space();
						cout << "Siz kazandiniz, tebrikler!";
						coinMiktari = coinMiktari + oynamaMiktari;
						Sleep(5000);
						clear();
					}

					else if (oyuncuNo < kurpiyerNo) {
						cout << "Siz: " << oyuncuNo << endl;
						cout << "Kurpiyer: " << kurpiyerNo << endl;
						space();
						cout << "Kurpiyer kazandi..";
						coinMiktari = coinMiktari - oynamaMiktari;
						Sleep(5000);
						clear();
					}

					else if (oyuncuNo == kurpiyerNo) {
						cout << "Siz: " << oyuncuNo << endl;
						cout << "Kurpiyer: " << kurpiyerNo << endl;
						space();

						if (esitteKazanma == 'K') {
							cout << "Berabere kaldiniz ve kurpiyer kazandi..";
							coinMiktari = coinMiktari - oynamaMiktari;
						}

						if (esitteKazanma == 'B') {
							cout << "Berabere kaldiniz ve sen kazandin!";
							coinMiktari = coinMiktari + oynamaMiktari;
						}

						Sleep(5000);
						clear();
					}

					else {
						cout << "Hata";
						Sleep(3000);
						clear();
					}
				}

				else {
					cout << "Hata:";
					space();
					cout << "1 - En az " << minOynamaMiktari << " coin ile oynayabilirsiniz." << endl;
					cout << "2 - Oynama miktariniz coin miktarinizdan fazla.";
					Sleep(5000);
					clear();
				}
			}

			else {
				cout << "Hata:";
				space();
				cout << "1 - En az " << minOynamaMiktari << " coin ile oynayabilirsiniz." << endl;
				cout << "2 - Oynama miktariniz coin miktarinizdan fazla." << endl;
				Sleep(5000);
				clear();
			}
		}

		else if (secim == 2) {
			cout << "B = Ben     K = Kurpiyer" << endl;
			space();
			cout << "Kurpiyerle esit olursaniz kim kazansin (B - K): ";
			cin >> esitteKazanma;
			clear();

			if (esitteKazanma == 'B' || esitteKazanma == 'K') {
				cout << "Ayarlar kaydedildi!";
				Sleep(3000);
				clear();
			}

			else {
				cout << "Hata";
				Sleep(3000);
				clear();
			}
		}

		else if (secim == 3) {
			cout << "Oynamaya basladiginda hesabindan oynadigin miktar kadar coin cekilir." << endl;
			cout << "Eger senin sayin kurpiyerin sayisindan fazlaysa oynadigin coin miktari" << endl;
			cout << "2 kati olarak hesabina geri iade edilir, ama sayin kurpiyerin sayisindan" << endl;
			cout << "dusukse coin'in yok olur. Esit olursaniz belirlenen ayar uygulanir.";
			Sleep(15000);
			clear();
		}

		else if (secim == 4) {
			cout << "Discord: namto3";
			Sleep(5000);
			clear();
		}

		else {
			cout << "Hata";
			Sleep(3000);
			clear();
		}
	}

	return 0;
}