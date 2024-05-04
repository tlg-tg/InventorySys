#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<cstring>
#include<windows.h>
#include <fstream>
#include "declaration.h"
#include "count.h"

using namespace std;

class classRoom : public count, public declaration{
	public:
	declaration m[10];
	int en;
	string back;
	int memberid;
	int status1;
	int status2;
	int fee;
	int mem_fee;
	string pcnumber, pc_name;
	
	classRoom () : fee(0), memberid(0), status1(0), status2(0), mem_fee(0) {} //konstruktor

//pridobitev podatkov
	void get_data()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tKoliko razredov zelite dodati: ";
		cin >> en;
		system("cls");
		for(int i = 0; i < en; i++)
		{
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tVnesite razred " << i + 1 << " Ime : ";
			cin.ignore();
			getline(cin, m[memberid].id);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tStevilo dijakov        : ";
			getline(cin, m[memberid].name);
			cout << endl << endl;
			memberid++;
			counter++;
			back:
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tNadaljevanje[Y/N]      : ";
			cin >> back;
			if(back == "Y" || back == "y")
			{
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tVnesli ste vse podatke " << i + 1 << "/" << en << " clan uspesno...";
				getch();
				cout << endl;
			}
			else if(back =="N" || back == "n")
			{
				break;
			}
			else
			{
				cout << "\n\t\t\t\t\t\t\t\tNapacen vnos";
				goto back;
			}
		}
	}
		
//iskanje podatkov
	void find_data()
	{
		system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVnesite ime razreda : ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < memberid; i++)
        	{
        		status1 = 0;
        	    if(n == m[i].id)
        	    {
        	        status1 = 1; //1 = true bool
        	        break;
        	    }    
        	}// for loop zaprt
        	
        		if(status1) //if true
            	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n";
        		    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        		    cout << "\t\t\t\t\t\t\t\tIme razreda              :" << m[i].id << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tStevilo dijakov           :" << m[i].name << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
        		}
            	else
   		    	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
        	    	cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
            	}
        }
        getch();
	}
    	
	//prikaz podatkov
	void show_data()
   	{
      	//int i;
      	if(memberid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
    	}
	 	else
		{
    		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    		cout << "\t\t\t\t\t\t\t\t\t  Podatki vseh razredov" << endl << endl;
    	    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;

        	cout << "\t\t\t\t\t\tIme razreda" << "\t\t\t" << "Stevilo dijakov";
       		cout << endl << endl;
       		
       		for(int i = 0; i < memberid; i++)
       		{
        		cout << "\t\t\t\t\t\t" << m[i].id << "\t\t\t" << m[i].name << endl << endl;
        		
        	}
        	cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
       		cout<<"\n\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
       	}
        getch();
    }
    //objekti
    void pc()
    {
    	system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVnesite ime razreda v katerega zelite dodati objekte : ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < memberid; i++)
        	{
        		status1 = 0;
        	    if(n == m[i].id)
        	    {
        	        status1 = 1; //1 = true bool
        	        break;
        	    }    
        	}// for loop zaprt
        	
        		if(status1) //if true
            	{
        		    cout << "\t\t\t\t\t\t\t\tKoliko objektov zelite dodati : ";
					cin.ignore();
					getline(cin, pcnumber);
					cout << "\t\t\t\t\t\t\t\tVnesite ime objekta                  : ";
					cin.ignore();
					getline(cin, pc_name);
        		}
            	else
   		    	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tID ni v bazi" << endl;
        	    	cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
            	}
        }
        getch();
	}
	//izbris
	void delete_class_data()
	{
		system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVnesite ime razreda ki ga zelite izbrisati : ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < memberid; i++)
        	{
        		status1 = 0;
        	    if(n == m[i].id)
        	    {
        	        status1 = 1; //1 = true bool
        	        break;
        	    }    
        	}// for loop zaprt
        	
        		if(status1) //if true
            	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n";
        		    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\t\t\tIzbrisano"<< endl << endl;
        		    m[i].id = "";
        	    	m[i].name = "";
        	    	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
        		}
            	else
   		    	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
        	    	cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje ali stevilko opcije...";
            	}
        }
        getch();
	}
	
	
