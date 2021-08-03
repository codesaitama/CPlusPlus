#include <iostream>
#include <string>

using namespace std;

int main()
{

    /*
    Package A

    $8/month
    Includes 2 jams per month
    Each additional jam on top of the 2 is $5 each

    Package B

    $12/month
    Includes 4 jams per month
    Each additional jam on top of the 4 is $4 each

    Package C

    $15/month
    Includes 6 jams per month
    Each additional jam on top of the 6 is $3 each

    1. You should secondly prompt the user for how many jams they purchased this month, in total.
    2. The program will then take the number of jams purchased and then tell the user their total cost
        # This will depend on what package they own.
        # If they stayed at or under the number of jams included in their monthly package, they only owe the monthly fee.
        # If they went over, then you charge them the monthly fee plus the charge for each additional jam at their package's rate.
    */

    int start = 0;

    while (start == 0){

        char packageOwn;
        int balance, jamsOwned, amountForJam, totalPurchases, amountToPay;

        cout << "What package do you own? A, B or C: " << endl;
        cin >> packageOwn;

        cout << "How many jams, jellies or preserves did you purchase this month? " << endl;
        cin >> totalPurchases;

        switch (packageOwn){
        case 'A':
        case 'a':
            balance = 8;
            jamsOwned = totalPurchases - 2;
            amountToPay = balance + (jamsOwned * 5);
            //8 + 3 * 5
            break;
        case 'B':
        case 'b':
            balance = 12;
            jamsOwned = totalPurchases - 4;
            amountToPay = balance + (jamsOwned * 4);
            break;
        case 'C':
        case 'c':
            balance = 15;
            jamsOwned = totalPurchases - 6;
            amountToPay = balance + (jamsOwned * 3);
            break;
        default:
            cout << "Incorrect package selected!";
            return 0;

        }

        cout << "You owe $" << amountToPay << endl;
        start = 1;

    }

    return 0;
}