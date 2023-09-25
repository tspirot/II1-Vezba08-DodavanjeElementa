// Vezba08.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Dodavanje novog elementa
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
	int niz[100] = { 0,1,2,3,4,5,6,7,8,9 };
	int i, n=10, novi, pozicija;
	printf("Unesite novi element: ");
	scanf("%d", &novi);
	printf("Unesite poziciju novog elementa 0-%d: ",n);
	scanf("%d", &pozicija);
	for (i = n - 1; i >= pozicija; i--)
		niz[i + 1] = niz[i];
	niz[pozicija] = novi;
	n++;
	// prikaz niza
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}
