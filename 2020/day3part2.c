#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int total = 0;
  int x = 0;
  int place = 0;
  char string[10013];
  char string2[323][3100];
  
  FILE* data = fopen("./input.txt", "r");

  for (i=0; fscanf(data, "%s", &string) != EOF; ++i){
    strcpy(string2[place],string);

    if (i % 2 == 0){
    if (string2[i][x] == '\0'){
      x -= 31;
      printf("cycled");  
    }
        
    if (string2[i][x] == '#'){
      ++total;
    }
    
      x = x + 1;
    }
      printf("%s, %d\n",string2[place], place);
      printf("%c%d\n",string2[i][x],x);
      ++place;
  }
  printf("%d\n",total);
}
