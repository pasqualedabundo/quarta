
#include <stdio.h>
#define MAX 10
int coda[MAX];
int main(){
int inizio = -1;
int fine = -1;
// Controllo coda vuota
int vuota() {
 return (inizio == -1);
}
// Controllo coda piena
int piena() {
 return ((fine + 1) % MAX == inizio);
}
// Inserimento
void enqueue(int valore) {
 if (piena()) {
 printf("Coda piena! Inserimento non possibile.\n");
 return;
 }
 if (vuota()) {
 inizio = 0;
 fine = 0;
 } else {
 fine = (fine + 1) % MAX;
 }
 coda[fine] = valore;
}
// Estrazione
void dequeue() {
 if (vuota()) {
 printf("Coda vuota! Non c'e' niente da estrarre.\n");
 return;
 }
 printf("Estratto: %d\n", coda[inizio]);
 if (inizio == fine) {
 // Ultimo elemento
 inizio = -1;
 fine = -1;
 } else {
 inizio = (inizio + 1) % MAX;
 }
}
// Stampa
void stampa() {
 if (vuota()) {
 printf("Coda vuota!\n");
 return;
 }
 printf("Coda: ");
 int i = inizio;
 while (1) {
 printf("%d ", coda[i]);
 if (i == fine)
 break;
 i = (i + 1) % MAX;
 }
 printf("\n");
}
 
}
