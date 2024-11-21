#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_PRODUCT=50;
float membership=1.00, total=0.0, vdiscount = 0, discount, Uprice[MAX_PRODUCT], Tprice[MAX_PRODUCT];
string PName[MAX_PRODUCT];
int UQuantity[MAX_PRODUCT] ,productCount=0;

void add_product();
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();

int main()
{
  int num;
    do
    {
      cout << "Enhanced cashier system" << endl;
      cout << "1. Add product to bill" << endl;
      cout << "2. Apply membership discount" << endl;
      cout << "3. Apply voucher discount" << endl;
      cout << "4. Display final bill" << endl;
      cout << "Enter you choice:" << endl;
      cin >> num;
      switch (num)
      {
        case 1:
        add_product();
        break;
            
        case 2:
        apply_membership_discount();
        break;

        case 3:
        apply_voucher_discount();
        break;

        case 4:
        display_final_bill();
        break;

        default:
        cout << "The number you entered is invalid" << endl;
      }
    }
    while(num !=4 );
    return 0;
}

void add_product()
{
  if (productCount < MAX_PRODUCT)
  {
    cout << "Enter Product Name: " << endl;
    cin >> PName[productCount];
    cout << "Enter Unit Price: " << endl;
    cin >> Uprice[productCount];
    cout << "Enter Quantity Purchased: " << endl;
    cin >> UQuantity[productCount];
    
    if (UQuantity[productCount] >= 10)
    {
      cout << " Product added with a 10% discount." << endl;
      Tprice[productCount] =(Uprice[productCount]*UQuantity[productCount])*0.90;
    }
    else if (UQuantity[productCount] >= 5)
    {
      cout << "Product added with a 5% discount." << endl;
      Tprice[productCount] = (Uprice[productCount]*UQuantity[productCount])*0.95;
    }
    
    else
    {
      cout << "No discount addded to product." << endl;
    }
      
      productCount++;
  }
    
    else
  {
   cout << "You have reached the product limit." << endl;
  }
}


void apply_membership_discount()
{
  string x;
  cout << "Do you have a membership (yes or no)?" << endl;
  cin >> x;
  if( x == "yes")
  {
    membership = 0.975;
    cout << "2.5% membership discount applied." << endl;
    }
    else if(x == "no")
    {
      cout << "Not eligible for discount, apply for membership." << endl;
    }
    else
    {
    cout << "Invalid answer, try again" << endl;
    }
}

void apply_voucher_discount()
{
  cout << "Enter voucher discount." << endl;
  cin >> discount;
  if(discount <= 5)
    {
      vdiscount += ((100-discount)/100);
      cout << "Voucher discount applied." << endl;
    }
    else
    {
      cout << "Invalid discount." << endl;
    }
}

void display_final_bill()
{
  float g_total=0.0;
cout << "Final Bill: " << endl;
cout << "Product | Unit Price | Quantity | Total Cost " << endl;
for( int l=0 ; l < productCount; l++)
{
cout << PName[l] << " | " << Uprice[l] << " | " << UQuantity[l] << " | " << Tprice[l] <<endl;
total += Tprice[l];
}
g_total += (total * membership * vdiscount);
cout << " Your grand total is $" << g_total << endl;
}