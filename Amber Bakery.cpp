#include<iostream>
#include<fstream>
#include<sstream>
#include<conio.h> 
#include<iomanip> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void buy_products();
void mainmenu();
void pass();


int main(int argc, char** argv) {
	mainmenu();
return 0;	
}
// Bakery Logo
void mainmenu()
{

cout << "\n\n\n\n" <<endl;
cout << "                                          A_M_B_E_R__B_A_K_E_R_Y                                                  " <<endl;
cout << " ================================================================================================================ " <<endl;
cout << "       AMBER BAKERY                                                                                AMBER BAKERY   " <<endl;
cout << "     ===============  ===========                                                  ============  ===============  " <<endl;
cout << "     ===============  ==      =  =                                                =  =       ==  ===============  " <<endl;
cout << "     ===============  =========   =                                              =   ==========  ===============  " <<endl;
cout << "     ===============  =            =                                            =             =  ===============  " <<endl;
cout << "     ===============  ===============                                          ================  ===============  " <<endl;
cout << "       ==                       ==                                                ==                       ==    " <<endl;
cout << "                                                                                                                  " <<endl;
cout << "================================================================================================================= " <<endl;
cout << "                                                                                                            \n\n  " <<endl;
	
	
	cout << "                                                 Loading...."<<endl;
		cout << "   version 1.1"<<endl;
	int a;
	for(a=0; a<100000000; a++)
	{
		cout << "";
		
	}
	system("cls");

main_menu:
	system("cls");	

		cout << "\n\n\n\n" <<endl;

	cout << " ================================ " <<endl;
	cout << "              WELCOME             " <<endl;
	cout << " AMBER BAKERY INFOMATION SYSTEM   " <<endl;	
	cout << "==================================" <<endl;

		cout << "\n\n"<<endl;
		cout << "  [1] Customer Service    "<<endl;
		cout << "  [2] Manager Service     "<<endl;
		cout << "  [3] Compay Details      "<<endl;
		cout << "  [4] Exit                "<<endl;
		
		
		char button1;
		cout << "Press Your Choice : ";
		cin >> button1;
		
		switch(button1)
		{
			//customer-----------------------------------------------------------------------------------------------------------------------------------
			case'1':

				customer_service:	
				system("cls");
					cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
			   	 	cout <<setw(70)<< "Customer Service"<< endl;
			 		cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
					cout << "            1 .Price List "<<endl;
					cout << "            2 .Buy Products or package "<<endl;
					cout << "            3 .Help  "<<endl;
					cout << "            4 .Goto back  "<<endl;
					cout << "            5 .Exit  \n\n"<<endl;
					
					char button2;
					cout << " ~~Select Option~~  ";
					cin>> button2;
					system("cls");
				
				switch(button2)//customer service
				{
					case'1': //price list
					 goto price_list;
						break;
					
					case'2'://buy Products or package
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  						cout <<setw(70)<< "Buy Products "<<endl;
 						cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
						cout<<"====  QUICK  HELPER ====\n"<<endl;
						cout<<" * First Enter Your Name"<<endl;									
						cout<<" * Secondly, Enter The Number of Product or Service You Want\n "<<endl;     
						cout<<" * thirdly, Enter The Quantity you want\n "<<endl;   
						cout<<" * IF You Stop The Ur Transact, Press 0\n"<<endl;                
      
						system("pause");
						system("cls");
						
						break;
						
					case'3':// customer help
					
						system("cls");
						cout<<"\n\n==== HELP Customer ====\n"<<endl;
						cout<<"  1 How to get the price list\n "<<endl;
						cout<<"\t* select price list and you can see price list\n\n"<<endl;
						cout<<"  2 How to buy product or get Service \n "<<endl;								
						cout<<"\t*Fist Enter Your Name"<<endl;									
						cout<<"\t* Secondly, Enter The Number of product or Service You Want\n "<<endl;       
						cout<<"\t* thirdly, Enter The Quantity you want\n "<<endl;
						cout<<"\t*Enter 0 after the end of the purchase\n"<<endl;
						system("pause");
						system("cls");
						goto customer_service;
						
						break;
					
					case'4'://goto back
						goto main_menu;
						
					case'5'://exit
						exit (0);
												
					default :
						system("cls");
						goto customer_service;
				}
				break;

			//manager login-------------------------------------------------------------------------------------------------------------------------------------	
			case'2':
				system("cls");
			login:{
				
				
				//user name and password
				cout<<"please  enter your user name And Password to continue..."<<"\n"<<"\n";
				cout<<setw(25)<<"Username :";
				string user;
				cin>>user;
			
						cout<<"\n";
						string pass ="";
						char ch;
						cout<<setw(26)<< "password : ";
						ch = _getch();
						while(ch !=13)
						{
							pass.push_back(ch);
							cout << '*';
							ch = _getch();
						}
						
							if (pass=="anupa"&&user=="anupa")
							{ 
							goto manager_service;
							
							}else{
								cout<< "invalid User Name or Password";
								system("cls");
								cout<< "\n "<<"            **invalid User Name or Password. Try again**"<<endl;
								goto login;
							}
							
							
							
		   			}
		   			break;
		   	//---------------------------------------------------------------------------------------------------------------------------------------
		   	
		   	
		   	
		   	
			   //company details		
			case'3':
				system("cls");
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  						cout <<setw(70)<< "Company Details"<<endl;
 						cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
						cout<<"\tCompany name    : Amber Bakery\n"<<endl;
						cout<<"\tOwner           : Mr.Anupa Liyanage\n"<<endl;
						cout<<"\tEmail           : amber.bakery789@gmail.com\n"<<endl;
						cout<<"\tContact Number  : 011-5786772\n"<<endl;
						cout<<"\tFax Number      : 011-5786873\n"<<endl;
						cout<<"\tAdress          : Amber bakery, \n\t\t\t  Colombo Road, \n\t\t\t  Gampaha.\n\n"<<endl;


				
				system("pause");
				system("cls");
				goto main_menu;
				break;



			case'4':
				system("cls");
					exit(0);
			default :
				system("cls");
				goto main_menu;
				break;
		}
		
		
manager_service:
system("cls");
								//manager inter face
								cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
						   	 	cout <<setw(70)<< "Manager Service"<< endl;
						 		cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
								cout << "            1 .Update Products "<<endl;
								cout << "            2 .Employee Salary "<<endl;
								cout << "            3 .Add Employee "<<endl;
								cout << "            4 .Sales Details "<<endl;
								cout << "            5 .Help  "<<endl;
								cout << "            6 .Goto back  "<<endl;
								cout << "            7 .Exit  \n\n"<<endl;
								
								char button3;
								cout << " ~~Select Option~~  ";
								cin>> button3;
								
								switch(button3)
								{
								case'1': //update Products
								system("cls");
								goto update_product;
								break;
						
								case'2'://employee salary
								goto salary;
								break;
								
								case'3'://employee 
								goto employee;
								break;
								
								case'4'://Sales Details
								 goto sales_details;
								break;
								
								case'5'://help
								
														system("cls");
														cout<<"\n\n==== HELP Manager ====\n"<<endl;
														cout<<"  1 How to Update products/package List\n "<<endl;
														cout<<"\t* Goto Update products/package "<<endl;
														cout<<"\t* Fist Enter Amount of products or package Update"<<endl;
														cout<<"\t* Enter New products or package "<<endl;
														cout<<"\t* Enter product or package Price\n\n"<<endl;
														
														cout<<"  2 How Check Employee Salary \n "<<endl;								
														cout<<"\t*Goto Employee Salary\n\n"<<endl;									
											
														
														cout<<"  1 How to Update product or Package List\n "<<endl;
														cout<<"\t* Goto Update product or package"<<endl;
														cout<<"\t* Fist Enter Amount of Employee"<<endl;
														cout<<"\t* Secondly, Enter Your Name "<<endl;
														cout<<"\t* Thirdly, Other Details\n\n"<<endl;
														
														
														system("pause");
														system("cls");
														goto manager_service;
								
														break;
								
								case'6'://goto back
								goto main_menu;
								break;
						
								case'7'://exit
								system("cls");
								exit(0);
								
								default:
									goto manager_service;
								
								}



employee:
	system("cls");
{
	
		struct employee
	{
		string name;
		string emp_no;
		double basic_salary;
		int ot_hour;
		int leave_day;
		double ingriment;
		double  net_salary1 ;
		double net_salary2;
		double epfemp;
		double epfcom ;
		double epf;
		double gross_salary2;
		double bank;
		double ot_rate;
	};
	
		cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
   	 	cout <<setw(70)<< "Details of Employees"<< endl;
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
 	
	int p,o;
	
	cout <<setw(40)<< "First Enter The Number OF Employee Needed    : "; 
	cin >> o ;
	
	
	employee emp[o];
	
	for  (p=0; p<o ;p++){

	cout << "\n   ~~~ Enter details of " << p+1 << " Employee ~~~"<<endl;
	
	
	cout <<setw(30)<< "Enter Your Name    : "; 
	cin >> emp[p].name ;
	
	cout <<setw(30) << "Input Employee No  : "; 
	cin >> emp[p].emp_no;                                
	
	cout <<setw(30) << "input Basic Salari : "; 
	cin >> emp[p].basic_salary ;
	
	
	cout <<setw(30) << "input OT Hours     : ";
	cin >> emp[p].ot_hour ;	
	
	cout <<setw(30)<< "input Leave days   : ";
	cin >> emp[p].leave_day ;	
	
	cout <<setw(30)<< "input Ingriment    : ";
	cin >> emp[p].ingriment ; 
	cout <<setw(60) << "*Data Entered to Data Base \n" << endl;


	
	emp[p].ot_rate = emp[p].basic_salary*0.01;
	emp[p].epf = emp[p].basic_salary * 3/100;
	emp[p].epfcom = emp[p].basic_salary * 12/100;
	emp[p].epfemp = emp[p].basic_salary * 8/100;
	emp[p].net_salary1= emp[p].basic_salary+ (emp[p].ot_rate *emp[p].ot_hour);
	
	

	emp[p].net_salary2 = emp[p].net_salary1 -( emp[p].basic_salary / 30 ) *emp[p].leave_day;
		
	emp[p].gross_salary2 = emp[p].net_salary2 + emp[p].ingriment - emp[p].epfemp;
	emp[p].bank = emp[p].epf + emp[p].epfcom + emp[p].epfemp;
	
	
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("employee.txt");
		mf << content;

		
	
		mf<<setw(10)<< emp[p].name <<setw(13)<<emp[p].emp_no  <<setw(20)<<emp[p].basic_salary <<setw(10)<< emp[p].ot_rate<<setw(10)<<emp[p].ot_hour<<setw(17)<<emp[p].net_salary2 <<setw(12)<<emp[p].bank<<setw(15)<<emp[p].gross_salary2<<endl;
		mf.close();
 
	}
  system("pause");
	system("cls");
	goto manager_service;
}

salary:
{
 system("cls");
	

  	cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout <<setw(70)<< "Employees Salary" << endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<<endl;
 
 
 cout <<setw(8)<< "Name" <<setw(20)<<"Employee Id"  <<setw(18)<<"Basic Salari"<<setw(10)<<"OT Rate"<<setw(11)<<"OT hours"<<setw(15)<<"Net salary"<<setw(9)<<"Bank"<<setw(17)<<"Gross Salry"<<"\n"<<endl;
 
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line))

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";



		
  system("pause");
	system("cls");
	goto manager_service;
}





