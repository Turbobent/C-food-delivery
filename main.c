#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 4

int main() {
    int menuChoice;
    int *order;

    const char *mc_bruger[MAX_ITEMS] = {
        "1. Cheeseburger 26$",
        "2. Chicken Nuggets 5$",
        "3. Fries 10$",
        "4. Cola 3$"
    };

    const char *bruger_queen[MAX_ITEMS] = {
        "1. Double Bacon Burger 22$",
        "2. Onion Rings 15$",
        "3. Milkshake (Vanilla/Chocolate) 12$",
        "4. Sweet Potato Fries 13$"
    };

    const char *lagkage_telt[MAX_ITEMS] = {
        "1. Strawberry Layer Cake 40$",
        "2. Chocolate Mousse Cake 36$",
        "3. Coffee 50$",
        "4. Tea 2$"
    };

    printf("Welcome to Food Del!\n");
    printf("What restaurant do you want to order from?\n");
    printf("Available restaurants:\n");
    printf("    1. Mc Bruger\n");
    printf("    2. Bruger Queen\n");
    printf("    3. Lagkage Telt\n");
    printf("Enter choice: ");
    scanf("%d", &menuChoice);

    if (menuChoice == 1) {
        printf("Menu: Mc Bruger\n");
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("  - %s\n", mc_bruger[i]);
        }
    } else if (menuChoice == 2) {
        printf("Menu: Bruger Queen\n");
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("  - %s\n", bruger_queen[i]);
        }
    } else if (menuChoice == 3) {
        printf("Menu: Lagkage Telt\n");
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("  - %s\n", lagkage_telt[i]);
        }
    } else {
        printf("Invalid choice.\n");
    }

    printf("what items do you want to order:");
    scanf("%d", &order);

    return 0;
}