//urejanje podatkov
	void edit_class_data()
	{
		system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVnesite ime razreda za urejanje: ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < memberid; i++)
        	{
        		status1 = 0;
        	    if(n == m[i].id)
        	    {
        	        status1 = 1; //1 = true bool
        	        break;
        	    }    
        	}// for loop zaprt
        	
        		if(status1) //if true
            	{
            		system("cls");
            		cout << endl << endl;
					cout << "\t\t\t\t\t\t\t\tVnesi razred " << i + 1 << " Ime : ";
					cin.ignore();
					getline(cin, m[i].id);
					cout << endl << endl;
					cout << "\t\t\t\t\t\t\t\tStevilo dijakov        : ";
					cin.ignore();
					getline(cin, m[i].name);
					cout << endl << endl;
        		}
            	else
   		    	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tID ni v bazi" << endl;
        	    	cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
            	}
        }
        getch();
	}
	//shranjevanje podatkov
	void save_class()
	{
		// file pointer
		fstream fout;

		// odpre csv datoteko ali jo kreira
		fout.open("reportcard.xlsx", ios::out | ios::app);

		//int i;
      	if(memberid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
    	}
	 	else
		{
			for(int i = 0; i < memberid; i++)
			{
    			fout << "Class Room  Name: " << m[i].id << " No Of Students: " << m[i].name;
				cout<<"\n\t\t\t\t\t\tPodatki vneseni! Kliknite kateri koli gumb za nadaljevanje...";
			}
       	}
        getch();
    }

    
};
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

class employe : public count , public declaration
{
	public:
	declaration e[10];
	int i, en;
	string back;
	int pay;
	int employeid;
	int status3;
	int status4;
	//int emp_pay;
	int emp_pay_given;
	employe () : pay(0), employeid(0), status3(0), status4(0), emp_pay_given(0) {} // constructor
	void get_data()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tKoliko uciteljev zelite dodati: ";
		cin >> en;
		system("cls");
		for(i = 0; i < en; i++)
		{
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tUnikaten ID ucitelja " << i + 1 << ": ";
			cin.ignore();
			getline(cin, e[employeid].id);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tIme                               : ";
			getline(cin, e[employeid].name);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tStarost                           : ";
			getline(cin, e[employeid].age);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tDolocitev                         : ";
			getline(cin, e[employeid].designation);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tIzkusnje                          : ";
			getline(cin, e[employeid].experience);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tDodeli prenosni racunalnik (da/ne): ";
			getline(cin, e[employeid].laptop);
			employeid++;
			counter++;
			cout << endl << endl;
			back1:
			cout << "\t\t\t\t\t\t\t\tNadaljuj[Y/N]       : ";
			cin >> back;
			if(back == "Y" || back == "y")
			{
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tVnesli ste vse podatke " << i + 1 << "/" << en << " ucitelj uspesno...";
				getch();
				cout << endl;
			}
			else if(back =="N" || back == "n")
			{
				break;
			}
			else
			{
				cout << "\n\t\t\t\t\t\t\t\tNapacen vnos" << endl;
				goto back1;
			}
		}
	}
		
