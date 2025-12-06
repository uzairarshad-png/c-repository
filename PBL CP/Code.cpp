#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
using namespace std;
struct Customer {
    string cnic;
    string name;
    string contact;
};
struct Cookie {
    string name;
    int stock;
    double price;
};
struct Order {
    int orderNo;
    string cookieName;
    int quantity;
    string cnic;
    string name;
    string contact;
    time_t orderTime;
};

string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == string::npos) return "";
    size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, (last - first + 1));
}
void loadCustomers(Customer customers[], int& customerCount) {
    ifstream file("customerreg.txt");
    if (!file.is_open()) {
        return;
    }

    string line;
    customerCount = 0;

    while (getline(file, line) && customerCount < 100) {
        stringstream ss(line);
        string cnic, name, contact;

        getline(ss, cnic, '|');
        getline(ss, name, '|');
        getline(ss, contact, '|');

        customers[customerCount].cnic = trim(cnic);
        customers[customerCount].name = trim(name);
        customers[customerCount].contact = trim(contact);
        customerCount++;
    }

    file.close();
}
void loadCookies(Cookie cookies[], int& cookieCount) {
    ifstream file("cookiecatalog.txt");
    if (!file.is_open()) {
        return;
    }
    string line;
    cookieCount = 0;
    while (getline(file, line) && cookieCount < 50) {
        stringstream ss(line);
        string name, stockStr, priceStr;

        getline(ss, name, '|');
        getline(ss, stockStr, '|');
        getline(ss, priceStr, '|');

        cookies[cookieCount].name = trim(name);
        cookies[cookieCount].stock = stoi(trim(stockStr));
        cookies[cookieCount].price = stod(trim(priceStr));
        cookieCount++;
    }
    file.close();
}
void loadOrders(Order orders[], int& orderCount) {
    ifstream file("orders.txt");
    if (!file.is_open()) {
        return;
    }
    string line;
    orderCount = 0;
    while (getline(file, line) && orderCount < 200) {
        stringstream ss(line);
        string orderNoStr, cookieName, quantityStr, cnic, name, contact, timeStr;

        getline(ss, orderNoStr, '|');
        getline(ss, cookieName, '|');
        getline(ss, quantityStr, '|');
        getline(ss, cnic, '|');
        getline(ss, name, '|');
        getline(ss, contact, '|');
        getline(ss, timeStr, '|');

        orders[orderCount].orderNo = stoi(trim(orderNoStr));
        orders[orderCount].cookieName = trim(cookieName);
        orders[orderCount].quantity = stoi(trim(quantityStr));
        orders[orderCount].cnic = trim(cnic);
        orders[orderCount].name = trim(name);
        orders[orderCount].contact = trim(contact);
        orders[orderCount].orderTime = stoll(trim(timeStr));
        orderCount++;
    }
    file.close();
}

void saveCustomers(Customer customers[], int customerCount) {
    ofstream file("customerreg.txt");
    if (!file.is_open()) {
        cout << "Error: Unable to save customer data!\n";
        return;
    }
    for (int i = 0; i < customerCount; i++) {
        file << customers[i].cnic << "|" << customers[i].name << "|" << customers[i].contact << "\n";
    }
    file.close();
}
void saveCookies(Cookie cookies[], int cookieCount) {
    ofstream file("cookiecatalog.txt");
    if (!file.is_open()) {
        cout << "Error: Unable to save cookie catalog!\n";
        return;
    }
    for (int i = 0; i < cookieCount; i++) {
        file << cookies[i].name << "|" << cookies[i].stock << "|" << cookies[i].price << "\n";
    }
    file.close();
}

void saveOrders(Order orders[], int orderCount) {
    ofstream file("orders.txt");
    if (!file.is_open()) {
        cout << "Error: Unable to save orders!\n";
        return;
    }
    for (int i = 0; i < orderCount; i++) {
        file << orders[i].orderNo << "|" << orders[i].cookieName << "|"
            << orders[i].quantity << "|" << orders[i].cnic << "|"
            << orders[i].name << "|" << orders[i].contact << "|"
            << orders[i].orderTime << "\n";
    }
    file.close();
}

