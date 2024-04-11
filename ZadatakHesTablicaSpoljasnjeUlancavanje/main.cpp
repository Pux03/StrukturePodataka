#pragma once
#include"ChainedHashTable.h"

int main()
{
	//test
	ChainedHashTable tablica(64);
	char jmbg[] = "2907982750051";
	char ime[] = "Nikola Davidovic";
	HashObject o(jmbg, ime);
	tablica.insert(o);
	char jmbg2[] = "2706985730058";
	char ime2[] = "Pera Peric";
	HashObject o1(jmbg2, ime2);
	HashObject o2(jmbg, ime);
	char ime3[] = "Kurcina Kurcic";
	HashObject o3(jmbg2, ime3);
	tablica.insert(o2);
	tablica.insert(o2);
	tablica.insert(o1);
	tablica.insert(o1);
	tablica.insert(o2);
	tablica.insert(o3);
	tablica.print();
	tablica.withdraw(jmbg2);
	tablica.print();
	
	return 0;
}