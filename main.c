#include <stdio.h>

unsigned char ReadBit(unsigned char x, int bit);

unsigned char ResetBit(unsigned char a, int bit);

int main(void) {
  unsigned char x,y,z;
  x=0xAB;

  //lendo o bit 5
  y = ReadBit(x,5);

  if(y == 0) printf("a leitura do bit é 0\n");
  else printf("a leitura do bit é 1\n");

  //resetando o bit 7
  z = ResetBit(x,7);
  
  printf("a leitura antes era: %x\n",x);
  printf("a leitura agora é: %x\n",z);


  return 0;
}

unsigned char ReadBit(unsigned char x, int bit){
  unsigned char mask;

  mask = (1<<bit);

  x = x & mask;

  return x;
}

unsigned char ResetBit(unsigned char a, int bit){
  unsigned char mask;

  mask = ~(1<<bit);

  a = a & mask;

  return a;
}