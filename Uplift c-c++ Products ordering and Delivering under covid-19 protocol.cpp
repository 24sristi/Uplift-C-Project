#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
	char name[56], juice1[]="Mango-juice" ,juice2[]="guava-juice" ,juice3[]="grapes-juice" ,juice4[]="apple-juice",juice5[]="orange-juice", fom1[]="Flour", fom2[]="Rice", fom3[]="Oil", fom4[]="Red-chilli powder", fom5[]="pulses",clean1[]="Spin-Mop",clean2[]="Natural Grass Broom",clean3[]="Scrub Sponge",clean4[]="Freshner",clean5[]="Bucket";
	char hygiene1[]="Hair care-Dove shampoo", hygiene2[]="Livon serum", hygiene3[]="Face-foundation",hygiene4[]="colgate",hygiene5[]="oral-care";
	char snacks1[]="Cookies", snacks2[]="Maggie", snacks3[]="Lays", snacks4[]="Ketchup", snacks5[]="cornflakes",gotobeginning ;
	int option=0,juiceoption,juiceoption1, qty,cleanoption,grainsoption,snacksoption,hygieneoption;
	string Address;
	starting:
	system("cls");

	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|                GIGANTIC ONLINE PRODUCT SERVICE        |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	cout<<"--------------------------COVID-19 SAFETY MEASURES-----------------------\n\n";

