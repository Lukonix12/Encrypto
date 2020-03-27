#include <stdlib.h>
#include <stdio.h>

int main(){
  srand((unsigned)time(NULL));
  FILE* fp;
  char senha[15];
  printf("Digite a palavra a ser encriptada: ");
  scanf("%s",&senha);
  char i;
  for(i =  0; i< 10; i++){
    senha[i] = 'a' + (char)(rand()%100000);
  }
  printf("Palavra encriptada: %s\n",senha);
  if((fp=fopen ("senha.txt","wb"))!= NULL){
      fwrite(senha,1,sizeof(senha), fp);
      fclose(fp);
  }
  printf("-Algumas caracteres mostradas acima podem estar incorretas para ver elas no\nformato utf-8 vai no arquivo 'senha.txt'.\n");
  printf("-A sua senha sera substuida se voce executar o programa novamente");
  return 0;
}
