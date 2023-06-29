#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

double calprice (int,int,int);
int decrementticket (int&,int&,int&,int&,int&,int&,int&);
void receipt (int,int,double,double,int&,int,double,double);
char buyername[100];
char buyeremail[100];

int main()
{
	double forcharity;
	int ticketsold=0;
	double totalcollection=0;
	double discount;
	int distancepicked;
	double processingfee;
	int response=00;
	char buyticket[5];
	int buyercontactnumber;
	int quantityticket;
	int icnumber;
	int dateofbirth;
	char gender[10];
	char state[50];
	char address[200];
	char sizetshirt[5];
	char emergencyname[100];
	int emergencycontact;
	int remainingticketxplorun=3000;
	int discountxplorun=0;
	int remainingticketlovepj=3000;
	int discountlovepj=0;
	int remainingticketlightup=3000;
	int discountlightup=0;
	int remainingticketkipmall=3000;
	int discountkipmall=0;
	int remainingticketwarrior=3000;
	int discountwarrior=0;
	double totalprice;
	double afterdiscount;
	int counter1=0;
	int highest;	
	int lowest;		
	char maximum[50];
	char minimum[50];
	
	while ((response == 00)||(strcmp(buyticket,"no")==0))
	{
		
		if ((response == 00)||(strcmp(buyticket,"no")==0))
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "              JustRunLah!!! Event Listing                   " << endl << endl;
			
			cout << "[1] - Xplorun Langkawi 2019                                 " << endl;
			cout << "[2] - I Love Putrajaya Run 2019                             " << endl;
			cout << "[3] - Light Up The Night 2019                               " << endl;
			cout << "[4] - Kipmall 5KM Colour Fun Run 2019                       " << endl;
			cout << "[5] - Warrior Dash Charity Fun Run 2019                     " << endl << endl;
			
			cout << "**30% of our total event collection will be donate  to :    " << endl << endl;
			
			cout << "            Pusat Jagaan Cahaya Kasih Bestrai               " << endl;
			cout << "     Lot 40150, 5930, Jalan Jati, Kampung Melayu Subang,    " << endl;
			cout << "             40150, Shah Alam, Selangor                     " << endl << endl;
			
			cout << "Enter the number for the details of event or '0' to see our overall report : ";
			cin >> response;
			system ("cls");
		}
		
		if (response == 1)
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "                   Xplorun Langkawi 2019                    " << endl << endl;
			
			cout << "State            : Kedah                                    " << endl;
			cout << "Address          : Laman Padi Pantai Chenang Langkawi,      " << endl;
			cout << "                   Jalan Pantai Cenang, Pantai Cenang,      " << endl;
			cout << "                   07000, Langkawi, Kedah                   " << endl;
			cout << "Event Date       : 10 March 2019, 6:30AM                    " << endl << endl;
			
			cout << "Event Entitlement                                           " << endl;
			cout << " - T-Shirt (Micro Fibre)                                    " << endl;
			cout << " - Medal                                                    " << endl;
			cout << " - Runner's Bib                                             " << endl;
			cout << " - Drawstring Bag                                           " << endl;
			cout << " - Certificate (Will receive after the event)               " << endl;
			cout << " - Light Breakfast                                          " << endl;
			cout << " - Milo drink                                               " << endl << endl;
			
			cout << "Ticket Information                                          " << endl;
			cout << "Sale Ended       : 1 March 2019, 11:59PM                    " << endl;
			cout << "Remaining Ticket : " << remainingticketxplorun <<                endl;
			cout << " _____________________________________                      " << endl;
			cout << "|    10KM     | RM100.00 per pax      |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     5KM     | RM 50.00 per pax      |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     3KM     | RM 30.00 per pax      |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "**For the first one thousand tickets will enjoy 20% off     " << endl;
			cout << "**Every ticket will be charge with online processing fee    " << endl << endl;
			
			cout << "Enter 'buy' to buy ticket or 'no' to go back to homepage : ";
			cin >> ws;
			cin.getline(buyticket,5);
			system ("cls");
		}
		else if (response == 2)
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "                  I Love Putrajaya Run 2019                 " << endl << endl;
			
			cout << "State            : Putrajaya                                " << endl;
			cout << "Address          : 1, Jalan P5/5, Presint 5, 62200          " << endl;
			cout << "                   Putrajaya, Wilayah Persekutuan           " << endl;
			cout << "                   Putrajaya, Malaysia                      " << endl;
			cout << "Event Date       : 14 April 2019, 6:30AM                    " << endl << endl;
			
			cout << "Event Entitlement                                           " << endl;
			cout << " - T-Shirt (Micro Fibre)                                    " << endl;
			cout << " - Medal                                                    " << endl;
			cout << " - Runner's Bib                                             " << endl;
			cout << " - Drawstring Bag                                           " << endl;
			cout << " - Certificate (Will receive after the event)               " << endl;
			cout << " - Light Breakfast                                          " << endl;
			cout << " - Milo drink                                               " << endl << endl;
			
			cout << "Ticket Information                                          " << endl;
			cout << "Sale Ended       : 25 March 2019, 11:59PM                   " << endl;
			cout << "Remaining Ticket : " << remainingticketlovepj <<                 endl;
			cout << " _____________________________________                      " << endl;
			cout << "|    10KM     | RM60.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     5KM     | RM50.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     3KM     | RM45.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "**For the first one thousand tickets will enjoy 20% off     " << endl;
			cout << "**Every ticket will be charge with online processing fee    " << endl << endl;
			
			cout << "Enter 'buy' to buy ticket or 'no' to go back to homepage : ";
			cin >> ws;
			cin.getline(buyticket,5);
			system ("cls");
		}
		else if (response == 3)
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "                 Light Up The Night 2019                    " << endl << endl;
			
			cout << "State            : Putrajaya                                " << endl;
			cout << "Address          : IOI Resort City, IOI Resort, 62502       " << endl;
			cout << "                   Putrajaya, Wilayah Persekutuan Putrajaya " << endl;
			cout << "Event Date       : 1 December 2019, 10:00PM                 " << endl << endl;
			
			cout << "Event Entitlement                                           " << endl;
			cout << " - T-Shirt (Micro Fibre)                                    " << endl;
			cout << " - Medal                                                    " << endl;
			cout << " - Runner's Bib                                             " << endl;
			cout << " - Drawstring Bag                                           " << endl;
			cout << " - Certificate (Will receive after the event)               " << endl;
			cout << " - Light Breakfast                                          " << endl;
			cout << " - Milo drink                                               " << endl << endl;
			
			cout << "Ticket Information                                          " << endl;
			cout << "Sale Ended       : 1 November 2019, 11:59PM                 " << endl;
			cout << "Remaining Ticket : " << remainingticketlightup <<                endl;
			cout << " _____________________________________                      " << endl;
			cout << "|    10KM     | RM80.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     5KM     | RM65.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     3KM     | RM50.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "**For the first one thousand tickets will enjoy 20% off     " << endl;
			cout << "**Every ticket will be charge with online processing fee    " << endl << endl;
			
			cout << "Enter 'buy' to buy ticket or 'no' to go back to homepage : ";
			cin >> ws;
			cin.getline(buyticket,5); 
			system ("cls");
		}
		else if (response == 4)
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "               Kipmall 5KM Colour Fun Run 2019              " << endl << endl;
			
			cout << "State            : Selangor                                 " << endl;
			cout << "Address          : Kipmall Bangi, Jalan Seksyen 1/16,       " << endl;
			cout << "                   Seksyen 1, 43650 Bandar Baru Bangi,      " << endl;
			cout << "                   Selangor                                 " << endl;
			cout << "Event Date       : 10 December 2019, 6:30AM                 " << endl << endl;
			
			cout << "Event Entitlement                                           " << endl;
			cout << " - T-Shirt (Micro Fibre)                                    " << endl;
			cout << " - Medal                                                    " << endl;
			cout << " - Runner's Bib                                             " << endl;
			cout << " - Drawstring Bag                                           " << endl;
			cout << " - Certificate (Will receive after the event)               " << endl;
			cout << " - Light Breakfast                                          " << endl;
			cout << " - Milo drink                                               " << endl << endl;
			
			cout << "Ticket Information                                          " << endl;
			cout << "Sale Ended       : 10 November 2019, 11:59PM                " << endl;
			cout << "Remaining Ticket : " << remainingticketkipmall <<                endl;
			cout << " _____________________________________                      " << endl;
			cout << "|     5KM     | RM60.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "**For the first one thousand tickets will enjoy 20% off     " << endl;
			cout << "**Every ticket will be charge with online processing fee    " << endl << endl;
			
			cout << "Enter 'buy' to buy ticket or 'no' to go back to homepage : ";
			cin >> ws;
			cin.getline(buyticket,5); 
			system ("cls");
		}
		else if (response == 5)
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "               Warrior Dash Charity Fun Run 2019            " << endl << endl;
			
			cout << "State            : Putrajaya                                " << endl;
			cout << "Address          : Millennium Monument, Lebuh Ehsan,        " << endl;
			cout << "                   Presint 2, 62100 Putrajaya,              " << endl;
			cout << "                   Wilayah Persekutuan Putrajaya            " << endl;
			cout << "Event Date       : 20 December 2019, 6:30AM                 " << endl << endl;
			
			cout << "Event Entitlement                                           " << endl;
			cout << " - T-Shirt (Micro Fibre)                                    " << endl;
			cout << " - Medal                                                    " << endl;
			cout << " - Runner's Bib                                             " << endl;
			cout << " - Drawstring Bag                                           " << endl;
			cout << " - Certificate (Will receive after the event)               " << endl;
			cout << " - Light Breakfast                                          " << endl;
			cout << " - Milo drink                                               " << endl << endl;
			
			cout << "Ticket Information                                          " << endl;
			cout << "Sale Ended       : 20 November 2019, 11:59PM                " << endl;
			cout << "Remaining Ticket : " << remainingticketwarrior <<                endl;
			cout << " _____________________________________                      " << endl;
			cout << "|    10KM     | RM80.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     5KM     | RM65.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "|     3KM     | RM50.00 per pax       |                     " << endl;
			cout << "|_____________|_______________________|                     " << endl;
			cout << "**For the first one thousand tickets will enjoy 20% off     " << endl;
			cout << "**Every ticket will be charge with online processing fee    " << endl << endl;
			
			cout << "Enter 'buy' to buy ticket or 'no' to go back to homepage: ";
			cin >> ws;
			cin.getline(buyticket,5); 
			system ("cls");
		}
		else if (response == 0)
		{
			forcharity = afterdiscount * 0.3;
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "                       Overall Report                       " << endl << endl;
			cout << fixed << setprecision(2) << showpoint;
			cout << "Total ticket sold      : " << ticketsold << endl;
			cout << "Total Collection       : RM" << totalcollection << endl;
			cout << "Collection for charity : RM" << forcharity << endl;
			cout << "Most sold ticket       : " << maximum << endl;
			cout << "Lowest ticket sold     : " << minimum << endl << endl;
			
			cout << "Press '00' to go back to homepage : ";
			cin >> response;
			system("cls");
		}
		
		
		if (strcmp(buyticket,"buy")==0)
		{
			cout << "------------------------------------------------------------" << endl;
			cout << "                       JustRunLah!!!                        " << endl;
			cout << "------------------------------------------------------------" << endl << endl;
			
			cout << "Buyer Details                                               " << endl << endl;
			
			cout << "Full Name                : ";
			cin >> ws;
			cin.getline(buyername,100);
			
			cout << "Email                    : ";
			cin >> ws;
			cin.getline(buyeremail,100);
			
			cout << "Contact No.              : ";
			cin >> buyercontactnumber;
			
			cout << "IC Number (without dash) : ";
			cin >> icnumber;
			
			cout << "Date of birth (ddmmyyyy) : ";
			cin >> dateofbirth;
			
			cout << "Gender                   : ";
			cin >> ws;
			cin.getline(gender,10); 
			
			cout << "State                    : ";
			cin >> ws;
			cin.getline(state,50); 
			
			cout << "Address                  : ";
			cin >> ws;
			cin.getline(address,200); 
			
			cout << "T-Shirt Sizing           : ";
			cin >> ws;
			cin.getline(sizetshirt,5); 
			
			cout << "Emergency Contact Name   : ";
			cin >> ws;
			cin.getline(emergencyname,100); 
			
			cout << "Emergency Contact No.    : ";
			cin >> emergencycontact;
			
			if (response== 4)
			{
				distancepicked = 5;
			}
			else
			{
				cout << "Please enter the distance (10km / 5km / 3km) : ";
				cin >> distancepicked;
			}
			
			cout << "Please enter the quantity ticket             : ";
			cin >> quantityticket;
			
			ticketsold = ticketsold + quantityticket;
			processingfee = 2.00 * quantityticket;
			totalprice = calprice (response,distancepicked,quantityticket);
			discount = 0.2 * totalprice;
			
			decrementticket (response,quantityticket,remainingticketxplorun,remainingticketlovepj,remainingticketlightup,remainingticketkipmall,remainingticketwarrior);
			
			if (response == 1 )
			{
				if (remainingticketxplorun >= 2000)
				{
					afterdiscount = totalprice - discount + processingfee;
				}
				else
				{
					discount = 0.00;
					afterdiscount = totalprice + processingfee;
				}
			}
			else if (response == 2)
			{
				if (remainingticketlovepj >= 2000)
				{
					afterdiscount = totalprice - discount + processingfee;
				}
				else
				{
					discount = 0.00;
					afterdiscount = totalprice + processingfee;
				}
			}
			else if (response == 3)
			{
				if (remainingticketlightup >= 2000)
				{
					afterdiscount = totalprice - discount + processingfee;
				}
				else
				{
					discount = 0.00;
					afterdiscount = totalprice + processingfee;
				}
			}
			else if (response == 4)
			{
				if (remainingticketkipmall >= 2000)
				{
					afterdiscount = totalprice - discount + processingfee;
				}
				else
				{
					discount = 0.00;
					afterdiscount = totalprice + processingfee;
				}
			}
			else if (response == 5)
			{
				if (remainingticketwarrior >= 2000)
				{
					afterdiscount = totalprice - discount + processingfee;
				}
				else
				{
					discount = 0.00;
					afterdiscount = totalprice+ processingfee;
				}
			}
			
			totalcollection = totalcollection + afterdiscount;
			
			while (counter1 < 1)
			{
				if (response == 1)
				{
					highest = remainingticketxplorun;
					strcpy(maximum,"Xplorun Langkawi 2019");
					
					lowest = remainingticketxplorun;
					strcpy(minimum,"Xplorun Langkawi 2019");
				}
				else if (response == 2)
				{
					highest = remainingticketlovepj;
					strcpy(maximum,"I Love Putrajaya Run 2019");
					
					lowest = remainingticketlovepj;
					strcpy(minimum,"I love Putrajaya Run 2019");
				}
				else if (response == 3)
				{
					highest = remainingticketlightup;
					strcpy(maximum,"Light Up The Night 2019");
					
					lowest = remainingticketlightup;
					strcpy(minimum,"Light Up The Night 2019");
				}
				else if (response == 4)
				{
					highest = remainingticketkipmall;
					strcpy(maximum,"Kipmall 5KM Colour Fun Run 2019");
					
					lowest = remainingticketkipmall;
					strcpy(minimum,"Kipmall 5KM Colour Fun Run 2019");
				}
				else if (response == 5)
				{
					highest = remainingticketwarrior;
					strcpy(maximum,"Warrior Dash Charity Fun Run 2019");
					
					lowest = remainingticketwarrior;
					strcpy(minimum,"Warrior Dash Charity Fun Run 2019");
				}
				counter1 = counter1 + 1;
			}
			
			if (highest > remainingticketxplorun)
			{
				highest = remainingticketxplorun;
				strcpy(maximum,"Xplorun Langkawi 2019");
			}
			else if (highest > remainingticketlovepj)
			{
				highest = remainingticketlovepj;
				strcpy(maximum,"I Love Putrajaya Run 2019");
			}
			else if (highest > remainingticketlightup)
			{
				highest = remainingticketlightup;
				strcpy(maximum,"Light Up The Night 2019");
			}
			else if (highest > remainingticketkipmall)
			{
				highest = remainingticketkipmall;
				strcpy(maximum,"Kipmall 5KM Colour Fun Run 2019");
			}
			else if (highest > remainingticketwarrior)
			{
				highest = remainingticketwarrior;
				strcpy(maximum,"Warrior Dash Charity Fun Run 2019");
			}
			
			
			if (lowest < remainingticketxplorun)
			{
				lowest = remainingticketxplorun;
				strcpy(minimum,"Xplorun Langkawi 2019");
			}
			else if (lowest < remainingticketlovepj)
			{
				lowest = remainingticketlovepj;
				strcpy(minimum,"I love Putrajaya Run 2019");
			}
			else if (lowest < remainingticketlightup)
			{
				lowest = remainingticketlightup;
				strcpy(minimum,"Light Up The Night 2019");
			}
			else if (lowest < remainingticketkipmall)
			{
				lowest = remainingticketkipmall;
				strcpy(minimum,"Kipmall 5KM Colour Fun Run 2019");
			}
			else if (lowest < remainingticketwarrior)
			{
				lowest = remainingticketwarrior;
				strcpy(minimum,"Warrior Dash Charity Fun Run 2019");
			}
			
			system("cls");
			
			receipt (buyercontactnumber,distancepicked,totalprice,afterdiscount,response,quantityticket,processingfee,discount);
			
			cout << "Enter '00' to go back to homepage : ";
			cin >> response;
			system("cls");
		}
		
	}
	
}

