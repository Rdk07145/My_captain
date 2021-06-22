#include <stdio.h>

int main() {

  int menu = 0;
  
  printf("\n\nEnter a number from 1 to 5 to get a surprise food item : ");
  scanf("%d",&menu);

  switch(menu)
  {
    case 1:
    printf("\n Food item - Burger\n\n Price - Rs 239/-");
    break;

     case 2:
    printf("\n Food item - Pizza\n\n Price - Rs 129/-");
    break;

    case 3:
    printf("\n Food item - Sandwich\n\n Price - Rs 179/-");
    break;

     case 4:
    printf("\n Food item - Coca Cola\n\n Price - Rs 99/-");
    break;

     case 5:
    printf("\n Food item - Pasta\n\n Price - Rs 149/-");
    break;

    default:
    printf("\n ERROR (Enter a no. from 1 to 6)");
    

  }

  return 0;
}
