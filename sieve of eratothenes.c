#include <stdio.h>
#include <malloc.h>

void sieb_eratosthenes(int*,int); // Funktionsprototyp
int main(void) {
  int len = 100;
  int *arr = (int*)malloc(sizeof(int*)*len);  // Speicherreservierung

  sieb_eratosthenes(arr,len);  // Funktionsaufruf
  printf("Das sind die Primzahlen von 0 bis %d:\n",len);
  for(int i = 0; i < len; i++){
    if(arr[i] == 1) printf("%d \n",i);
  }
  free(arr);
  return 0;
}

void sieb_eratosthenes(int*arr,int len){

  for(int i = 0; i < len; i++) arr[i] = 1; // Arrayfilling mit lauter 1
  arr[0]=0; // 0 ist keine Primzahl 
  arr[1]=0; // 1 ist keine Primzahl 
  for(int i = 2; i < len; i++){
    if(arr[i]==1){
      for(int j = 2; j < len; j++){
        arr[i*j]=0; // Zahlen, die keine Primzahlen sind werden mit 0 befuellt
      }  
    }
  }
}
