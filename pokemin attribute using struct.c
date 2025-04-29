#include <stdio.h>
#include<string.h>

struct pokemon{
  int attack;
  int speed;
  int hp;
  char teir[20];
};

int main() {
    struct pokemon mewtwo;
    printf("Enter a hp of mewtow: ");
    scanf("%d",&mewtwo.hp);
    
    printf("Enter a attack of mewtow: ");
    scanf("%d",&mewtwo.attack);
    
    printf("Enter a speed of mewtow: ");
    scanf("%d",&mewtwo.speed);
    
    strcpy(mewtwo.teir,"Legendary");
    
    printf("\n");
    printf("Attrubite of Metow: \n");
    printf("Hp: %d\n",mewtwo.hp);
    printf("Attack: %d\n",mewtwo.attack);
    printf("Speed: %d\n",mewtwo.speed);
    printf("Rank: %s\n",mewtwo.teir);
    
    return 0;
}
