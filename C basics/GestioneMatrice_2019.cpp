
// Samuele Stabile cpp
#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int const maxdimension = 500;			//<------
int A[maxdimension][maxdimension];		//<------*DICHIARAZIONE VARIABILI GLOBALI*
int addr[maxdimension];					//<------
int addc[maxdimension];					//<------
int nrc;								//<------
int somma;								//<------		
char scelta;							//<------	

int chiedi_nrc() {	        //Non gli passiamo niente poich� abbiamo dichiarato nr nelle variabili globali
	do
	{
		system("cls");
		cout << "\n Inserisci il numero di righe e colonne: ";
		cin >> nrc;
		system("cls");

		if (nrc<0 or nrc>maxdimension)
		{

			cout << "\n ERRORE: Inserisci un numero maggiore di 0 e minore di " << maxdimension;
			cout << "\n";
		}
	} while (nrc<0 or nrc>maxdimension);
	return (nrc);
}

void carica_matrice() { //Non gli passiamo niente poich� abbiamo dichiarato A[maxdim][maxdim] nelle variabili globali

	int r, c;			//r e c sono interni alla funzione poich� sono contatori, e sono utili solo in questa funzione

	r = 0;
	do
	{
		c = 0;
		do
		{
			system("cls");
			cout << "\n Inserisci l'elemento nella casella di riga " << r + 1 << " e di colonna " << c + 1 << ":  ";
			cin >> A[r][c];
			c++;
		} while (c < nrc);
		r++;
	} while (r < nrc);
}

void visualizza_matrice() {		//Non gli passiamo niente poich� abbiamo dichiarato A[maxdim][maxdim] nelle variabili globali
	int r, c, i;					//r e c sono interni alla funzione poich� sono contatori, e sono utili solo in questa funzione
	r = 0;
	i = 0;
	system("cls");
	cout << "\n\n";
	cout << "Questa e' la matrice che hai riempito: \n\n";

	do											// ciclo di visualizazzione matrice
	{
		c = 0;
		cout << "[";
		do
		{
			cout << " " << A[r][c];				//qui puoi mettere tra virgolette <<" |"; per separare le righe dalle colonne ;)
			c++;
		} while (c < nrc);
		r++;
		cout << " ]";
		cout << "\n";
	} while (r < nrc);
	cout << "\n\n";
}

void visual_diagonale_principale() {
	int i, s, f;
	system("cls");
	cout << "\n\n";
	cout << "Questa e' la DIAGONALE PRINCIPALE della matrice: \n\n";
	i = 0;
	f = 0;

	do										// ciclo di visualizazzione diagonale
	{
		if (i > 0) {						// formattazione diagonale 
			f = 0;							//
			do {							//
				cout << "   ";				//
				f++;						//
			} while (f < i);				// 
		}									// fine formattazione diagonale         
		cout << "[";
		cout << A[i][i];
		cout << "]";
		cout << "\n";
		i++;
	} while (i < nrc);
	cout << "\n\n";
}

void visual_diagonale_secondaria() {
	int i, s, f, righe, colonne;
	system("cls");
	cout << "\n\n";
	cout << "Questa e' la DIAGONALE SECONDARIA della matrice: \n\n";
	f = 0;
	righe = 0;
	colonne = nrc - 1;

	do										// ciclo di visualizazzione diagonale
	{
		if (colonne > 0) {						// formattazione diagonale 
			f = 0;								//
			do {								//
				cout << "   ";					//
				f++;							//
			} while (f < colonne);				//
		}										// fine formattazione diagonale					
		cout << "[";
		cout << A[righe][colonne];
		cout << "]";
		cout << "\n";
		righe++;
		colonne--;
	} while (righe < nrc);
	cout << "\n\n";
}

int somma_totale() {
	int r, c;
	int add = 0;
	r = 0;
	do
	{
		c = 0;
		do
		{
			system("cls");
			add = add + A[r][c];
			c++;
		} while (c < nrc);
		r++;
	} while (r < nrc);
	cout << endl;
	cout << endl;
	cout << "La SOMMA di tutti gli elementi nella matrice e': " << "\n\n[ " << add << " ]" << endl;
	cout << endl;
	return (somma);
}

