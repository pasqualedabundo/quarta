//PROGRAMMA IN C CHE GESTISCE UNA PILA REALIZZATO CON UN
//CON UN VETTORE DI 10 ELEMENTI
#include <stdio.h>
#define MAX 10
int pila[MAX];
int top = -1;
// Controllo pila vuota
int vuota() {
 return (top == -1);
}
// Controllo pila piena
int piena() {
 return (top == MAX - 1);
}
// Inserimento (PUSH)
void push(int valore) {
 if (piena()) {
 printf("Pila piena! Inserimento non possibile.\n");
 return;
 }
 top++;
 pila[top] = valore;
}
// Estrazione (POP)
void pop() {
 if (vuota()) {
 printf("Pila vuota! Non c'e' niente da estrarre.\n");
 return;
 }
 printf("Estratto: %d\n", pila[top]);
 top--;
}
// Stampa pila
void stampa() {
 if (vuota()) {
 printf("Pila vuota!\n");
 return;
 }
 printf("Pila: ");
 for (int i = top; i >= 0; i--) {
 printf("%d ", pila[i]);
 }
 printf("\n");
}
// MAIN
int main() {
 int scelta, valore;
 do {
 printf("\n--- PILA ---\n");
 printf("1. Inserisci (PUSH)\n");
 printf("2. Estrai (POP)\n");
 printf("3. Stampa\n");
 printf("0. Esci\n");
 scanf("%d", &scelta);
 switch (scelta) {
 case 1:
 printf("Inserisci numero: ");
 scanf("%d", &valore);
 push(valore);
 break;
 case 2:
 pop();
 break;
 case 3:
 stampa();
 break;
 }
 } while (scelta != 0);
 return 0;
}