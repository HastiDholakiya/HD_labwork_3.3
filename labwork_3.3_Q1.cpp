#include<iostream>
using namespace std;

class Diamond_Company{
	private:
		int comp_id;
        string comp_name;
        int comp_staff_quantity;
        int comp_revenue; 
        int comp_import_raw_diamonds; 
        int comp_export_diamonds; 
        string comp_ceo; 
        
    public:
    	Diamond_Company()
    	{
    		cout << "Enter ID : ";
    		cin >> comp_id;
    		cout << "Enter Name : ";
    		cin >> comp_name;
    		cout << "Enter Staff Quantity : ";
    		cin >> comp_staff_quantity;
    		cout << "Enter Revenue : ";
    		cin >> comp_revenue;
    		cout << "Enter Import Diamonds : ";
    		cin >> comp_import_raw_diamonds;
    		cout << "Enter Export Diamonds : ";
    		cin >> comp_export_diamonds;
    		cout << "Enter CEO : ";
    		cin >> comp_ceo;
		}
		getData()
		{
			cout << "ID : " << comp_id << endl; 
			cout << "Name : " << comp_name << endl; 
			cout << "Staff Quantity : " << comp_staff_quantity << endl; 
			cout << "Revenue : " << comp_revenue << endl; 
			cout << "Import Diamonds : " << comp_import_raw_diamonds << endl; 
			cout << "Export Diamonds : " << comp_export_diamonds << endl; 
			cout << "CEO : " << comp_ceo << endl; 

		}
    	
};

int main()
{
	int n,i;
	
	cout << "Enter number of diamond companies : ";
	cin >> n;
	
	Diamond_Company a[n];
	
	for(i=0;i<n;i++)
	{
		a[i].getData();
	}
	  
}
