#include <iostream>
#include <queue>

using namespace std;

queue<string> iceCreamQueue;
void insertIceCream(string flavor) {
    iceCreamQueue.push(flavor);
    cout << flavor << " ice cream is added to your purchase/s." << endl;
}
void deleteIceCream() {
    if (iceCreamQueue.empty()) {
        cout << "Your purchase/s is/are empty." << endl;
    } else {
        string flavor = iceCreamQueue.front();
        iceCreamQueue.pop();
        cout << "Removing " << flavor << " ice cream from your purchase/s." << endl;
    }
}
void displayIceCreamQueue() {
    if (iceCreamQueue.empty()) {
        cout << "Your purchase/s is/are empty." << endl;
    } else {
        cout << "Your purchase/s is/are: ";
        queue<string> tempQueue = iceCreamQueue;
        while (!tempQueue.empty()) {
            cout << tempQueue.front();
            tempQueue.pop();
            if (!tempQueue.empty()) {
                if (tempQueue.size() == 1) {
                    cout << " & ";
                } else {
                    cout << ", ";
                }
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

int main() {
    int ch;
    string flavor;
    cout << "Welcome to Faith's Ice Cream Vending Machine" << endl;
    cout << "Available Ice Cream Flavors: " << endl;
    cout << "1. Mango" << endl;
    cout << "2. Cheese" << endl;
    cout << "3. Cookies n' Cream" << endl;
    cout << "4. Strawberry" << endl;
    cout << "5. Chocolate\n" << endl;
    cout << "1. Add Order" << endl;
    cout << "2. Remove Order" << endl;
    cout << "3. Display Order/s" << endl;
    cout << "4. Order Now" << endl;
    cout << "5. Exit \n" << endl;

    do {
        cout << "Enter the number corresponding to choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter the number corresponding to the flavor: ";
                int flavorChoice;
                cin >> flavorChoice;
                switch (flavorChoice) {
                    case 1:
                        flavor = "Mango";
                        break;
                    case 2:
                        flavor = "Cheese";
                        break;
                    case 3:
                        flavor = "Cookies n' Cream";
                        break;
                    case 4:
                        flavor = "Strawberry";
                        break;
                    case 5:
                        flavor = "Chocolate";
                        break;
                    default:
                        cout << "Invalid flavor choice!" << endl;
                        continue;
                }
                insertIceCream(flavor);
                break;
            case 2:
                deleteIceCream();
                break;
            case 3:
                displayIceCreamQueue();
                break;
            case 4:
                if (iceCreamQueue.empty()) {
                cout << "Your purchase/s is/are empty." << endl;
                break;
                } else {
                cout << "Thank you for purchasing!" << endl;
                break;
                }
            case 5:
                cout << "Exiting the ice cream vending machine." << endl;
                break;

            default:
                cout << "Incorrect choice!" << endl;
        }
    } while (ch != 5);
    return 0;
}
