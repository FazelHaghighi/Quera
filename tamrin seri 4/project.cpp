#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
using namespace std;

void welcome(int j);
void orderslist(vector <string> orders, vector<double> numbers, int j);
void allorders(vector <string> orders,vector<double> numbers, int j);
void byebye();
void rude();
void firstpage(vector <string> orders, vector<double> numbers, int j);
void mainmenu(vector <string> orders, vector<double> numbers, int j);
void managementmenu(vector <string> orders, vector<double> numbers, int j);
void foodmenu(vector <string> orders, vector<double> numbers, int j);
void pizza(vector <string> orders, vector<double> numbers, int j);
void burger(vector <string> orders, vector<double> numbers, int j);
void fried(vector <string> orders, vector<double> numbers, int j);
void appetizer(vector <string> orders, vector<double> numbers, int j);
void drink(vector <string> orders, vector<double> numbers, int j);
void go(int x, int y);

int main()
{
    int j = 0;
    welcome(j);
}
void go(int x, int y)
{
  COORD coordinates;     // coordinates is declared as COORD
  coordinates.X = x;     // defining x-axis
  coordinates.Y = y;     //defining  y-axis
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void welcome(int j)
{
    system("cls");
    int sure;
    j++;
    vector <string> orders; 
    vector<double> numbers;
    cout << "* WELCOME *\n\n" << "Your receipt number is: " << j << "\n\nEnter your receipt number for assurance: ";
    cin >> sure;
    if ( sure == j) 
    {
        firstpage(orders, numbers, j);
    }
    else rude();
}
void orderslist(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int receipt, payoption, waiting = 0, waiting1 = 0, waiting2 = 0, waiting3 = 0, waiting4 = 0;
    double total = 0;
    cout << "Please enter your receipt number:\n\n";
    cin >> receipt;
    if ( receipt == j)
    {
        system("cls");
        cout << j << ".\n";
        for ( int i = 0; i < numbers.size(); i++)
        {
            if ( orders[i] == "Neapolitan Pizza" || orders[i] == "Veggie Pizza" || orders[i] == "Pepperoni Pizza" || orders[i] == "Meat Pizza" || orders[i] == "Margherita Pizza" || orders[i] == "Greek Pizza") 
            {
                waiting1 = 20;
                if ( waiting1 > waiting) waiting = waiting1;
            }
            else if ( orders[i] == "Cheeseburger" || orders[i] == "Hamburger" || orders[i] == "Beef Burger" || orders[i] == "Elk Burger" || orders[i] == "Veggie Burger" || orders[i] == "Bison Burger")
            {
                waiting2 = 18;
                if ( waiting2 > waiting) waiting = waiting2;
            }
            else if ( orders[i] == "2 pieces" || orders[i] == "3 pieces" || orders[i] == "5 pieces" || orders[i] == "Chicken Strip" || orders[i] == "Fillet Strip")
            {
                waiting3 = 15;
                if ( waiting3 > waiting) waiting = waiting3;
            }
            else if ( orders[i] == "French Fries" || orders[i] == "Salad" || orders[i] == "Garlic Bread")
            {
                waiting4 = 10;
                if ( waiting4 > waiting) waiting = waiting4;
            }
            cout << orders[i] << " .............................. $" << numbers[i] << "\n";
        }
    }
    for ( int i = 0; i < numbers.size(); i++)
    {
        total += numbers[i];
    }
    cout << "\nTotal Price: $" << total << "\nPreparing time: " << waiting << " min";
    cout << "\n\nPlease select the option you want:\n\n";
    cout << "1. Pay the bill\n" << "0. Back\n";
    cin >> payoption;
    if ( payoption == 1)
    {
        cout << "Payed";
    }
    else if ( payoption == 0) allorders (orders, numbers, j);
}
void allorders(vector <string> orders,vector<double> numbers, int j)
{
    // vector <string> orders; 
    // vector<double> numbers;
    system("cls");
    int n;
    cout << "* Orders *\n\n";
    cout << "Please select the option you want:\n\n";
    cout << "1. New Orders\n" << "2. Orders List\n" << "0. Back\n";
    cin >> n;
    if ( n == 1) foodmenu(orders, numbers, j);
    else if ( n == 2) orderslist(orders, numbers, j);
    else mainmenu(orders, numbers, j);

}
void byebye()
{
    system("cls");
    cout << "Thanks for choosing us and hope you enjoy your food.";
    return;
}
void rude()
{
    system("cls");
    cout << "If you didn't wanna do anything then why did you come? Get the F**k outta here.";
    return;
}
void firstpage(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n;
    cout << "Yo, Wassup man? welcome to our restaurant and thanks for choosing us.\n\n" << "Please select the option you want:\n\n";
    cout << "1. Main menu\n" << "0. Back\n";
    cin >> n;
    if ( n == 1) mainmenu(orders, numbers, j);
    else welcome(j);
}
void mainmenu(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n;
    cout << "* Main Menu *\n\n";
    cout << "Please select the option you want:\n\n";
    cout << "1. Non Of Your Business Menu\n" << "2. Getting Fat Menu\n" << "0. Back\n";
    cin >> n;
    if ( n == 1) managementmenu(orders, numbers, j);
    else if ( n == 2) allorders(orders,numbers, j);
    else welcome(j);

}
void managementmenu(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int pass = 1234, n;
    do
    {
        cout << "Please Enter The Password:\n\n";
        cin >> n;
        system("cls");
        cout << "Wrong Password!\n\n";
    }
    while ( n != pass);
    if ( n == pass)
    {
        system("cls");
        cout << "Yo Bro, Welcome Back.\n\n";
    }
}
void foodmenu(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n;
    cout << "* Food Menu *\n\n";
    cout << "Please select the category you want:\n\n";
    cout << "1. Pizza\n" << "2. Burger\n" << "3. Fried Chicken\n" "4. Appetizer\n" << "5. Drink\n" << "0. Back\n";
    cin >> n;
    if ( n == 1) pizza(orders,numbers, j);
    else if ( n == 2) burger(orders, numbers, j);
    else if ( n == 3) fried(orders, numbers, j);
    else if ( n == 4) appetizer(orders, numbers, j);
    else if ( n == 5) drink(orders, numbers, j);
    else if ( n == 0) allorders(orders,numbers, j);
}
void pizza(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n, ordernumber;
    double number;
    cout << "* Pizza Menu *\n\n";
    cout << "Please select the kind of Pizza you want:\n\n";
    cout << "1. Neapolitan Pizza\n" << "Ingredients:\n" << "a basic dough, raw tomatoes, fresh mozzarella cheese, fresh basil, and olive oil\n" << "Price: $31.99\n" << "Preparing Time: 20 min\n\n";
    cout << "2. Veggie Pizza\n" << "Ingredients:\n" << "roasted red peppers, baby spinach, onions, mushrooms, tomatoes, and black olives\n" << "Price: $29.99\n" << "Preparing Time: 20 min\n\n";
    cout << "3. Pepperoni Pizza\n" << "Ingredients:\n" << "a meat mixture of beef and pork that has been cured and seasoned with paprika and chili powder\n" << "Price: $27.99\n" << "Preparing Time: 20 min\n\n";
    cout << "4. Meat Pizza\n" << "Ingredients:\n" << "cooked and crumbled Italian sausage or ground beef, bacon, pepperoni, and sometimes sliced ham\n" << "Price: $25.99\n" << "Preparing Time: 20 min\n\n";
    cout << "5. Margherita Pizza\n" << "Ingredients:\n" << "a bubbly crust, crushed San Marzano tomato sauce, fresh mozzarella and basil, a drizzle of olive oil, and a sprinkle of salt\n" << "Price: $23.99\n" << "Preparing Time: 20 min\n\n";
    cout << "6. Greek Pizza\n" << "Ingredients:\n" << "Dough, sauce (tomato sauce), cheese\n" << "Price: $21.99\n" << "Preparing Time: 20 min\n\n";
    cout << "0. Back\n\n";
    go ( 1, 45);
    cin >> n;
    if ( n == 1)
    {
        orders.push_back( "Neapolitan Pizza");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*31.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering pizza\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) pizza(orders,numbers, j);
        else if ( ordernumber == 2) foodmenu(orders,numbers, j);
    }
    else if ( n == 2)
    {
        orders.push_back( "Veggie Pizza");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*29.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering pizza\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) pizza(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 3)
    {
        orders.push_back( "Pepperoni Pizza");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*27.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering pizza\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) pizza(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 4)
    {
        orders.push_back( "Meat Pizza");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*25.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering pizza\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) pizza(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 5)
    {
        orders.push_back( "Margherita Pizza");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*23.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering pizza\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) pizza(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 6)
    {
        orders.push_back( "Greek Pizza");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*21.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering pizza\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) pizza(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 0) foodmenu(orders, numbers, j);
}
void burger(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n, ordernumber;
    double number;
    cout << "* Burger Menu *\n\n";
    cout << "Please select the kind of Burger you want:\n\n";
    cout << "1. Cheeseburger\n" << "Ingredients:\n" << "Bacon, Chilies, Avocado, Lettuce, Chili, Eggs, Tomatoes, Mushrooms\n" << "Price: $19.99\n" << "Preparing Time: 18 min\n\n";
    cout << "2. Hamburger\n" << "Ingredients:\n" << "tomato, romaine lettuces, onions, cheese, pickle, ketchup, mayonnaise\n" << "Price: $18.99\n" << "Preparing Time: 18 min\n\n";
    cout << "3. Beef Burger\n" << "Ingredients:\n" << "Egg, Bacon, Onions, Bread Crumbs, Worcestershire sauce, Garlic, shredded cheese, Barbecue sauce.\n" << "Price: $17.99\n" << "Preparing Time: 18 min\n\n";
    cout << "4. Elk Burger\n" << "Ingredients:\n" << "just elk, fat (pork or beef) and salt\n" << "Price: $16.99\n" << "Preparing Time: 18 min\n\n";
    cout << "5. Veggie Burger\n" << "Ingredients:\n" << "Cucumber, Avocado, Lettuce, Tomato.Pickles, Shredded cabbage, Arugula, Raw onion.\n" << "Price: $15.99\n" << "Preparing Time: 18 min\n\n";
    cout << "6. Bison Burger\n" << "Ingredients:\n" << "garlic, salt, pepper, rosemary, smoked paprika, tomato paste, and fennel seeds\n" << "Price: $14.99\n" << "Preparing Time: 18 min\n\n";
    cout << "0. Back\n";
    cin >> n;
    if ( n == 1)
    {
        orders.push_back( "Cheeseburger");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*19.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering burger\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) burger(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 2)
    {
        orders.push_back( "Hamburger");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*18.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering burger\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) burger(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 3)
    {
        orders.push_back( "Beef Burger");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*17.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering burger\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) burger(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 4)
    {
        orders.push_back( "Elk Burger");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*16.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering burger\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) burger(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 5)
    {
        orders.push_back( "Veggie Burger");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*15.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering burger\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) burger(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 6)
    {
        orders.push_back( "Bison Burger");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*14.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering burger\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) burger(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 0) foodmenu(orders, numbers, j);
}
void fried(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n, ordernumber;
    double number;
    cout << "* Fried Chicken Menu *\n\n";
    cout << "Please select the kind of Fried Chicken you want:\n\n";
    cout << "1. 2 pieces\n" << "Ingredients:\n" << "Chicken, seasoned flour\n" << "Price: $9.99\n" << "Preparing Time: 15 min\n\n";
    cout << "2. 3 pieces\n" << "Ingredients:\n" << "Chicken, seasoned flour\n" << "Price: $10.99\n" << "Preparing Time: 15 min\n\n";
    cout << "3. 5 pieces\n" << "Ingredients:\n" << "Chicken, seasoned flour\n" << "Price: $11.99\n" << "Preparing Time: 15 min\n\n";
    cout << "4. Chicken Strip\n" << "Ingredients:\n" << "Chicken tenderloins, chicken broth powder, carrot, onion, celery, garlic powder, vinegar\n" << "Price: $12.99\n" << "Preparing Time: 15 min\n\n";
    cout << "5. Fillet Strip\n" << "Ingredients:\n" << "Basa, Batter, Maize Flour, Garlic Powder, Onion\n" << "Price: $13.99\n" << "Preparing Time: 15 min\n\n";
    cout << "0. Back\n";
    cin >> n;
    if ( n == 1)
    {
        orders.push_back("2 pieces");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*9.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering fried chicken\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) fried(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 2)
    {
        orders.push_back("3 pieces");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*10.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering fried chicken\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) fried(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 3)
    {
        orders.push_back("5 pieces");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*11.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering fried chicken\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) fried(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 4)
    {
        orders.push_back("Chicken Strip");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*12.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering fried chicken\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) fried(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 5)
    {
        orders.push_back("Fillet Strip");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*13.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering fried chicken\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) fried(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 0) foodmenu(orders, numbers, j);
}
void appetizer(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n, ordernumber;
    double number;
    cout << "* Appetizer Menu *\n\n";
    cout << "Please select the kind of Appetizer you want:\n\n";
    cout << "1. French Fries\n" << "Price: $7.99\n" << "Preparing Time: 10 min\n\n"; 
    cout << "2. Salad\n" << "Price: $6.99\n" << "Preparing Time: 10 min\n\n";
    cout << "3. Garlic Bread\n" << "Price: $5.99\n" << "Preparing Time: 10 min\n\n";
    cout << "0. Back\n";
    cin >> n;
    if ( n == 1)
    {
        orders.push_back("French Fries");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*7.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering appetizer\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) appetizer(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 2)
    {
        orders.push_back("Salad");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*6.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering appetizer\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) appetizer(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 3)
    {
        orders.push_back("Garlic Bread");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*5.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering appetizer\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) appetizer(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 0) foodmenu(orders, numbers, j);
}
void drink(vector <string> orders, vector<double> numbers, int j)
{
    system("cls");
    int n, ordernumber;
    double number;
    cout << "* Drink Menu *\n\n";
    cout << "Please select the kind of Drink you want:\n\n";
    cout << "1. Coca-Cola\n" << "Price: $1.99\n\n";
    cout << "2. Pepsi\n" << "Price: $1.99\n\n";
    cout << "3. Fanta\n" << "Price: $1.99\n\n";
    cout << "4. Dough\n" << "Price: $1.99\n\n";
    cout << "5. Water\n" << "Price: $1.99\n\n";
    cout << "0. Back\n\n";
    cin >> n;
    if ( n == 1)
    {
        orders.push_back("Coca-Cola");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*1.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering drink\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) drink(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 2)
    {
        orders.push_back("Pepsi");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*1.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering drink\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) drink(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 3)
    {
        orders.push_back("Fanta");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*1.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering drink\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) drink(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 4)
    {
        orders.push_back("Dough");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*1.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering drink\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) drink(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 5)
    {
        orders.push_back("Water");
        cout << "\nPlease enter how many numbers you want:\n\n";
        cin >> number;
        numbers.push_back(number*1.99);
        cout << "\n\nPlease select the option you want:\n\n" << "1. Continue ordering drink\n" << "2. Food Menu\n\n";
        cin >> ordernumber;
        if ( ordernumber == 1) drink(orders, numbers, j);
        else if ( ordernumber == 2) foodmenu(orders, numbers, j);
    }
    else if ( n == 0) foodmenu(orders, numbers, j);
}
