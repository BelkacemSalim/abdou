#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void abdou_classic() {
  
  char *dialogue[] = 
  {
  "AYA LA BOUBELLE\n",
  "TARBA7\n",
  "MELOUR!\n",
  "DOUKOU\n",
  "L3IB KELMA\n",
  "BDA LMSS9I\n",
  "PARIS MARSEILLE?\n",
  "WCHBIK KHO JAMAIS...\n",
  "YAAAAAA\n"
  };
  
  srand(time(NULL));
  printf("%s", dialogue[rand()%9+0]);
}