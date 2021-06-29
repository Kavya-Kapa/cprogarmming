
#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    switch(number)

    {
        case 1:
            printf("Food item - Pasta\nPrice - Rs 179");
            break;
        case 2:
            printf("Food item - Burger\nPrice - Rs 129");
            break;
        case 3:
            printf("Food item - Pizza\nPrice - Rs 239");
            break;
        case 4:
            printf("Food item - Sandwich\nPrice - Rs 149");
            break;
        default:
            printf("Enter number between 1 to 4");
    }
}
