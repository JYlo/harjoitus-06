/***********************************************
*Harjoitus 6
*Tekij‰: Jouni Y
*Kuvaus:
*Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
*ja lihapiirakan hinnan.
*
*Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
*Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
*Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.
*
*K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
*ostaa lihapiirakkaa.
*
*Versio: 1.0
*PVM: 13.9.2014
************************************************/
#include <iostream>
using namespace std;

void main(void)
{
	int RAHA;
	int LIHIS;

	cout << "Paljonko lompakossasi on rahaa? \n";
	cin >> RAHA;
	cout << "Paljonko lihapiirakka maksaa? \n";
	cin >> LIHIS;

	if (RAHA < LIHIS)
		cout << "Paastoa paastopa"
		<< "\n";

	if (RAHA >= LIHIS)
		cout << "Maha t‰ynn‰ ja lompakossasi on "
		<< (RAHA - LIHIS)
		<< " e."
		<< "\n";
}