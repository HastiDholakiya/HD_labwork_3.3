#include<iostream>
using namespace std;

class Cafe{
	private:
		int cafe_id;
        string cafe_name;
        string cafe_type;
        int cafe_rating; 
        string cafe_location; 
        int cafe_establish_year;
        int cafe_staff_quantity;
        
    public:
    	Cafe()
    	{
    		cout << "Enter Id : ";
    		cin >> cafe_id;
    		cout << "Enter Name : ";
    		cin >> cafe_name;
    		cout << "Enter Type : ";
    		cin >> cafe_type;
    		cout << "Enter Rating : ";
    		cin >> cafe_rating;
    		cout << "Enter City : ";
    		cin >> cafe_location;
    		cout << "Enter Esatablish year : ";
    		cin >> cafe_establish_year;
    		cout << "Enter Staff Quantity : ";
    		cin >> cafe_staff_quantity;
    		
    	}
    	
    	getData()
    	{
    		cout << "Id : " << cafe_id << endl;
    		cout << "Name : " << cafe_name << endl;
    		cout << "Type : " << cafe_type << endl;
    		cout << "Rating : " << cafe_rating << endl;
    		cout << "City : " << cafe_location << endl;
    		cout << "Esatablish year : " << cafe_establish_year << endl;
    		cout << "Staff Quantity : " << cafe_staff_quantity << endl;

		}
};

int main()
{
	int n,i;
	
	cout << "Enter number of cafe : ";
	cin >> n;
	
	Cafe c[n];
	
	for(i=0;i<n;i++)
	{
		c[i].getData();
	}
	  
}
