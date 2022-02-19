#include <iostream>
#include <string>

using namespace std;

int main(){


float numOne, numTwo;
 int choice;
int res;
 do
 {
 	cout<<"\n\n1. Addition \n";
 	cout<<"2: Subtraction \n";
 	cout<<"3. Multiplication\n";
 	cout<<"4.Division\n";
 	cout<<"5. Exit\n";
 	cout<<"Enter your choice(1-5): ";
 	cin>>choice;
 	if(choice>=1 && choice<=4)
 	{
 		cout<<"\n Enter a number: \n";
 		cin>>numOne;
 		cout<<"\n Enter another one: \n";
 		cin>>numTwo;
	 }


switch(choice)
{
	
	case 1:
		res= numOne+numTwo;
		cout<<"Your answer is " << res;
		break;
		
	case 2:
		res= numOne-numTwo;
		cout<<"\n Your answer is "<<res;
		break;
		
	case 3: 
	  res=numOne*numTwo;
	  cout<<"\n Your answer is "<< res;
	  break;
	
	case 4 :
	 res=numOne/numTwo;
	  cout<<"\n Your answer is "<< res;
	 break;
	 
	case 5 :
	return 0;
	
	default :
	cout<< "\n Wrong choise";
	    break;
}

}
while(choice!=5);
cout<<endl;
return 0 ;
}


/*by Erçað Yatman*/

 	
 
 	