//update products		
	update_product:
	{
						struct product
									{
										string product;
										double product_price;
				
										};
				
					cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
			   	 	cout <<setw(70)<< "Add Details of product"<< endl;
			 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
			 	string  product_name;
				int j, m, product_price;

				cout <<setw(40)<< "First Enter The Number OF products Needed   : "; 
				cin >> m ;
		
					
				
				
				for  (j=0; j<m ;j++){
			
				cout << "\n   ~~~ Enter details of " << j+1 << " Product or Package~~~"<<endl;
				
				
				cout <<setw(30)<< "Enter product or Package name    : "; 
				cin >> product_name ;
				
				cout <<setw(30) << "Input Price  : Rs"; 
				cin >> product_price;                                
			
				
				ifstream file("product or Package name.txt");
				string content;
				string line;
			
				while(getline(file,line)){
					content+=line +"\n";
					
				}
				file.close();
				
			
					ofstream mf;
					mf.open("productname.txt");
					mf << content;
			
					
				
					mf<<setw(15)<<product_name <<setw(13)<<"Rs"<<product_price <<".00"<<endl;
					mf.close();
			}
					goto manager_service;
					
				//update products End
			}
//see products list

price_list:
	{
		cout<<"\n\n"<<endl; 
 		 cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
  		  cout <<setw(70)<< "Details of products"<<endl;
 		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;

 		cout <<setw(8)<< "Name" <<setw(25)<<"Price (Rs)"  <<"\n"<<endl;
 
 
	
			ifstream file("Productname.txt");
			string content;
			string line;
		
			while(getline(file,line))
			
		
				 cout<<line<<"\n";
				file.close();
			 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
			

     			system("pause");
     			
				system("cls");
				goto customer_service;
	}


