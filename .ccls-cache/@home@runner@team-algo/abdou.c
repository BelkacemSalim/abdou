#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void abdou_classi() {

  char *dialogue[] = {"AYA LA BOUBELLE",  "TARBA7",
                      "MELOUR!",          "DOUKOU",
                      "L3IB KELMA",       "BDA LMSS9I",
                      "PARIS MARSEILLE?", "WCHBIK KHO JAMAIS...",
                      "YAAAAAA"};

  srand(time(NULL));
  printf("@@@@@@@\nC|O†O|D\n ( Õ )  <(%s)\n", dialogue[rand() % 9 + 0]);
}