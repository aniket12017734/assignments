#include <iostream>
using namespace std;
int main() 
{
    int month;
    double room_rent, tariff;
    cout << "Enter the month of stay (1-12): ";
    cin >> month;
    cout << "Enter the room rent: ";
    cin >> room_rent;
    switch (month) {
        case 4:
        case 5:
        case 6:
        case 11:
        case 12:
            tariff = room_rent + (room_rent * 0.2);
            break;
        default:
            tariff = room_rent;
    }
    cout << "The tariff for the room is: " << tariff << endl;
}