//prikaz podatkov
	void show_data()
	{
		system("cls");
		int i;
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVnesite uciteljev ID  za prikaz zapisov: ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
        
    	else
    	{
        	//int status = 0;
        	for(i = 0; i < employeid; i++)
        	{
        		status3 = 0;
        	    if(n == e[i].id)
        	    {
        	        status3 = 1; //1 = true bool
        	        break;
        	    }
        	    
        	}
        	if(status3) //if true
            {
        	    cout << "\n\n\n\n\n\n\n\n\n\n";
        	    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<1> Uciteljev ID                     :" << e[i].id << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<2> Uciteljevo ime                   :" << e[i].name << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<3> Uciteljeva starost               :" << e[i].age << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<4> Uciteljeva dolocitev             :" << e[i].designation << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<5> Uciteljeve izkusnje              :" << e[i].experience << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<6> Prenosni racunalnik dodeljen     :" << e[i].laptop << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    cout << "\n\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
        	}
            else
   		    {
        	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tID ni v bazi " << endl;
        	    cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
            }
        }
        getch();
	}
    	    	
	//podatki zaposlenih
	void employe_data()
   	{
      	int i;
      	if(employeid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
    	}
	 	else
		{
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t---------------------------------------------------------------------------------------" << endl << endl;
    		cout << "\t\t\t\t\t\t\t\t\tPodatki vseh uciteljev" << endl << endl;
    	    cout << "\t\t\t\t\t\t---------------------------------------------------------------------------------------" << endl << endl;
    		
        	cout << "\t\t\t\t\t\tID" << "\t\t\t" << "IME" << "\t\t\t" << "Prenosni racunalnik" << "\t\t\t" << "DOLOCITEV";
       		cout << endl << endl;

       		for(i = 0; i < employeid; i++)
       		{
        		cout << "\t\t\t\t\t\t" << e[i].id << "\t\t\t" << e[i].name << "\t\t\t" << e[i].laptop << "\t\t\t" << e[i].designation << endl << endl;
        		
        	}
        	cout << "\t\t\t\t\t\t---------------------------------------------------------------------------------------" << endl << endl;
       		cout << "\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
       	}
        getch();
    }
    
    //izbris zaposlenih
    void delete_employee_data()
	{
		system("cls");
		int i;
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVnesite uciteljev ID  za urejanje: ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
        
    	else
    	{
        	//int status = 0;
        	for(i = 0; i < employeid; i++)
        	{
        		status3 = 0;
        	    if(n == e[i].id)
        	    {
        	        status3 = 1; //1 = true bool
        	        break;
        	    }
        	    
        	}
        	if(status3) //if true
            {
        	    cout << "\n\n\n\n\n\n\n\n\n\n";
        	    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t\t\tIzbrisano:";
        	    e[i].id = "";
        	    e[i].name = "";
        	    e[i].age = "";
        	    e[i].designation = "";
        	    e[i].experience = "";
        	    e[i].laptop = "";
        	    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    cout << "\n\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
        	}
            else
   		    {
        	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tID ni v bazi " << endl;
        	    cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
            }
        }
        getch();
	}
    
    
    
    //urejanje zaposlenih
    void edit_employee_data()
	{
		system("cls");
		int i;
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVnesite uciteljev ID  za urejanje: ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
        }
        
    	else
    	{
        	//int status = 0;
        	for(i = 0; i < employeid; i++)
        	{
        		status3 = 0;
        	    if(n == e[i].id)
        	    {
        	        status3 = 1; // 1 = true bool
        	        break;
        	    }
        	    
        	}
        	if(status3) //if true
            {
            	cout << "\t\t\t\t\t\t\t\tIme                       : ";
            	cin.ignore();
				getline(cin, e[i].name);
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tStarost                          : ";
				cin.ignore();
				getline(cin, e[i].age);
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tDolocitev                        : ";
				cin.ignore();
				getline(cin, e[i].designation);
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tIzkusnje                         : ";
				cin.ignore();
				getline(cin, e[i].experience);
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tDodeli prenosni racunalnik (da/ne): ";
				cin.ignore();
				getline(cin, e[i].laptop);
        	}
            else
   		    {
        	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database " << endl;
        	    cout << "\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
            }
        }
        getch();
	}
	//shranjevanje zaposlenih
	void save_employee()
	{
		// file pointer
		fstream fout;

		// odpre xlsx datoteko ali jo kreira
		fout.open("reportcard.xlsx", ios::out | ios::app);

		//int i;
      	if(employeid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: Nic podatkov za shranit prosimo vnesite podatke...";
    	}
	 	else
		{
			for(i = 0; i < employeid; i++)
			{
				fout <<"ID:" << e[i].id << "Name" << e[i].name << "Age" << e[i].age << "designation" << e[i].designation << "Experience: " << e[i].experience << "Laptop: " << e[i].laptop;
				cout<<"\n\t\t\t\t\t\tPodatki vneseni! Kliknite kateri koli gumb za nadaljevanje...";
			}
       	}
        getch();
    }
    

    
};