double calprice (int response, int distancepicked, int quantityticket)
{
	if (response == 1)
	{
		if (distancepicked == 10)
		{
			return 100 * quantityticket;
		}
		else if (distancepicked == 5)
		{
			return 50 * quantityticket;
		}
		else if (distancepicked == 3)
		{
			return 30 * quantityticket;
		} 
	}
	else if (response == 2)
	{
		if (distancepicked == 10)
		{
			return 60 * quantityticket;
		}
		else if (distancepicked == 5)
		{
			return 50 * quantityticket;
		}
		else if (distancepicked == 3)
		{
			return 45 * quantityticket;
		}
	}
	else if (response == 3)
	{
		if (distancepicked == 10)
		{
			return 80 * quantityticket;
		}
		else if (distancepicked == 5)
		{
			return 65 * quantityticket;
		}
		else if (distancepicked == 3)
		{
			return 50 * quantityticket;
		}
	}
	else if (response == 4)
	{
		return 60 * quantityticket;
	}
	else if (response == 5)
	{
		if (distancepicked == 10)
		{
			return 80 * quantityticket;
		}
		else if (distancepicked == 5)
		{
			return 65 * quantityticket;
		}
		else if (distancepicked == 3)
		{
			return 50 * quantityticket;
		}
	}
}