void somma_colonne_righe() {
	int r = 0, c = 0, i = 0;

	//somma per righe
	r = 0;
	i = 0;
	do {
		c = 0;
		do {
			addr[i] = addr[i] + A[r][c];
			c++;
		} while (c < nrc);

		r++;
		i++;
	} while (r < nrc);

	//somma per colonne
	r = 0;
	c = 0;
	i = 0;
	do {
		r = 0;
		do {
			;
			addc[i] = addc[i] + A[r][c];
			r++;
		} while (r < nrc);
		c++;
		i++;
	} while (c < nrc);

	// ciclo di visualizazzione matrice
	r = 0;
	i = 0;
	system("cls");
	cout << "\n\n";
	cout << "Questa e' la matrice che hai riempito: \n\n";

	do											// ciclo di visualizazzione matrice
	{
		c = 0;
		cout << "[";
		do
		{
			cout << " " << A[r][c];				//qui puoi mettere tra virgolette <<" |"; per separare le righe dalle colonne ;)
			c++;
		} while (c < nrc);
		r++;
		cout << " ] " << addr[i];
		cout << "\n";
		i++;
	} while (r < nrc);

	//visual. somme colonne
	i = 0;
	cout << " ";
	do {
		cout << " " << addc[i];
		i++;
	} while (i < nrc);
	cout << "\n\n";
}



void visualizza_matrice_trasposta() {		//Non gli passiamo niente poich� abbiamo dichiarato A[maxdim][maxdim] nelle variabili globali
	int r, c, i;								//r e c sono interni alla funzione poich� sono contatori, e sono utili solo in questa funzione
	r = 0;
	i = 0;
	system("cls");
	cout << "\n\n";
	cout << "Questa e' la matrice TRASPOSTA: \n\n";

	do											// ciclo di visualizazzione matrice
	{
		c = 0;
		cout << "[";
		do
		{
			cout << " " << A[c][r];				//inverto i contatori di colonne e righe per visualizzare la TRASPOSTA
			c++;
		} while (c < nrc);
		r++;
		cout << " ]";
		cout << "\n";
	} while (r < nrc);
	cout << "\n\n";
}


void presentazione() {
	cout << "Ciao!";
	Sleep(1000);
	cout << "\n\nQuesto Programma, Carica, Visualizza, ed esegue operazioni in una Matrice Quadrata. ";
	Sleep(3000);
	cout << "\n\nPer iniziare Carica una matrice a tuo piacere!";
	Sleep(2500);

}

void menu() {
	system("cls");
	cout << "\n--------------MENU-------------" << endl;
	cout << "[1] Somma di tutti gli elementi" << endl;
	cout << "[2] Visualizza Diagonale Principale" << endl;
	cout << "[3] Visualizza Diagonale Secondaria" << endl;
	cout << "[4] Visualizza Matrice Trasposta" << endl;
	cout << "[5] Somma degli elementi per colonne e per righe" << endl;
	cout << "[6] Visualizza Matrice" << endl;
	cout << "[7] Termina Programma" << endl;
	cout << "\n\nINSERISCI OPERAZIONE: ";
	cin >> scelta;
}

int main() {

	presentazione();
	nrc = chiedi_nrc();							//non passiamo niente a nessuna funzione	
	carica_matrice();							//poich� tutto quello che serviva � stato	
	visualizza_matrice();						//dichiarato globalmente PogU
	Sleep(500);
	system("pause");
	do {
		menu();
		switch (scelta) {
		case '1':
			somma = somma_totale();
			system("pause");
			break;
		case '2':
			visual_diagonale_principale();
			system("pause");
			break;
		case '3':
			visual_diagonale_secondaria();
			system("pause");
			break;
		case '4':
			visualizza_matrice_trasposta();
			system("pause");
			break;
		case '5':
			somma_colonne_righe();
			system("pause");
			break;
		case '6':
			visualizza_matrice();
			system("pause");
			break;
		case '7':
			return 0;
			break;
		default:
			cout << "\nERRORE: La scelta deve essere compresa tra 1 e 8!" << endl << endl;
			system("pause");
			break;
		}
	} while (scelta != 7);			//TIP: Nelle parentesi delle funzioni del main devi dichiarare le stesse variabili che dichiari nelle funzioni 
	return 0;
}

