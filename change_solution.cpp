/* Writing a program that displays the change in cents
 * The program should display how to provide the change
 * 
 * 1 dollar is 100 cents
 * 1 quarter is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents
 * 1 penny is 1 cent
*/

#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter an amount in cents: ";
    
    int cents_amount {0};
    int cents_remaining {0};
    cin >> cents_amount;
   
    cout << "\nYou can provide change for this amount as follows:" << endl;
    
    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    const int dollars_value {100};
    const int quarters_value {25};
    const int dimes_value {10};
    const int nickels_value {5};
    const int pennies_value {1};
    
    dollars = cents_amount / dollars_value;
    cents_remaining = cents_amount - dollars * dollars_value;
   
    quarters = cents_remaining / quarters_value;
    cents_remaining -= quarters * quarters_value;
   
    dimes = cents_remaining / dimes_value;
    cents_remaining -= dimes * dimes_value;
    
    nickels = cents_remaining / nickels_value;
    cents_remaining -= nickels * nickels_value;
   
    pennies = cents_remaining;
    
    cout << "dollars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;
    
    return 0;
}