void saveCancelledOrder(Order order) {
    ofstream file("cancelledorders.txt", ios::app);
    if (!file.is_open()) {
        cout << "Error: Unable to save cancelled order!\n";
        return;
    }
    time_t now = time(0);
    tm ltm;
#ifdef _WIN32
    localtime_s(&ltm, &now);
#else
    ltm = *localtime(&now);
#endif
    char dateStr[20];
    strftime(dateStr, sizeof(dateStr), "%Y-%m-%d %H:%M:%S", &ltm);
    file << order.orderNo << "|" << order.cookieName << "|"
        << order.quantity << "|" << dateStr << "|"
        << order.cnic << "|" << order.name << "|"
        << order.contact << "\n";
    file.close();
}

void displayMenu() {
    cout << "  \n\tSWEETCRUST COOKIE MANAGEMENT SYSTEM  \n";
    cout << "1. Customer Registration\n";
    cout << "2. Cookie Catalog Management\n";
    cout << "3. Book Orders\n";
    cout << "4. Search Customer\n";
    cout << "5. Cancel Order + Fine Calculation\n";
    cout << "6. Exit\n";
}

bool isCNICExists(Customer customers[], int customerCount, string cnic) {
    for (int i = 0; i < customerCount; i++) {
        if (customers[i].cnic == cnic) {
            return true;
        }
    }
    return false;
}

void customerRegistration(Customer customers[], int& customerCount) {
    cout << "\nCUSTOMER REGISTRATION \n";
    if (customerCount >= 100) {
        cout << "Error: Customer database is full!\n";
        return;
    }
    Customer newCustomer;
    cout << "Enter CNIC/Passport Number: ";
    getline(cin, newCustomer.cnic);
    newCustomer.cnic = trim(newCustomer.cnic);

    if (isCNICExists(customers, customerCount, newCustomer.cnic)) {
        cout << "\nError: This CNIC/Passport Number is already registered!\n";
        cout << "Registration failed to avoid duplicate entries.\n";
        return;
    }
    cout << "Enter Customer Name: ";
    getline(cin, newCustomer.name);
    newCustomer.name = trim(newCustomer.name);

    cout << "Enter Contact Number: ";
    getline(cin, newCustomer.contact);
    newCustomer.contact = trim(newCustomer.contact);

    customers[customerCount] = newCustomer;
    customerCount++;

    saveCustomers(customers, customerCount);
    cout << "\n Customer registered successfully.\n";
}

void cookieCatalogManagement(Cookie cookies[], int& cookieCount) {
    cout << "\n\tCOOKIE CATALOG MANAGEMENT\n";
    if (cookieCount == 0) {
        cout << "No cookies in catalog!\n";
        return;
    }
    cout << "\nCurrent Cookie Catalog:\n";
    cout << "No.\tCookie Name\t\tStock\tPrice per Box\n";
    for (int i = 0; i < cookieCount; i++) {
        cout << (i + 1) << ".\t" << cookies[i].name << "\t\t"
            << cookies[i].stock << "\tAED " << cookies[i].price << "\n";
    }
    cout << endl << "\nDo you want to update stock? (y/n): ";
    char choice;
    cin >> choice;
    cin.ignore();
    if (choice == 'y' || choice == 'Y') {
        int cookieNo;
        cout << "Enter cookie number to update: ";
        cin >> cookieNo;
        cin.ignore();
        if (cookieNo < 1 || cookieNo > cookieCount) {
            cout << "Invalid cookie number!\n";
            return;
        }
        int newStock;
        cout << "Enter new stock quantity: ";
        cin >> newStock;
        cin.ignore();

        if (newStock < 0) {
            cout << "Stock cannot be negative!\n";
            return;
        }
        cookies[cookieNo - 1].stock = newStock;
        saveCookies(cookies, cookieCount);
        cout << "\n Stock updated successfully!\n";
    }
}

