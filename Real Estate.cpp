#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
class est
{
	int sel, choose, price;
	public:
		void data();
		void file();
};
void est :: data()
{
	ofstream out;
	out.open("final.txt");
	cout<<"\t\t\t\tReal Estate Program"<<endl;
	cout<<"\t\t\tWelcome to the Real Estate Company"<<endl;
	out<<"\t\t\t\tReal Estate Program"<<endl;
	out<<"\t\t\tWelcome to the Real Estate Company"<<endl;
	cout<<"Select either one of your choice"<<endl;
	out<<"Your choice"<<endl;
	cout<<"-------------------------------"<<endl;
	out<<"-------------------------------"<<endl;
	cout<<"1.search listing"<<endl;
	cout<<"2.Print listing in a text file"<<endl;
	cout<<"Enter Selection:"<<endl;
	cout<<"-------------------------------"<<endl;
	cin>>sel;
	{
	switch(sel)
	{
		case 1:
			{
				cout<<"Select 1 for Residential and 2 for Commercial"<<endl;
				cout<<"-------------------------------"<<endl;
				cin>>choose;
				cout<<"-------------------------------"<<endl;
				if(choose==1)
				{
					cout<<"You've chosen Residential"<<endl;
					out<<"You've chosen Residential"<<endl;
					cout<<"Select your choice\n1.Plot\n2.Individual House\n3.Apartment"<<endl;
					cout<<"-------------------------------"<<endl;
					cin>>choose;
					cout<<"-------------------------------"<<endl;
					if(choose==1)
					{
						cout<<"Select the Area(Square feet) of your choice from below available choice"<<endl;
						out<<"You've chosen Area"<<endl;
						cout<<"1.1500Sq.feet\n2.1700Sq.feet\n3.2000Sq.feet\n4.2500Sq.feet"<<endl;
						cout<<"-------------------------------"<<endl;
						cin>>choose;
						cout<<"-------------------------------"<<endl;
						if(choose==1)
						{
							cout<<"Available Area's\tPrice"<<endl;
							out<<"1500sq.feet"<<endl;
							cout<<"1.Phagwara\t\t1,00,000\n2.Ludhiana\t\t1,50,000\n3.Jalandhar City\t1,15,000\n4.Law Gate\t\t1,00,000"<<endl;
							cout<<"Select your choice"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose>=1&&choose<=4)
							{
								cout<<"Thank you for selecting"<<endl;
							}
							else
							{
								cout<<"Choose the correct option"<<endl;
							}
							if(choose==1)
							{
								out<<" Area and Price"<<endl;
								out<<"Phagwara\t1,00,000"<<endl;
							}
							else if(choose==2)
							{
								out<<" Area and Price"<<endl;
								out<<"Ludhiana\t1,50,000"<<endl;
							}
							else if(choose==3)
							{
								out<<" Area and Price"<<endl;
								out<<"Jalandhar City\t1,15,000"<<endl;
							}
							else if(choose==4)
							{
								out<<" Area and Price"<<endl;
								out<<"Law Gate\t1,00,000"<<endl;
							}
						}
						else if(choose==2)
						{
							out<<"1700sq.feet"<<endl;
							cout<<"Available Area's\tPrice"<<endl;
							cout<<"1.Chandigarh\t\t2,00,000\n2.Ludhiana\t\t2,20,000\n3.Jalandhar City\t2,10,000\n4.Law Gate\t\t2,13,000"<<endl;
							cout<<"Select your choice"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose>=1&&choose<=4)
							{
								cout<<"Thank you for selecting"<<endl;
							}
							else
							{
								cout<<"Choose the correct option"<<endl;
							}
							if(choose==1)
							{
								out<<" Area and Price"<<endl;
								out<<"Chandigarh\t2,00,000"<<endl;
							}
							else if(choose==2)
							{
								out<<" Area and Price"<<endl;
								out<<"Ludhiana\t2,20,000"<<endl;
							}
							else if(choose==3)
							{
								out<<" Area and Price"<<endl;
								out<<"Jalandhar City\t2,10,000"<<endl;
							}
							else if(choose==4)
							{
								out<<" Area and Price"<<endl;
								out<<"Law Gate\t2,13,000"<<endl;
							}
						}
						else if(choose==3)
						{
							out<<"2000sq.feet"<<endl;
							cout<<"Available Area's\tPrice"<<endl;
							cout<<"1.Delhi\t\t\t3,00,000\n2.Ludhiana\t\t2,90,000\n3.Jalandhar City\t2,98,000\n4.Law Gate\t\t2,89,000"<<endl;
							cout<<"Select your choice"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose>=1&&choose<=4)
							{
								cout<<"Thank you for selecting"<<endl;
							}
							else
							{
								cout<<"Choose the correct option"<<endl;
							}
							if(choose==1)
							{
								out<<" Area and Price"<<endl;
								out<<"Delhi\t3,00,000"<<endl;
							}
							else if(choose==2)
							{
								out<<" Area and Price"<<endl;
								out<<"Ludhiana\t2,90,000"<<endl;
							}
							else if(choose==3)
							{
								out<<" Area and Price"<<endl;
								out<<"Jalandhar City\t2,98,000"<<endl;
							}
							else if(choose==4)
							{
								out<<" Area and Price"<<endl;
								out<<"Law Gate\t\t2,89,000"<<endl;
							}
						}
						else if(choose==4)
						{
							out<<"2500sq.feet"<<endl;
							cout<<"Available Area's\tPrice"<<endl;
							cout<<"1.Phagwara\t\t3,20,000\n2.Ludhiana\t\t3,30,000\n3.Delhi\t\t\t3,70,000\n4.Chandigarh\t\t3,50,000"<<endl;
							cout<<"Select your choice"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose>=1&&choose<=4)
							{
								cout<<"Thank you for selecting"<<endl;
							}
							else
							{
								cout<<"Choose the correct option"<<endl;
							}
							if(choose==1)
							{
								out<<" Area and Price"<<endl;
								out<<"Phagwara\t3,20,000"<<endl;
							}
							else if(choose==2)
							{
								out<<" Area and Price"<<endl;
								out<<"Ludhiana\t3,30,000"<<endl;
							}
							else if(choose==3)
							{
								out<<" Area and Price"<<endl;
								out<<"Delhi\t3,70,000"<<endl;
							}
							else if(choose==4)
							{
								out<<" Area and Price"<<endl;
								out<<"Chandigarh\t3,50,000"<<endl;
							}
						}
						else
							{
								cout<<"Please select a valid number";
							}	
					}
					else if(choose==2)
					{
						out<<"You've chosen facing"<<endl;
						cout<<"Please mention which side you're preferring to take\n1.East\n2.West\n3.North"<<endl;
						cin>>choose;
						if(choose==1)
						{
							out<<"East"<<endl;
							cout<<"Select the area you want from the availability"<<endl;
							cout<<"1.Jalandhar City\n2.Phagwara\n3.Jalandhar Cantt\n4.Ludhiana"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								out<<"Jalandhar city"<<endl;
								cout<<"Sunildas Villa's"<<endl;
								cout<<"price=47,00,000"<<endl;
								out<<"Sunildas Villa's"<<endl;
								out<<"price=47,00,000"<<endl;
							}
							else if(choose==2)
							{
								out<<"Phagwara"<<endl;
								cout<<"Musheer Houses"<<endl;
								cout<<"price=48,00,000"<<endl;
								out<<"Musheer Houses"<<endl;
								out<<"price=48,00,000"<<endl;			
							}
							else if(choose==3)
							{
								out<<"Jalandhar Cantt"<<endl;
								cout<<"Sri Villa's"<<endl;
								cout<<"price=49,00,000"<<endl;
								out<<"Sri Villa's"<<endl;
								out<<"price=49,00,000"<<endl;
							}
							else if(choose==4)
							{
								out<<"Ludhiana"<<endl;
								cout<<"Marvel Villa's"<<endl;
								cout<<"price=50,90,000"<<endl;
								out<<"Marvel Villa's"<<endl;
								out<<"price=50,90,000"<<endl;
							}
							else
							{
							cout<<"Please enter a valid number"<<endl;
							}
						}
						else if(choose==2)
						{
							out<<"West"<<endl;
							cout<<"Select the area you want from the availability"<<endl;
							cout<<"1.Jalandhar City\n2.Phagwara\n3.Delhi\n4.Chandigarh"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								out<<"Jalandhar City"<<endl;
							cout<<"Sunildas Villas's"<<endl;
							cout<<"price=43,00,000"<<endl;
							out<<"Sunildas Villas's"<<endl;
							out<<"price=43,00,000"<<endl;
							}
							else if(choose==2)
							{
								out<<"Phagwara"<<endl;
							cout<<"Apache Housings"<<endl;
							cout<<"price=46,00,000"<<endl;	
							out<<"Apache Housings"<<endl;
							out<<"price=46,00,000"<<endl;			
							}
							else if(choose==3)
							{
								out<<"Delhi"<<endl;
							cout<<"Singh Villa's"<<endl;
							cout<<"price=55,60,000"<<endl;
							out<<"Singh Villa's"<<endl;
							out<<"price=55,60,000"<<endl;
							}
							else if(choose==4)
							{
							out<<"Chandigarh"<<endl;
							cout<<"Saroor Houses"<<endl;
							cout<<"price=53,00,000"<<endl;
							out<<"Saroor Houses"<<endl;
							out<<"price=53,00,000"<<endl;
							}
							else
							{
							cout<<"Please enter a valid number"<<endl;
							}
						}
						else if(choose==3)
						{
							out<<"North"<<endl;
							cout<<"Select the area you want from the availability"<<endl;
							cout<<"1.Chandigarh\n2.Phagwara\n3.Amritsar\n4.Ludhiana"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								out<<"Chandigarh"<<endl;
							cout<<"Parivar Houses"<<endl;
							cout<<"price=52,00,000"<<endl;
							out<<"Parivar Houses"<<endl;
							out<<"price=52,00,000"<<endl;
							}
							else if(choose==2)
							{
								out<<"Phagwara"<<endl;
							cout<<"Sundar Villa's"<<endl;
							cout<<"price=47,00,000"<<endl;
							out<<"Sundar Villa's"<<endl;
							out<<"price=47,00,000"<<endl;			
							}
							else if(choose==3)
							{
								out<<"Amritsar"<<endl;
							cout<<"Royal Villa's"<<endl;
							cout<<"price=56,00,000"<<endl;
							out<<"Royal Villa's"<<endl;
							out<<"price=56,00,000"<<endl;
							}
							else if(choose==4)
							{
								out<<"Ludhiana"<<endl;
							cout<<"Sky High houses"<<endl;
							cout<<"price=55,00,000"<<endl;
							out<<"Sky High houses"<<endl;
							out<<"price=55,00,000"<<endl;
							}
							else
							{
							cout<<"Please enter a valid number"<<endl;
							}
						}
						else
						{
							cout<<"Please enter a valid data"<<endl;
						}
					}
					else if(choose==3)
					{
						out<<"You've chosen Apartments"<<endl;
						cout<<"Select your choice for the apartment"<<endl;
						cout<<"Select how much Square foot apartment you're looking for'"<<endl;
						cout<<"Availability-\n1.2000Sq feet\n2.2500Sq feet\n3.2600Sq feet\n4.3000sq feet"<<endl;
						cout<<"-------------------------------"<<endl;
						cin>>choose;
						cout<<"-------------------------------"<<endl;
						if(choose==1)
						{
							out<<"You've chosen Area"<<endl;
							out<<"2000sq.feet"<<endl;
							cout<<"Available Apartments"<<endl;
							cout<<"Select your choice"<<endl;
							cout<<"1.Jalandhar\n2.Phagwara\n3.Ludhiana\n4.Chandigarh"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								out<<"Jalandhar area"<<endl;
								cout<<"Availability"<<endl;
								cout<<"Sundance Apartments"<<endl;
								out<<"Sundance Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								out<<"Floor and Price"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,04,000"<<endl;
								cout<<"3rt\t12,40,000"<<endl;
								cout<<"4th\t12,50,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if(choose==1)
								{
									out<<"1st\t12,00,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"2nd\t12,04,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"3rd\t12,40,000"<<endl;
								}
								else if(choose==4)
								{
									out<<"4th\t12,50,000"<<endl;	
								}
							}
							else if(choose==2)
							{
								out<<"Phagwara"<<endl;
								cout<<"Availability"<<endl;
								cout<<"Sun Apartments"<<endl;
								out<<"Sun Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								out<<"Floor and Price"<<endl;
								cout<<"1st\t11,50,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,05,000"<<endl;
								cout<<"4st\t12,06,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if(choose==1)
								{
									out<<"1st\t11,50,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"2nd\t12,00,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"3rd\t12,05,000"<<endl;
								}
								else if(choose==4)
								{
									out<<"4th\t12,06,000"<<endl;	
								}
							}
							else if(choose==3)
							{
								out<<"Ludhiana"<<endl;
								cout<<"Availability"<<endl;
								cout<<"Daisy Apartments"<<endl;
								out<<"Daisy Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								out<<"Floor and Price"<<endl;
								cout<<"1st\t12,10,000"<<endl;
								cout<<"2st\t12,20,000"<<endl;
								cout<<"3st\t12,30,000"<<endl;
								cout<<"4st\t12,40,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if(choose==1)
								{
									out<<"1st\t12,10,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"2nd\t12,20,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"3rd\t12,30,000"<<endl;
								}
								else if(choose==4)
								{
									out<<"4th\t12,40,000"<<endl;	
								}
							}
							else if(choose==4)
							{
								out<<"Chandigarh"<<endl;
								cout<<"Availability"<<endl;
								cout<<"Curo Apartment"<<endl;
								out<<"Curo Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								out<<"Floor and Price"<<endl;
								cout<<"1st\t11,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,80,000"<<endl;
								cout<<"4st\t12,90,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if(choose==1)
								{
									out<<"1st\t11,00,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"2nd\t12,00,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"3rd\t12,80,000"<<endl;
								}
								else if(choose==4)
								{
									out<<"4th\t12,90,000"<<endl;	
								}
							}
							else
							{
								cout<<"Please select the correct number"<<endl;
							}
						}
						else if(choose==2)
						{
							cout<<"Available Apartments"<<endl;
							cout<<"Place"<<endl;
							cout<<"1.Jalandhar\n2.Phagwara\n3.Amritsar\n4.Delhi"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								cout<<"Availability"<<endl;
								cout<<"Mistique Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,50,000"<<endl;
								cout<<"3st\t12,60,000"<<endl;
								cout<<"4st\t12,70,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==2)
							{
								cout<<"Availability"<<endl;
								cout<<"Charle's Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								cout<<"1st\t12,10,000"<<endl;
								cout<<"2st\t12,20,000"<<endl;
								cout<<"3st\t12,30,000"<<endl;
								cout<<"4st\t12,40,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==3)
							{
								cout<<"Availability"<<endl;
								cout<<"Daisy Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								cout<<"1st\t15,10,000"<<endl;
								cout<<"2st\t15,20,000"<<endl;
								cout<<"3st\t15,30,000"<<endl;
								cout<<"4st\t15,40,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==4)
							{
								cout<<"Availability"<<endl;
								cout<<"Curo Apartments"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor\tPrice"<<endl;
								cout<<"1st\t14,10,000"<<endl;
								cout<<"2st\t14,20,000"<<endl;
								cout<<"3st\t14,30,000"<<endl;
								cout<<"4st\t14,40,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else
							{
								cout<<"Please select the correct number"<<endl;
							}
						}
						else if(choose==3)
						{
							cout<<"Available Apartments"<<endl;
							cout<<"Place"<<endl;
							cout<<"1.Jalandhar\n2.Phagwara\n3.Ludhiana\n4.Chandigarh"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								cout<<"Availability"<<endl;
								cout<<"Sundance Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==2)
							{
								cout<<"Availability"<<endl;
								cout<<"Sun Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==3)
							{
								cout<<"Availability"<<endl;
								cout<<"Daisy Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==4)
							{
								cout<<"Availability"<<endl;
								cout<<"Curo Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else
							{
								cout<<"Please select the correct number"<<endl;
							}
						}
						else if(choose==4)
						{
							cout<<"Available Apartments"<<endl;
							cout<<"Place"<<endl;
							cout<<"1.Jalandhar\n2.Phagwara\n3.Ludhiana\n4.Chandigarh"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								cout<<"Availability"<<endl;
								cout<<"Sundance Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==2)
							{
								cout<<"Availability"<<endl;
								cout<<"Sun Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==3)
							{
								cout<<"Availability"<<endl;
								cout<<"Daisy Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==4)
							{
								cout<<"Availability"<<endl;
								cout<<"Curo Apartment"<<endl;
								cout<<"Select the floor of your choice from the availability"<<endl;
								cout<<"Floor/tPrice"<<endl;
								cout<<"1st\t12,00,000"<<endl;
								cout<<"2st\t12,00,000"<<endl;
								cout<<"3st\t12,00,000"<<endl;
								cout<<"4st\t12,00,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else
							{
								cout<<"Please select the correct number"<<endl;
							}
						}
						else
						{
							cout<<"Please enter a valid number"<<endl;
						}
					}
					else
					{
						cout<<"Please select a valid number"<<endl;
					}
				}
				else if(choose==2)
				{
					out<<"You've chosen Commercial"<<endl;
					cout<<"You've chosen Commercial"<<endl;
						cout<<"Choose your option according to the choices"<<endl;
						cout<<"1.List rent according to budget\n2.List according to area(space)\n3.List according to floor"<<endl;
						cout<<"-------------------------------"<<endl;
						cin>>choose;
						cout<<"-------------------------------"<<endl;
						if(choose==1)
						{
							cout<<"You've chosen List rent according to budget"<<endl;
							out<<"You've chosen List rent according to budget"<<endl;
							cout<<"Enter your budget range from 15,000 to 50,000"<<endl;
							out<<"Mall Name, place and Rent per month(in rupees)"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>price;
							cout<<"-------------------------------"<<endl;
							if(price>=15000&&price<=20000)
							{
								cout<<"Mall listings according to the budget"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t19,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if (choose==1)
								{
									out<<"Carnival, Jalandhar\t15,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"Curo, Jalandhar City\t17,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
								}
								else if(choose==4)
								{
									out<<"4.MBD, Jalandhar\t19,000"<<endl;
								}
							}
							else if(price>=21000&&price<=30000)
							{
								cout<<"Mall listings according to the budget"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t22,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t24,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t22,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t29,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(price>=31000&&price<=40000)
							{
								cout<<"Mall listings according to the budget"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t32,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t34,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t32,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t39,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(price>=41000&&price<=50000)
							{
								cout<<"Mall listings according to the budget"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t42,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t44,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t42,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t49,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else
							{
								cout<<"Please enter the price between 21000 to 50000 rupees";
							}
						}
						else if(choose==2)
						{
							out<<"You've chosen list according to area"<<endl;
							cout<<"You've chosen list according to area"<<endl;
							cout<<"Enter the choice from below (in square feet)"<<endl;
							cout<<"1.1500\n2.2000\n3.2500\n4.3000"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								out<<"1500sq.feet"<<endl;
								cout<<"Mall listings according to the area"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								out<<"Mall Name, place and Rent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t19,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if(choose==1)
								{
									out<<"Carnival, Jalandhar\t15,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"Curo, Jalandhar City\t17,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"Prime cinemas, Phagwara\t16,000"<<endl;
								}
								else if(choose==4)
								{
									out<<"4.MBD, Jalandhar\t19,000"<<endl;
								}
							}
							else if(choose==2)
							{
								cout<<"Mall listings according to the area"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t22,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t24,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t22,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t29,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==3)
							{
								cout<<"Mall listings according to the area"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t32,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t34,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t32,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t39,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==4)
							{
								cout<<"Mall listings according to the area"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t42,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t44,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t42,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t49,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else
							{
								cout<<"Please enter the choice correctly between 1,2,3 and 4";
							}
						}
						else if(choose==3)
						{
							out<<"You've chosen list according to the floor"<<endl;
							cout<<"You've chosen list according to the floor"<<endl;
							cout<<"Choose your choice from available options"<<endl;
							cout<<"1.Ground floor\n2.First floor\n3.Fifth floor\n4.Sixth floor"<<endl;
							cout<<"-------------------------------"<<endl;
							cin>>choose;
							cout<<"-------------------------------"<<endl;
							if(choose==1)
							{
								out<<"Ground floor"<<endl;
								cout<<"Mall listings according to the floor"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								out<<"Mall Name, place and Rent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t19,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
								if(choose==1)
								{
									out<<"Carnival, Jalandhar\t15,000"<<endl;
								}
								else if(choose==2)
								{
									out<<"Curo, Jalandhar City\t17,000"<<endl;
								}
								else if(choose==3)
								{
									out<<"Prime cinemas, Phagwara\t16,000"<<endl;	
								}
								else if(choose==4)
								{
									out<<"MBD, Jalandhar\t19,000"<<endl;
								}
							}
							else if(choose==2)
							{
								cout<<"Mall listings according to the floor"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t22,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t24,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t22,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t29,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==3)
							{
								cout<<"Mall listings according to the floor"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t32,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t34,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t32,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t39,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else if(choose==4)
							{
								cout<<"Mall listings according to the floor"<<endl;
								cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
								cout<<"1.Carnival, Jalandhar\t\t42,000"<<endl;
								cout<<"2.Curo, Jalandhar City\t\t44,000"<<endl;
								cout<<"3.Prime cinemas, Phagwara\t42,000"<<endl;
								cout<<"4.MBD, Jalandhar\t\t49,000"<<endl;
								cout<<"Select your choice"<<endl;
								cout<<"-------------------------------"<<endl;
								cin>>choose;
								cout<<"-------------------------------"<<endl;
								if(choose>=1&&choose<=4)
								{
									cout<<"Thanks for selecting"<<endl;
								}
								else
								{
									cout<<"Please select a valid number"<<endl;
								}
							}
							else
							{
								cout<<"Please enter the choice correctly between 1,2,3 and 4";
							}
						}
						else
						{
							cout<<"Enter a valid number"<<endl;
						}
				}
				else
				{
					cout<<"Please enter a valid selection"<<endl;
				}
				break;
			}
			{
			case 2:
				{
					cout<<"\t\t\t\tResidential-"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"Available Plot-"<<endl;
					cout<<"1.1500Sq.feet\n2.1700Sq.feet\n3.2000Sq.feet\n4.2500Sq.feet"<<endl;
					cout<<"Available Area's\tPrice"<<endl;
					cout<<"1.Phagwara\t\t1,00,000\n2.Ludhiana\t\t1,50,000\n3.Jalandhar City\t1,15,000\n4.Law Gate\t\t1,00,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"1.Chandigarh\t\t2,00,000\n2.Ludhiana\t\t2,20,000\n3.Jalandhar City\t2,10,000\n4.Law Gate\t\t2,13,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"1.Delhi\t\t\t3,00,000\n2.Ludhiana\t\t2,90,000\n3.Jalandhar City\t2,98,000\n4.Law Gate\t\t2,89,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"1.Phagwara\t\t3,20,000\n2.Ludhiana\t\t3,30,000\n3.Delhi\t\t\t3,70,000\n4.Chandigarh\t\t3,50,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"Available Individual Houses"<<endl;
					cout<<"1.Jalandhar City\n2.Phagwara\n3.Jalandhar Cantt\n4.Ludhiana"<<endl;
					cout<<"1.Jalandhar City"<<endl;
					cout<<"Sunildas Villa's"<<endl;
					cout<<"price=47,00,000"<<endl;
					cout<<"2.Phagwara"<<endl;
					cout<<"Musheer Houses"<<endl;
					cout<<"price=48,00,000"<<endl;
					cout<<"3.Jalandhar Cantt"<<endl;
					cout<<"Sri Villa's"<<endl;
					cout<<"price=49,00,000"<<endl;
					cout<<"4.Ludhiana"<<endl;
					cout<<"Marvel Villa's"<<endl;
					cout<<"price=50,90,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"Available Apartments\n1.Jalandhar"<<endl;
					cout<<"Sundance Apartments"<<endl;
					cout<<"Floor\tPrice"<<endl;
					cout<<"1st\t12,00,000"<<endl;
					cout<<"2st\t12,04,000"<<endl;
					cout<<"3st\t12,40,000"<<endl;
					cout<<"4st\t12,50,000"<<endl;
					cout<<"2.Phagwara"<<endl;
					cout<<"Availability"<<endl;
					cout<<"Sun Apartment"<<endl;
					cout<<"Floor\tPrice"<<endl;
					cout<<"1st\t12,00,000"<<endl;
					cout<<"2st\t12,00,000"<<endl;
					cout<<"3st\t12,00,000"<<endl;
					cout<<"4st\t12,00,000"<<endl;
					cout<<"3.Chandigarh"<<endl;
					cout<<"Availability"<<endl;
					cout<<"Sundar Apartment"<<endl;
					cout<<"Floor\tPrice"<<endl;
					cout<<"1st\t13,00,000"<<endl;
					cout<<"2st\t14,00,000"<<endl;
					cout<<"3st\t11,00,000"<<endl;
					cout<<"4st\t15,00,000"<<endl;
					cout<<"4.Ludhiana"<<endl;
					cout<<"Availability"<<endl;
					cout<<"West Apartment"<<endl;
					cout<<"Floor\tPrice"<<endl;
					cout<<"1st\t13,00,000"<<endl;
					cout<<"2st\t14,90,000"<<endl;
					cout<<"3st\t15,00,000"<<endl;
					cout<<"4st\t15,04,000"<<endl;
					cout<<"----------------------------------------------------------"<<endl;
					cout<<"\t\t\t\tCommercial"<<endl;
					cout<<"Availability according to budget"<<endl;
					cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
					cout<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
					cout<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
					cout<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
					cout<<"4.MBD, Jalandhar\t\t19,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"Availability according to Area"<<endl;
					cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
					cout<<"1.Carnival, Jalandhar\t\t42,000"<<endl;
					cout<<"2.Curo, Jalandhar City\t\t44,000"<<endl;
					cout<<"3.Prime cinemas, Phagwara\t42,000"<<endl;
					cout<<"4.MBD, Jalandhar\t\t49,000"<<endl;
					cout<<"----------------------------"<<endl;
					cout<<"Availability according to Floor"<<endl;
					cout<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
					cout<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
					cout<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
					cout<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
					cout<<"4.MBD, Jalandhar\t\t19,000"<<endl;
					cout<<"----------------------------"<<endl;
					break;
				}
			}
			default:
			{
				cout<<"Enter a valid selection"<<endl;
			}
		}
	}
	out.close();
}
void est :: file()
					{
					ofstream out;
					out.open("info.txt");
					out<<"\t\t\t\tResidential-"<<endl;
					out<<"----------------------------"<<endl;
					out<<"Available Plot-"<<endl;
					out<<"1.1500Sq.feet\n2.1700Sq.feet\n3.2000Sq.feet\n4.2500Sq.feet"<<endl;
					out<<"Available Area's\tPrice"<<endl;
					out<<"1.Phagwara\t\t1,00,000\n2.Ludhiana\t\t1,50,000\n3.Jalandhar City\t1,15,000\n4.Law Gate\t\t1,00,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"1.Chandigarh\t\t2,00,000\n2.Ludhiana\t\t2,20,000\n3.Jalandhar City\t2,10,000\n4.Law Gate\t\t2,13,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"1.Delhi\t\t\t3,00,000\n2.Ludhiana\t\t2,90,000\n3.Jalandhar City\t2,98,000\n4.Law Gate\t\t2,89,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"1.Phagwara\t\t3,20,000\n2.Ludhiana\t\t3,30,000\n3.Delhi\t\t\t3,70,000\n4.Chandigarh\t\t3,50,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"Available Individual Houses"<<endl;
					out<<"1.Jalandhar City\n2.Phagwara\n3.Jalandhar Cantt\n4.Ludhiana"<<endl;
					out<<"1.Jalandhar City"<<endl;
					out<<"Sunildas Villa's"<<endl;
					out<<"price=47,00,000"<<endl;
					out<<"2.Phagwara"<<endl;
					out<<"Musheer Houses"<<endl;
					out<<"price=48,00,000"<<endl;
					out<<"3.Jalandhar Cantt"<<endl;
					out<<"Sri Villa's"<<endl;
					out<<"price=49,00,000"<<endl;
					out<<"4.Ludhiana"<<endl;
					out<<"Marvel Villa's"<<endl;
					out<<"price=50,90,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"Available Apartments\n1.Jalandhar"<<endl;
					out<<"Sundance Apartments"<<endl;
					out<<"Floor\tPrice"<<endl;
					out<<"1st\t12,00,000"<<endl;
					out<<"2st\t12,04,000"<<endl;
					out<<"3st\t12,40,000"<<endl;
					out<<"4st\t12,50,000"<<endl;
					out<<"2.Phagwara"<<endl;
					out<<"Availability"<<endl;
					out<<"Sun Apartment"<<endl;
					out<<"Floor\tPrice"<<endl;
					out<<"1st\t12,00,000"<<endl;
					out<<"2st\t12,00,000"<<endl;
					out<<"3st\t12,00,000"<<endl;
					out<<"4st\t12,00,000"<<endl;
					out<<"3.Chandigarh"<<endl;
					out<<"Availability"<<endl;
					out<<"Sundar Apartment"<<endl;
					out<<"Floor\tPrice"<<endl;
					out<<"1st\t13,00,000"<<endl;
					out<<"2st\t14,00,000"<<endl;
					out<<"3st\t11,00,000"<<endl;
					out<<"4st\t15,00,000"<<endl;
					out<<"4.Ludhiana"<<endl;
					out<<"Availability"<<endl;
					out<<"West Apartment"<<endl;
					out<<"Floor\tPrice"<<endl;
					out<<"1st\t13,00,000"<<endl;
					out<<"2st\t14,90,000"<<endl;
					out<<"3st\t15,00,000"<<endl;
					out<<"4st\t15,04,000"<<endl;
					out<<"----------------------------------------------------------"<<endl;
					out<<"\t\t\t\tCommercial"<<endl;
					out<<"Availability according to budget"<<endl;
					out<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
					out<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
					out<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
					out<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
					out<<"4.MBD, Jalandhar\t\t19,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"Availability according to Area"<<endl;
					out<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
					out<<"1.Carnival, Jalandhar\t\t42,000"<<endl;
					out<<"2.Curo, Jalandhar City\t\t44,000"<<endl;
					out<<"3.Prime cinemas, Phagwara\t42,000"<<endl;
					out<<"4.MBD, Jalandhar\t\t49,000"<<endl;
					out<<"----------------------------"<<endl;
					out<<"Availability according to Floor"<<endl;
					out<<"Mall Name and place\t\tRent per month(in rupees)"<<endl;
					out<<"1.Carnival, Jalandhar\t\t15,000"<<endl;
					out<<"2.Curo, Jalandhar City\t\t17,000"<<endl;
					out<<"3.Prime cinemas, Phagwara\t16,000"<<endl;
					out<<"4.MBD, Jalandhar\t\t19,000"<<endl;
					out<<"----------------------------"<<endl;
					cout<<"Information saved in a text file"<<endl;
					}
int main()
{
	est r;
	r.data();
	ofstream out;
	out.open("info.txt");
	r.file();
	out.close();
	getch();
}

