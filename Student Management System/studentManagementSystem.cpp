#include<iostream>

using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];

int total=0;

void enter()

{

		int ch=0;
            
			cout<<"## HOW MANY STUDENTS DO YOU WANT TO ENTER ##??"<<endl;
			
			cin>>ch;
			cout<<"*************ENTERING THE DATA********"<<endl;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\n****ENTER THE DATA OF STUDENT"<<i+1<<endl<<endl;

				cout<<"ENTER NAME ------>";

				cin>>arr1[i];

				cout<<"ENTER ROLL NUMBER -----> ";

				cin>>arr2[i];

				cout<<"ENTER COURSE ----->";

				cin>>arr3[i];

				cout<<"ENTER BRANCH ----->";

				cin>>arr4[i];

				cout<<"ENTER CONTACT NUMBER ------->";

				cin>>arr5[i];

				

			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nENTER THE DATA OF STUDENT"<<i+1<<endl<<endl;

				cout<<"ENTER NAME ------>";

				cin>>arr1[i];

				cout<<"ENTER ROLL NUMBER -----> ";

				cin>>arr2[i];

				cout<<"ENTER COURSE ----->";

				cin>>arr3[i];

				cout<<"ENTER BRANCH ----->";

				cin>>arr4[i];

				cout<<"ENTER CONTACT NUMBER ------->";

				cin>>arr5[i];

			}

			total=ch+total;

			}

	

}

void show()

{

	if(total==0)

	{

		cout<<"**********SORRY!! LIST IS EMPTY !!!!**********"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\n****DATA OF STUDENT "<<i+1<<endl<<endl;

	    		cout<<"NAME --->"<<arr1[i]<<endl;

	    		cout<<"ROLL NUMBER ---->"<<arr2[i]<<endl;

	    		cout<<"COURSE ----->"<<arr3[i]<<endl;

	    		cout<<"BRANCH ----->"<<arr4[i]<<endl;

	    		cout<<"CONTACT ------>"<<arr5[i]<<endl;

	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"********* SORRY!! LIST IS EMPTY *******"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the roll no of student"<<endl;

				cin>>rollno;
				cout<<"********DETAILS OF SEARCHED STUDENT ********"<<endl;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"NAME ---->"<<arr1[i]<<endl;

	    	        	cout<<"ROLL NUMBER ---->"<<arr2[i]<<endl;

	    		        cout<<"BRANCH ----->"<<arr3[i]<<endl;

	    		        cout<<"BRANCH ----->"<<arr4[i]<<endl;

	    	        	cout<<"CONTACT ------>"<<arr5[i]<<endl;

					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"*******SORRY!!! LIST IS EMPTY*********"<<endl;

	}

	else{

		string rollno;

				cout<<"****ENTER THE ROLL NUMBER OF THE STUDENT YOU WANT OT UPDATE****"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"\n******PREVIOUS DATA******"<<endl<<endl;

						cout<<"DATA OF STUDENT "<<i+1<<endl;

						cout<<"NAME ---> "<<arr1[i]<<endl;

	    	        	cout<<"ROLL NUMBER ---->"<<arr2[i]<<endl;

	    		        cout<<"COURSE ---->"<<arr3[i]<<endl;

	    		        cout<<"BRANCH ----->"<<arr4[i]<<endl;

	    	        	cout<<"CONTACT ------>"<<arr5[i]<<endl;
						cout<<"*********UPDATING THE DATA*******"<<endl;

	    	        	cout<<"\n*******ENTER NEW DATA******"<<endl<<endl;

							cout<<"ENTER NAME ----> ";

				            cin>>arr1[i];

				            cout<<"ENTER ROLL NO----> ";

				            cin>>arr2[i];

			             	cout<<"ENTER COURSE----->";

				            cin>>arr3[i];

				            cout<<"ENTER BRANCH----->";

				            cin>>arr4[i];

				            cout<<"ENTER CONTACT ---->";

				            cin>>arr5[i];

					}

				}

			}

		}



void deleterecord()

{

	if(total==0)

	{

		cout<<"*******SORRY!!! LIST IS EMPTY *******"<<endl;

	}

	else{

		int a;

	        	cout<<"******PRESS 1 TO DELETE ALL DATA ******"<<endl;

				cout<<"*******PRESS 2 TO DELETE ANY SPECIFIC RECORD ******"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"*****ALL RECORD HAS BEEN DELETED !!!!*******"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"****ENTER THE ROLL NUMBER OF THE STUDENT YOU WANT TO DELETE****"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				     	}

					total--;

					cout<<"******YOUR REQUIRED RECORD HAS BEEN SUCCESSFULY DELETED *****"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"*****INVALID INPUT*****";

			}

}

}

int main()

{

	int value;

	while(true)

	{

	cout<<"\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;

	cout<<"Press 6 to exit"<<endl;

	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"I******INVALID INPUT******"<<endl;

			break;

	}

}

}