system("color CF");
	cout<<"1.Wear masks.\n";
	cout<<"2.Clean you hands with sanitizer while handling purchased products.\n";
	cout<<"3.Cover a cough and sneeze in you bent elbow or tissue.\n";
	cout<<"4.Maintain at least a 1-meter distance from others.\n\n";

    cout<<"Please Enter Your Name: ";
	cin.getline(name, 35);
    cout<<"Please Enter your Address: ";
    getline(cin, Address);

    cout<<"\n";
	cout<<"Hello "<<name<<"\nWhat would you like to order?\n\n";

	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|                      GROCERY STORE                    |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	cout<<"\t\t\t-----------GET 20% OFF ON ORDER ABOVE Rs400--------\n\n";

	cout<<"[Choice 1] Juice\n";
	cout<<"[Choice 2] Cleaning & Household\n";
	cout<<"[Choice 3] Foodgrains,Oil & Masala\n";
	cout<<"[Choice 4] Beauty & Hygiene\n";
	cout<<"[Choice 5] Snacks & Branded Foods\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>option;

	if(option==1)
	 {
		cout<<"\n1) "<<juice1<<"\n";
		cout<<"2) "<<juice2<<"\n";
		cout<<"3) "<<juice3<<"\n";
		cout<<"4) "<<juice4<<"\n";
		cout<<"5) "<<juice5<<"\n";
		cout<<"\nPlease Enter which fruit-juice would you like to have?:";
		cin>>juiceoption;
		if(juiceoption>=1 && juiceoption<=5)
		{
			cout<<"\n1) 200ml Rs250.00\n"<<"2) 350ml  Rs500.00\n"<<"3) 450ml Rs900.00\n";
			cout<<"\nChoose Size Please:";
			cin>>juiceoption1;
			if(juiceoption1>=1 && juiceoption1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(juiceoption1)
			{
			case 1: option = 200.00*qty;
			break;

			case 2: option = 259.00*qty;
			break;

			case 3: option = 500.00*qty;
			break;


			      }
			system("cls");
			switch (juiceoption1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<juice1;
			 cout<<"\nYour Total Bill is:Rs"<<option;
            cout<<"\nYour Order Will be delivered on address:"<<" "<<Address<<" "<<"in 45 Minutes";
			 cout<<"\n\nThank you For Ordering From Big Basket online service.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<juice2;
			 cout<<"\nYour Total Bill is -Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 45 Minutes";
			 cout<<"\nThank you For Ordering From Big Basket online service.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<juice3;
			 cout<<"\nYour Total Bill is -Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 45 Minutes";
			 cout<<"\nThank you For Ordering From Big Basket online service.\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<juice4;
			 cout<<"\nYour Total Bill is -Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 45 Minutes";
			 cout<<"\nThank you For Ordering From Big Basket online service.\n";
			 break;
			  case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<juice5;
			 cout<<"\nYour Total Bill is -Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 45 Minutes";
			 cout<<"\nThank you For Ordering From Big Basket online service.\n";
			 break;

			}


	        cout<<"\n\n-----------------------------------PLEASE FOLLOW ALL COVID-19 SAFETY MEASURES-------------------------------------------\n\n";

			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;

			}



		}

	 }


	 else if(option==2)
	 {
		cout<<"\n1 "<<clean1<<" Rs200"<<"\n";
		cout<<"2 "<<clean2<<" Rs50"<<"\n";
		cout<<"3 "<<clean3<<" Rs30"<<"\n";
		cout<<"4 "<<clean4<<" Rs150"<<"\n";
		cout<<"5 "<<clean5<<" Rs120"<<"\n";

		cout<<"\nPlease Enter which Cleaning household you would like to have?: ";
		cin>>cleanoption;
		if(cleanoption>=1 && cleanoption<=5)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(cleanoption)
			{
			case 1: option = 200.00*qty;
			break;

			case 2: option = 50.00*qty;
			break;

			case 3: option = 30.00*qty;
			break;
			case 4: option = 150.00*qty;
			break;

			case 5: option = 120.00*qty;
			break;

			}
			system("cls");
			switch (cleanoption)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<clean1;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 35 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service. \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<clean2;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 35 Minutes";
			cout<<"\nThank you For Ordering From BigBasket online service. \n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<clean3;
			 cout<<"\nYour Total Bill is-Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 35 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.  \n";
			 break;
			  case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<clean4;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 35 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<clean5;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 35 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;


			}
			 cout<<"\n\n-----------------------------------PLEASE FOLLOW ALL COVID-19 SAFETY MEASURES-------------------------------------------\n\n";

			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;

			}

 }
}
	else if(option==3)
	 {
		cout<<"\n1  "<<fom1<<" Rs300.00"<<"\n";
		cout<<"2  "<<fom2<<" Rs250.00"<<"\n";
		cout<<"3  "<<fom3<<" Rs100.00"<<"\n";
        cout<<"4  "<<fom2<<" Rs160.00"<<"\n";
		cout<<"5  "<<fom3<<" Rs100.00"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>grainsoption;
		if(grainsoption>=1 && grainsoption<=5)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(grainsoption)
			{
			case 1: option = 240.00*qty;
			break;

			case 2: option = 160.00*qty;
			break;

			case 3: option = 100.00*qty;
			break;

			case 4: option = 160.00*qty;
			break;

			case 5: option = 100.00*qty;
			break;

			}
			system("cls");
			switch (grainsoption)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fom1;
			 cout<<"\nYour Total Bill is- Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";

			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<fom2;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fom3;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<fom4;
			 cout<<"\nYour Total Bill is- Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fom5;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;



			}
			 cout<<"\n\n-----------------------------------PLEASE FOLLOW ALL COVID-19 SAFETY MEASURES-------------------------------------------\n\n";

			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;

			}
			}
			}


	 else if(option==4)
	 {
		cout<<"\n1 "<<hygiene1<<" Rs150.00"<<"\n";
		cout<<"2 "<<hygiene2<<" Rs100.00"<<"\n";
		cout<<"3 "<<hygiene3<<" Rs120.00"<<"\n";
		cout<<"4 "<<hygiene4<<" Rs89.00"<<"\n";
		cout<<"5 "<<hygiene5<<" Rs200.00"<<"\n";

		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>hygieneoption;
		if(hygieneoption>=1 && hygieneoption<=5)
		{
			cout<<"\nHow Much products Do you want: ";
			cin>>qty;
			switch(hygieneoption)
			{
			case 1: option = 150.00*qty;
			break;

			case 2: option = 100.00*qty;
			break;

			case 3: option = 120.00*qty;
			break;
			case 4: option = 89.00*qty;
			break;

			case 5: option = 200.00*qty;
			break;

			}
			system("cls");
			switch (hygieneoption)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<hygiene1;
			 cout<<"\nYour Total Bill is- Rs"<<option;
			  cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 25 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<hygiene2;
			 cout<<"\nYour Total Bill is- Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 25 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<hygiene3;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 25 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			  case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<hygiene4;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 25 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<hygiene5;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 25 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;



			}
			cout<<"\n\n-----------------------------------PLEASE FOLLOW ALL COVID-19 SAFETY MEASURES-------------------------------------------\n\n";

			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;

			}
			}
			}



	else if(option==5)
	 {
		cout<<"\n1 "<<snacks1<<" Rs50.00"<<"\n";
		cout<<"2 "<<snacks2<<" Rs10.00"<<"\n";
		cout<<"3 "<<snacks3<<" Rs20.00"<<"\n";
		cout<<"4 "<<snacks4<<" Rs55.00"<<"\n";
		cout<<"5 "<<snacks5<<" Rs90.00"<<"\n";

		cout<<"\nPlease Enter which snacks you would like to have?:";
		cin>>snacksoption;
		if(snacksoption>=1 &&snacksoption<=5)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(snacksoption)
			{
			case 1: option = 50.00*qty;
			break;

			case 2: option = 10.00*qty;
			break;

			case 3: option = 20.00*qty;
			break;

			case 4: option = 55.00*qty;
			break;

			case 5: option = 90.00*qty;
			break;


			}
			system("cls");
			switch (snacksoption)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<snacks1;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service. \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<snacks2;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service. \n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<snacks3;
			 cout<<"\n\Your Total Bill is - Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<snacks4;
			 cout<<"\nYour Total Bill is - Rs"<<option;
			cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<snacks5;
			 cout<<"\n\Your Total Bill is - Rs"<<option;
			 cout<<"\nYour Order Will be delivered on address"<<" "<<Address<<" "<<"in 40 Minutes";
			 cout<<"\nThank you For Ordering From BigBasket online service.\n";


			 break;


			}
			 cout<<"\n\n-----------------------------------PLEASE FOLLOW ALL COVID-19 SAFETY MEASURES-------------------------------------------\n\n";

			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;

			}
			}
			}

			else
			{
				system("cls");
				cout<<"Please Select Right Choice: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;

				cin>>gotobeginning;

				if(gotobeginning=='Y' || gotobeginning=='y')
				{
				  goto starting;

			}
			}

     getch();
}


