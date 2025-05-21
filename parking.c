/**program that designs a parking management system to record
 number of bus ,car,riskaw,and the total revenue collected at the end of the day
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define parking limits
#define MAX_RIKSHAW 5
#define MAX_CAR 10
#define MAX_BUS 3

// Global counters
int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;

// Function declarations
int riksha();
int car();
int bus();
int del();
int show();
void save_to_file();

int riksha() {
    if (nor >= MAX_RIKSHAW) {
        printf("\n Parking Full for Rickshaws!\n");
        return 0;
    }
    nor++;
    amount += 20;
    count++;
    printf("\nRickshaw Entry Successful!\n");
    return 0;
}

int car() {
    if (noc >= MAX_CAR) {
        printf("\nParking Full for Cars!\n");
        return 0;
    }
    noc++;
    amount += 40;
    count++;
    printf("\nCar Entry Successful!\n");
    return 0;
}

int bus() {
    if (nob >= MAX_BUS) {
        printf("\n Parking Full for Buses!\n");
        return 0;
    }
    nob++;
    amount += 50;
    count++;
    printf("\nBus Entry Successful!\n");
    return 0;
}

int del() {
    nor = nob = noc = amount = count = 0;
    printf("\nAll data cleared!\n");
    return 0;
}

int show() {
    printf("\n--------------------------------------");
    printf("\nThe number of Cars      : %d/%d", noc, MAX_CAR);
    printf("\nThe number of Buses     : %d/%d", nob, MAX_BUS);
    printf("\nThe number of Rickshaws : %d/%d", nor, MAX_RIKSHAW);
    printf("\nThe total Revenue       : Rs. %d", amount);
    printf("\n--------------------------------------\n");
    return 0;
}

void save_to_file() {
    FILE *fp = fopen("parking_data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "Parking Summary Report\n");
    fprintf(fp, "-----------------------\n");
    fprintf(fp, "Number of Buses     : %d\n", nob);
    fprintf(fp, "Number of Cars      : %d\n", noc);
    fprintf(fp, "Number of Rickshaws : %d\n", nor);
    fprintf(fp, "Total Revenue       : Rs. %d\n", amount);

    fclose(fp);
    printf("\nData saved successfully to 'parking_data.txt'!\n");
}

int main() {
    int c;

    do {
        printf("\n========= Parking Management System =========");
        printf("\n1. Rickshaw Entry");
        printf("\n2. Car Entry");
        printf("\n3. Bus Entry");
        printf("\n4. Show Parking Details");
        printf("\n5. Clear All Data");
        printf("\n6. Save & Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1: riksha(); break;
            case 2: car(); break;
            case 3: bus(); break;
            case 4: show(); break;
            case 5: del(); break;
            case 6:
                save_to_file();
                printf("\nExiting program...\n");
                break;
            default: printf("\nWrong choice! Please try again.\n");
        }

    } while (c != 6);

    return 0;
}