////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	system("color 71");
	string ch1, ch2, ch3;
	string ch11, ch12, ch13, ch14;
	classRoom m1;
    employe e1;
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                        DOBRODOSLI                                     |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                INVENTORY MANAGEMENT SYSTEM                            |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

	cout << "Kliknite kateri koli gumb za nadaljevanje...";
	getch();
	system("cls");

    system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
	Sleep(200);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
	Sleep(1000);
	
	mainmenu:
    cout << endl << endl;
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Inventory Management System ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Ustvari Objekt" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Pokazi Objekt" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Najdi Objekt" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4> Uredi Objekt" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<5> Izbrisi Objekt" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<6> Shrani Objekt" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<0> Izhod" << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tVnesite:     ";
    cin >> ch1;
    cout << endl << endl << endl;
	
	if(ch1 == "1")
    {
		menu:
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Ustvari Objekt ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Razred" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Ucitelj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<3> Objekt" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<0> Nazaj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tVnesite izbiro:     ";
        cin >> ch2;
        
        if(ch2 == "1")
        {
          	system("cls");
            m1.get_data();
            goto menu;
        }
        if(ch2 == "2")
        {
        	system("cls");
            e1.get_data();
            goto menu;
        }
        if(ch2 == "3")
        {
        	system("cls");
            m1.pc();
            goto menu;
        }
			
        else if(ch2 == "0")
		{
   			goto mainmenu;
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNapacen vnos" << endl;
    		//cout << endl;
    		cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
			getch();
			goto menu;
		}
	}
	
	if(ch1 == "2")
	{
		show:
		system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Pokazi Objekt ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Razredi" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Ucitelj" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<0> Nazaj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tVnesite izbiro:     ";
        cin >> ch11;
        if(ch11 == "1")
		{
			system("cls");
			m1.show_data();
			goto show;
		}
		if(ch11 == "2")
		{
				system("cls");
				e1.employe_data();
			goto show;
		}
		else if(ch2 == "0")
		{
   			goto mainmenu;
		}
		else
		{
			system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNapacen vnos" << endl;
    		//cout << endl;
    			cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
			getch();
			goto show;
		}	
	}
	
	
	if(ch1 == "3")
	{
		find:
		system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Najdi Objekt ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Razredi" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Ucitelj" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<0> Nazaj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tVnesite izbiro:     ";
        cin >> ch12;
        if(ch12 == "1")
		{
			system("cls");
			m1.find_data();
			goto find;
		}
		if(ch12 == "2")
		{
			system("cls");
			e1.show_data();
			goto find;
		}
		else if(ch12 == "0")
		{
   			goto mainmenu;
		}
		else
		{
			system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNapacen vnos" << endl;
    		//cout << endl;
    			cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
			getch();
			goto find;
		}	
	}
	
	if(ch1 == "4")
	{
		edit:
		system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Uredi Objekt ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Razredi" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Ucitelj" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<0> Nazaj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tVnesi izbiro:     ";
        cin >> ch13;
        if(ch13 == "1")
		{
			system("cls");
			m1.edit_class_data();
			goto edit;
		}
		if(ch13 == "2")
		{
			system("cls");
			e1.edit_employee_data();
			goto edit;
		}
		else if(ch13 == "0")
		{
   			goto mainmenu;
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNapacen vnos" << endl;
    		cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
			getch();
			goto edit;
		}	
	}
	
	
	if(ch1 == "5")
	{
		delete1:
		system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Izbrisi Objekt ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Razredi" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Ucitelj" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<0> Nazaj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tVnesite izbiro:     ";
        cin >> ch14;
        if(ch14 == "1")
		{
			system("cls");
			m1.delete_class_data();
			goto delete1;
		}
		if(ch14 == "2")
		{
			system("cls");
			e1.delete_employee_data();
			goto delete1;
		}
		else if(ch14 == "0")
		{
   			goto mainmenu;
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNaroben vnos" << endl;
    		cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
			getch();
			goto delete1;
		}	
	}
	
	if(ch1 == "6")
	{
		save:
		system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Shrani podatke ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Razredi" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Ucitelji" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<0> Nazaj" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tVnesite izbiro:     ";
        cin >> ch14;
        if(ch14 == "1")
		{
			system("cls");
			m1.save_class();
			goto save;
		}
		if(ch14 == "2")
		{
			system("cls");
			e1.save_employee();
			goto save;
		}
		else if(ch14 == "0")
		{
   			goto mainmenu;
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNaroben vnos" << endl;
    		cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
			getch();
			goto save;
		}	
	}
	
	
	else if(ch1 == "0")
	{
		system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                HVALA DA STE UPORABLJALI                               |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                            INVENTORY MANAGEMENT SYSTEM                                |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	}
	else
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNaroben vnos" << endl;
    	cout << "\t\t\t\t\t\t\t\t\tKliknite kateri koli gumb za nadaljevanje...";
		getch();
		goto mainmenu;
	}
	
	return 0;
}
