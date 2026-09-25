#include <stdio.h>

int main() {
    int N, nights;
    char season, roomType;
    float rate, cost, discount, total, hotelRevenue = 0;

    printf("Enter number of guests: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("\n--- Guest %d ---\n", i);
        printf("Enter season (P for Peak, O for Off-Peak): ");
        scanf(" %c", &season);
        printf("Enter room type (S for Standard, D for Deluxe, U for Suite): ");
        scanf(" %c", &roomType);
        printf("Enter nights stayed: ");
        scanf("%d", &nights);

        rate = 0;
        if (season == 'P' || season == 'p') {
            if (roomType == 'S' || roomType == 's') rate = 5000;
            else if (roomType == 'D' || roomType == 'd') rate = 8000;
            else if (roomType == 'U' || roomType == 'u') rate = 12000;
        } else if (season == 'O' || season == 'o') {
            if (roomType == 'S' || roomType == 's') rate = 3000;
            else if (roomType == 'D' || roomType == 'd') rate = 5000;
            else if (roomType == 'U' || roomType == 'u') rate = 8000;
        }

        cost = rate * nights;
        if (nights > 7) {
            discount = cost * 0.15;
        } else {
            discount = 0;
        }

        total = cost - discount;
        hotelRevenue += total;

        printf("Total price for Guest %d: Rs. %.2f\n", i, total);
    }

    printf("\n====================================\n");
    printf("Total Hotel Revenue: Rs. %.2f\n", hotelRevenue);
    printf("====================================\n");

    return 0;
}