int getNextOrderNumber(Order orders[], int orderCount) {
    int maxOrderNo = 0;
    for (int i = 0; i < orderCount; i++) {
        if (orders[i].orderNo > maxOrderNo) {
            maxOrderNo = orders[i].orderNo;
        }
    }
    return maxOrderNo + 1;
}
void bookOrders(Customer customers[], int customerCount, Cookie cookies[], int& cookieCount, Order orders[], int& orderCount) {
    cout << "\n BOOK ORDERS \n";
    if (customerCount == 0) {
        cout << "No customers registered yet!\n";
        return;
    }
    if (cookieCount == 0) {
        cout << "No cookies available in catalog!\n";
        return;
    }
    string cnic;
    cout << "Enter Customer CNIC/Passport Number: ";
    getline(cin, cnic);
    cnic = trim(cnic);

    int customerIndex = -1;
    for (int i = 0; i < customerCount; i++) {
        if (customers[i].cnic == cnic) {
            customerIndex = i;
            break;
        }
    }
    if (customerIndex == -1) {
        cout << "\nError: Customer not found! Please register first.\n";
        return;
    }
    cout << "\nCustomer Found: " << customers[customerIndex].name << "\n";

    cout << "\n\tAvailable Cookies\n";
    cout << "No.\tCookie Name\t\tStock\tPrice per Box\n";
    for (int i = 0; i < cookieCount; i++) {
        cout << (i + 1) << ".\t" << cookies[i].name << "\t\t"
            << cookies[i].stock << "\tAED " << cookies[i].price << "\n";
    }
    int cookieChoice;
    cout << "\nEnter cookie number to order (up to 5 cookies): ";
    cin >> cookieChoice;
    cin.ignore();
    if (cookieChoice < 1 || cookieChoice > cookieCount) {
        cout << "Invalid cookie number!\n";
        return;
    }
    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;
    cin.ignore();
    if (quantity <= 0) {
        cout << "Quantity must be positive!\n";
        return;
    }
    if (quantity > 5) {
        cout << "Maximum 5 boxes per order!\n";
        return;
    }
    if (cookies[cookieChoice - 1].stock < quantity) {
        cout << "\nError: Insufficient stock!\n";
        cout << "Available stock: " << cookies[cookieChoice - 1].stock << " boxes\n";
        return;
    }
    // Create order
    if (orderCount >= 200) {
        cout << "Error: Order database is full!\n";
        return;
    }
    Order newOrder;
    newOrder.orderNo = getNextOrderNumber(orders, orderCount);
    newOrder.cookieName = cookies[cookieChoice - 1].name;
    newOrder.quantity = quantity;
    newOrder.cnic = customers[customerIndex].cnic;
    newOrder.name = customers[customerIndex].name;
    newOrder.contact = customers[customerIndex].contact;
    newOrder.orderTime = time(0);
    orders[orderCount] = newOrder;
    orderCount++;
    cookies[cookieChoice - 1].stock -= quantity;

    // Save data
    saveOrders(orders, orderCount);
    saveCookies(cookies, cookieCount);
    double totalPrice = cookies[cookieChoice - 1].price * quantity;
    cout << "\n Order placed successfully!\n";
    cout << "Order Number: " << newOrder.orderNo << "\n";
    cout << "Cookie: " << newOrder.cookieName << "\n";
    cout << "Quantity: " << quantity << " boxes\n";
    cout << "Total Price: AED " << totalPrice << "\n";
}

void searchCustomer(Customer customers[], int customerCount, Order orders[], int orderCount) {
    cout << "\n\tSEARCH CUSTOMER\n";
    if (customerCount == 0) {
        cout << "No customers registered!\n";
        return;
    }
    string cnic;
    cout << "Enter Customer CNIC/Passport Number: ";
    getline(cin, cnic);
    cnic = trim(cnic);
    int customerIndex = -1;
    for (int i = 0; i < customerCount; i++) {
        if (customers[i].cnic == cnic) {
            customerIndex = i;
            break;
        }
    }
    if (customerIndex == -1) {
        cout << "\nCustomer not found!\n";
        return;
    }
    cout << "\n\tCustomer Details\n";
    cout << "CNIC/Passport: " << customers[customerIndex].cnic << "\n";
    cout << "Name: " << customers[customerIndex].name << "\n";
    cout << "Contact: " << customers[customerIndex].contact << "\n";

    cout << "\n\tOrder History \n";
    bool hasOrders = false;
    for (int i = 0; i < orderCount; i++) {
        if (orders[i].cnic == cnic) {
            if (!hasOrders) {
                cout << "Order No.\tCookie\t\t\tQuantity\n";
                hasOrders = true;
            }
            cout << orders[i].orderNo << "\t\t" << orders[i].cookieName
                << "\t\t" << orders[i].quantity << "\n";
        }
    }
    if (!hasOrders) {
        cout << "No orders found for this customer.\n";
    }
}

