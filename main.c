#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 4
#define MAX_ORDER 10
#define MAX_STRING 100

int main() {
    int menuChoice;
    int order[MAX_ORDER];
    int orderCount = 0;
    int itemChoice;
    char deliveryAddress[MAX_STRING];
    char deliveryTime[MAX_STRING];

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

    const char **menu = NULL;

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
        menu = mc_bruger;
    } else if (menuChoice == 2) {
        printf("Menu: Bruger Queen\n");
        menu = bruger_queen;
    } else if (menuChoice == 3) {
        printf("Menu: Lagkage Telt\n");
        menu = lagkage_telt;
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("  - %s\n", menu[i]);
    }

    printf("\nEnter the number of the item to order (0 to finish):\n");

    do {
        printf("Item number: ");
        scanf("%d", &itemChoice);

        if (itemChoice > 0 && itemChoice <= MAX_ITEMS) {
            if (orderCount < MAX_ORDER) {
                order[orderCount++] = itemChoice;
            } else {
                printf("Order limit reached.\n");
                break;
            }
        } else if (itemChoice != 0) {
            printf("Invalid item number.\n");
        }

    } while (itemChoice != 0);

    printf("\nYou ordered:\n");
    for (int i = 0; i < orderCount; i++) {
        printf("  - %s\n", menu[order[i] - 1]);
    }

    // Clear the input buffer
    while (getchar() != '\n');

    printf("\nWhat is the address you want it delivered to? ");
    fgets(deliveryAddress, MAX_STRING, stdin);
    deliveryAddress[strcspn(deliveryAddress, "\n")] = 0;  

    printf("Estimated delivery time (e.g. 18:30): ");
    fgets(deliveryTime, MAX_STRING, stdin);
    deliveryTime[strcspn(deliveryTime, "\n")] = 0;

    return 0;
}