sales_details: //Sales Details
{
	system("cls");
	cout<<"\n"<<endl; 
  cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
    cout <<setw(70)<< "Details of Sales"<<endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
 

 
 

 cout <<setw(13)<< "Name" <<setw(25)<<"Product name or package"  <<setw(15)<<"Price"<<setw(12)<<"Amoun"<<setw(15)<<"Net Total"<<setw(10)<<"Total"<<"\n"<<endl;
 
	
 
	
	ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line))
	

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
	 
	 system("pause");
	 system("cls");
	 goto manager_service;
}

	//see product list end
	exit(0);                                                                                      
}          

void buy_product() //buy product or Get Package
{


		cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  		cout <<setw(70)<< "Buy Products or Get package"<<endl;
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;

		
  		cout <<setw(20)<< "Details of Product\n"<<endl;
  		cout <<"   NO:"<<setw(15)<<"Name"<<setw(14)<<"Price"<<endl;
 		cout <<setw(2)<<"   1   "<<setw(30)<<"Bread       		Rs   170.00"<<endl;
 		cout <<setw(2)<<"   2   "<<setw(30)<<"Buns       		Rs    50.00"<<endl;
 		cout <<setw(2)<<"   3   "<<setw(30)<<"Cakes            	Rs  2000.00"<<endl;
 		cout <<setw(2)<<"   4   "<<setw(30)<<"Cookies       	Rs    50.00"<<endl;
 		cout <<setw(2)<<"   5   "<<setw(30)<<"Snack Cakes       Rs   300.00"<<endl;
 		cout <<setw(2)<<"   6   "<<setw(30)<<"Pizza       		Rs  1500.00"<<endl;
 		cout <<setw(2)<<"   7   "<<setw(30)<<"Muffin            Rs   100.00"<<endl;
 		cout <<setw(2)<<"   8   "<<setw(30)<<"Donuts            Rs   170.00"<<endl;
 		cout <<setw(2)<<"   9   "<<setw(30)<<"Cup Cakes         Rs   100.00"<<endl;
 		cout <<setw(2)<<"  10   "<<setw(30)<<"Cheese Cake    	Rs   500.00"<<endl;
 		cout <<setw(2)<<"  11   "<<setw(30)<<"Croissant         Rs   200.00"<<endl;
 		cout <<setw(2)<<"  12   "<<setw(30)<<"Egg Roll     		Rs   100.00"<<endl;
 		cout <<setw(2)<<"  13   "<<setw(30)<<"Sandwiches       	Rs   250.00"<<endl;

double total=0;

struct buy_product
	{
		string name;
		string product;
		int amount;
		double price;
		double ntotal;
	};

int i,n=100;
buy_product service[n];
string name;
int price, amount, ntotal;
string name1;
	cout <<"\n"<<setw(30)<< "Enter Your Name    : "; 
	cin >> name1 ;
	cout<<"\t\t\t\t ~~~Enter 0 after the end of the purchase~~~~"<<endl;
for  (i=0; i<n ;i++){

	
	cout <<setw(30) << "Input Product or package name  : "; 
	cin >> name; 
	
	if(name=="0") {goto total_salary;	}                               


	
	cout <<setw(30) << "input Amount : "; 
	cin >> amount ;
	cout<<"\n"<<endl;
	
	{
		if(name=="1"){
			price =170;
		}else if(name=="2"){
			price =50;
		}else if(name=="3"){
			price =2000;
		}else if(name=="4"){
			price =100;
		}else if(name=="5"){
			price =300;
		}else if(name=="6"){
			price =1500;
		}else if(name=="7"){
			price =100;
		}else if(name=="8"){
			price =170;
		}else if(name=="9"){
			price =100;
		}else if(name=="10"){
			price =500;
		}else if(name=="11"){
			price =200;
		}else if(name=="12"){
			price =100;
		}else if(name=="13"){
			price =250;
		}
	}
	{
		if(name=="1"){
			name="Bready";
		}else if(name=="2"){
			name="Buns";
		}else if(name=="3"){
			name="Cakes";
		}else if(name=="4"){
			name="Cookies";
		}else if(name=="5"){
			name="Snack Cakes";
		}else if(name=="6"){
			name="Pizza";
		}else if(service[i].name=="7"){
			name="Muffine";
		}else if(name=="8"){
			name="Donutst";
		}else if(name=="9"){
			name="Cup Cakes";
		}else if(name=="10"){
			name="Cheese Cake";
		}else if(name=="11"){
			name="Croissant";
		}else if(name=="12"){
			name="Egg Roll";
		}else if(name=="13"){
			name="Sandwiches";
		
	}
	ntotal=price*amount;
	total=total+ntotal;
	
	


	//start file and save sale detailsa
	ifstream file("customerdata.txt"); 
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		
		mf<<setw(15)<<name1;

		mf<<setw(25)<<name<<setw(9)<<"Rs"<<setw(3)<<price<<".00"<<setw(8)<<"x"<<amount<<setw(10)<<"Rs"<<setw(4)<<ntotal<<".00"<<endl;
		mf.close();
		//end file and save sale details
		
		//start create bill
		ifstream file2("bill.txt");
	string content2;
	string line2;

	while(getline(file2,line2)){
		content2+=line2 +"\n";
		
	}
	file.close();
		ofstream mf1;
		mf1.open("bill.txt");
		mf1 << content2;	
		mf1<<setw(19)<<name<<setw(5)<<price<<".00"<<setw(5)<<"x"<<amount<<setw(10)<<"Rs"<<setw(4)<<ntotal<<".00"<<endl;
		mf1.close();
		
		
		
		
}

//total salary print text file
total_salary:
{	
ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";	
	}
	file.close();

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		mf<<setw(85)<<"___________Rs"<<setw(4)<<total<<".00\n"<<endl;
		mf.close();
		//end total salary print text file
		
}



//print bill
{
	system("cls");
cout<<"\n______________________________________________________________________________-\n "<<endl;	
cout<<"      ==       ==       ==  == ==  ==    == == ==  == == ==                         "<<endl;
cout<<"    ==  ==     == == == ==  ==       ==  ==                ==                       "<<endl;
cout<<"   ========    ==  ==   ==  == ==  ==    == == ==  == == ==                         "<<endl;
cout<<"  ==      ==   ==       ==  ==       ==  ==        == ==                            "<<endl;
cout<<" ==        ==  ==       ==  == ==  ==    == == ==  ==    ==   BAKERY ====           "<<endl;
cout<<"_________________________________________________________________________________   "<<endl;

cout<<"No:30,Anamadu Road, Pallama\n"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<" Customer Name: "<<name1<<"\n"<<endl;

	ifstream file3("bill.txt");
	string content3;
	string line3;

	while(getline(file3,line3))
	

		 cout<<line3<<"\n";
		file3.close();

cout<<"-----------------------------------------------"<<endl;
cout<<"\t\t     Total "<<setw(17)<<"Rs "<<total<<".00"<< endl;
cout<<"-----------------------------------------------"<<endl;

cout<<"___________________________________________\n"<<endl;

		///open bill end
		

		//clear bill text file data
		std::ofstream ofs;
		ofs.open("bill.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
		
		system("pause");
		system("cls");

	}
	
	
	cout<<"\n\n\n\n\n\n\t\t\t\tThanks for getting our Products"<<endl;
	
	
		int a;
	for(a=0; a<100000000; a++)
	{
		
		cout << "";
		
	}
	system("cls");
	mainmenu();
	exit(0);


} ;

}



