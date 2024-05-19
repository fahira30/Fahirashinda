#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Customer {
public:
    string name;
    string foodItem;

    Customer(string n, string food) : name(n), foodItem(food) {}
};

void processDriveThru(queue<Customer> &q) {
    while (!q.empty()) {
        Customer currentCustomer = q.front();
        q.pop();
        cout << "##===============================##" << endl;
        cout << "Nama pelanggan : " << currentCustomer.name << endl;
        cout << "Menu pesanan : " << currentCustomer.foodItem << endl;
        cout << "Pesanan selesai. Thank you!" << endl;
    }
    cout << "Semua pesanan telah diproses." << endl;
    cout << "##===================================##" << endl;
}

int main() {
    queue<Customer> driveThruQueue;

    // Adding orders to the drive-thru KFC queue
    driveThruQueue.push(Customer("Mazaya", "Burger "));
    
    cout << "Pesanan dalam antrian ke :  " << driveThruQueue.size() << endl;

    // Process the drive-thru KFC queue
    processDriveThru(driveThruQueue);

    return 0;
}
