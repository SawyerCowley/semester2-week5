// Week 5, session 1

/* Task 3.1
 * Write a C program that calculates the monthly electricity bill
 * based on units consumed and customer type.
 *
 * Input:
 * - A floating-point number representing the number of electricity units consumed.
 * - An integer representing the customer type:
 *   1 → Domestic
 *   2 → Commercial
 *   3 → Industrial
 *
 * Output:
 * - Calculate the bill using slab-based pricing.
 * - Use if-else statements to apply unit slabs.
 * - Use a switch statement to apply customer-type surcharges.
 * - Display the final bill amount.
 * - Print an error message for invalid customer types and exit the program.
 *
 * Notes:
 * - Slab rates:
 *   First 100 units: 2.00 per unit
 *   Next 200 units: 3.50 per unit
 *   Above 300 units: 5.00 per unit
 *
 * - Customer surcharges:
 *   Domestic: No surcharge
 *   Commercial: 10% surcharge
 *   Industrial: 20% surcharge
 *
 * Example:
 * Input:
 * Enter units consumed: 250
 * Enter customer type (1-Domestic, 2-Commercial, 3-Industrial): 1
 *
 * Output:
 * Customer type: Domestic
 * Units consumed: 250
 * Total bill amount: 725.00
 *
 */
 
#include <stdio.h>

int main(void) {
    float units;
    float bill = 0.0;
    int customerType;

    float over_200;
    float over_300;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    printf("Enter customer type (1-Domestic, 2-Commercial, 3-Industrial): ");
    scanf("%d", &customerType);

    /* subtask 1: calculate base bill using slabs */
	// complete your code here
    if (units <= 100) {
        bill = units * 2.0;
		// to do
    }
    if ((units > 100) && (units <= 200)){
        over_200 = units - 100;
        bill = over_200 * 3.5;
        bill = bill + 200;
    }
    if (units > 200){
        over_300 = units - 100;
        bill = over_300 * 5;
        bill = bill + 550;
    }

    /* subtask 2: apply surcharge based on customer type */
	// complete your code here
    switch (customerType) {
        case 1:
            // to do
			break;
        case 2:
            bill = bill + (bill * 0.1);
            break;
        case 3:
            bill = bill + (bill * 0.2);
            break;
        default:
            printf("Invalid customer type\n");
            return 1;
    }

    /* Output */
    printf("Units consumed: %.2f\n", units);
    printf("Total bill amount: %.2f\n", bill);

    return 0;
}