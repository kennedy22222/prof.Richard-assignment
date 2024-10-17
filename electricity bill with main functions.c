#include<stdio.h>

// Function declarations
void inputCustomerDetails(int *customerId, char customerName[], int *unitsConsumed);
float calculateChargesPerUnit(int unitsConsumed);
float calculateSurcharge(float totalAmount, int unitsConsumed);
float generateBill(int unitsConsumed, float chargesPerUnit, float *surcharge);
void printBill(int customerId, char customerName[], int unitsConsumed, float chargesPerUnit, float surcharge, float totalAmount);

// Main function
int main () {
    int customerId, unitsConsumed;
    float chargesPerUnit, surcharge = 0, totalAmount;
    char customerName[50];

    // Input customer details
    inputCustomerDetails(&customerId, customerName, &unitsConsumed);

    // Calculate charges per unit
    chargesPerUnit = calculateChargesPerUnit(unitsConsumed);

    // Calculate total bill and surcharge
    totalAmount = generateBill(unitsConsumed, chargesPerUnit, &surcharge);

    // Print the bill
    printBill(customerId, customerName, unitsConsumed, chargesPerUnit, surcharge, totalAmount);

    return 0;
}

// Function to input customer details
void inputCustomerDetails(int *customerId, char customerName[], int *unitsConsumed) {
    printf("Input the customer ID:\n");
    scanf("%d", customerId);

    printf("Input the Customer Name:\n");
    scanf("%s", customerName);

    printf("Input the Units Consumed:\n");
    scanf("%d", unitsConsumed);
}

// Function to calculate charges per unit based on units consumed
float calculateChargesPerUnit(int unitsConsumed) {
    if (unitsConsumed <= 199) {
        return 1.20;
    } else if (unitsConsumed <= 400) {
        return 1.50;
    } else if (unitsConsumed <= 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

// Function to calculate surcharge based on the total amount
float calculateSurcharge(float totalAmount, int unitsConsumed) {
    if (unitsConsumed > 400) {
        return totalAmount * 0.15;  // 15% surcharge
    }
    return 0;  // No surcharge
}

// Function to generate the total bill, including surcharge
float generateBill(int unitsConsumed, float chargesPerUnit, float *surcharge) {
    float totalAmount = chargesPerUnit * unitsConsumed;

    // Calculate and add surcharge if applicable
    *surcharge = calculateSurcharge(totalAmount, unitsConsumed);
    totalAmount += *surcharge;

    // Ensure minimum bill is 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    return totalAmount;
}

// Function to print the bill details
void printBill(int customerId, char customerName[], int unitsConsumed, float chargesPerUnit, float surcharge, float totalAmount) {
    printf("Customer ID         : %d\n", customerId);
    printf("Customer Name       : %s\n", customerName);
    printf("Units Consumed      : %d\n", unitsConsumed);
    printf("Charges per Unit    : %.2f\n", chargesPerUnit);
    printf("Surcharge           : %.2f\n", surcharge);
    printf("Total Amount To Pay : %.2f\n", totalAmount);
}