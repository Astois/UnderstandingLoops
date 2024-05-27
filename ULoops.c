  #include <stdio.h>

  int main(){
    int upto;
    int previousnum = 0;
    int currentnum = 1;
    int nextnum;
    
    printf("How many numbers do you wnat to generate?\n");
    scanf("%d", &upto);

    printf("Febancci series up to %d\n", upto);
    printf("%d\n", previousnum);
    printf("%d\n", currentnum);

    for (int i = 0; i <= upto - 2; i++) {
      nextnum = currentnum + previousnum;
      previousnum = currentnum;
      currentnum = nextnum;
      printf("%d\n", nextnum);
    }
  }