int decrementticket (int& response,int& quantityticket,int& remainingticketxplorun,int& remainingticketlovepj,int& remainingticketlightup,int& remainingticketkipmall,int& remainingticketwarrior)
{
	if (response == 1)
	{
		remainingticketxplorun = remainingticketxplorun - quantityticket;
		return remainingticketxplorun;
	}
	else if (response == 2)
	{
		remainingticketlovepj = remainingticketlovepj - quantityticket;
		return remainingticketlovepj;
	}
	else if (response == 3)
	{
		remainingticketlightup = remainingticketlightup - quantityticket;
		return remainingticketlightup;
	}
	else if (response == 4)
	{
		remainingticketkipmall = remainingticketkipmall - quantityticket;
		return remainingticketkipmall;
	}
	else if (response == 5)
	{
		remainingticketwarrior = remainingticketwarrior - quantityticket;
		return remainingticketwarrior;
	}
}

void receipt (int buyercontactnumber,int distancepicked,double totalprice,double afterdiscount,int& response,int quantityticket,double processingfee,double discount)
{
	cout << "------------------------------------------------------------" << endl;
	cout << "                       JustRunLah!!!                        " << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	
	cout << "                       Order Summary                        " << endl << endl;
	
	cout << "Full Name                 : " << buyername << endl;
	cout << "Email                     : " << buyeremail << endl;
	cout << "Contact                   : 0" << buyercontactnumber << endl;
	
	if (response == 1)
	{
		cout << "Event Picked              : Xplorun Langkawi 2019" << endl;
	}
	else if (response == 2)
	{
		cout << "Event Picked              : I Love Putrajaya Run 2019" << endl;
	}
	else if (response == 3)
	{
		cout << "Event Picked              : Light Up The Night 2019" << endl;
	}
	else if (response == 4)
	{
		cout << "Event Picked              : Kipmall 5KM Colour Fun Run 2019" << endl;
	}
	else if (response ==5)
	{
		cout << "Event Picked              : Warrior Dash Charity Fun Run 2019" << endl;
	}
	
	cout << "Quantity Ticket Purchased : " << quantityticket << endl;
	cout << fixed << setprecision(2) << showpoint;
	cout << "Distance                  : " << distancepicked << "KM"<< endl;
	cout << "Total ticket price        : RM" << totalprice << endl;
	cout << "Processing Fee            : RM" << processingfee<< endl; 
	cout << "Discount                  : RM" << discount << endl;
	cout << "Total                     : RM" << afterdiscount << endl;
	cout << endl;
}