void cancelOrder(Order orders[], int& orderCount, Cookie cookies[], int& cookieCount) {
    cout << "\n\tCANCEL ORDER + FINE CALCULATION\n";

    if (orderCount == 0) {
        cout << "No orders to cancel!\n";
        return;
    }
    int orderNo;
    cout << "Enter Order Number to cancel: ";
    cin >> orderNo;
    cin.ignore();
    int orderIndex = -1;
    for (int i = 0; i < orderCount; i++) {
        if (orders[i].orderNo == orderNo) {
            orderIndex = i;
            break;
        }
    }
    if (orderIndex == -1) {
        cout << "\nOrder not found!\n";
        return;
    }
    Order cancelledOrder = orders[orderIndex];

    // Calculate time difference
    time_t now = time(0);
    double timeDiff = difftime(now, cancelledOrder.orderTime) / 60.0;
    double cancellationFee = 0;
    const double FEE_PER_BOX = 5.0;
    const int DEADLINE_MINUTES = 30;

    cancellationFee = cancelledOrder.quantity * FEE_PER_BOX;

    cout << "\n\t Order Details \n";
    cout << "Order Number: " << cancelledOrder.orderNo << "\n";
    cout << "Customer: " << cancelledOrder.name << "\n";
    cout << "Cookie: " << cancelledOrder.cookieName << "\n";
    cout << "Quantity: " << cancelledOrder.quantity << " boxes\n";
    cout << "Time since order: " << (int)timeDiff << " minutes\n";
    cout << "Deadline: " << DEADLINE_MINUTES << " minutes\n";

    if (timeDiff > DEADLINE_MINUTES) {
        cout << "\n Order exceeded deadline!\n";
    }
    else {
        cout << "\n Order within deadline period\n";
    }

    cout << "Cancellation Fee: AED " << cancellationFee << " ("
        << cancelledOrder.quantity << " boxes × AED " << FEE_PER_BOX << ")\n";
    cout << "\nConfirm cancellation? (y/n): ";
    char confirm;
    cin >> confirm;
    cin.ignore();
    if (confirm != 'y' && confirm != 'Y') {
        cout << "Cancellation aborted.\n";
        return;
    }
    for (int i = 0; i < cookieCount; i++) {
        if (cookies[i].name == cancelledOrder.cookieName) {
            cookies[i].stock += cancelledOrder.quantity;
            break;
        }
    }
    saveCancelledOrder(cancelledOrder);
    for (int i = orderIndex; i < orderCount - 1; i++) {
        orders[i] = orders[i + 1];
    }
    orderCount--;
    saveOrders(orders, orderCount);
    saveCookies(cookies, cookieCount);
    cout << "\n Order cancelled successfully!\n";
    cout << "Stock has been restored.\n";
    cout << "Total cancellation fee: AED " << cancellationFee << "\n";
}
int main() {
    const int MAX_CUSTOMERS = 100, MAX_COOKIES = 50, MAX_ORDERS = 200;
    int customerCount = 0, cookieCount = 0, orderCount = 0;
    Customer customers[MAX_CUSTOMERS];
    Cookie cookies[MAX_COOKIES];
    Order orders[MAX_ORDERS];
    loadCustomers(customers, customerCount);
    loadCookies(cookies, cookieCount);
    loadOrders(orders, orderCount);
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            customerRegistration(customers, customerCount);
            break;
        case 2:
            cookieCatalogManagement(cookies, cookieCount);
            break;
        case 3:
            bookOrders(customers, customerCount, cookies, cookieCount, orders, orderCount);
            break;
        case 4:
            searchCustomer(customers, customerCount, orders, orderCount);
            break;
        case 5:
            cancelOrder(orders, orderCount, cookies, cookieCount);
            break;
        case 6:
            cout << "\n\tExiting System \n";
            cout << "All data has been saved automatically.\n";
            cout << "Thank you for using SweetCrust Cookie Management System!\n";
            break;
        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

        if (choice != 6) {
            cout << "\nPress Enter to continue...";
            cin.get();
        }

    } while (choice != 6);

    return 0;
}
