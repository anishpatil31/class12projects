#include<iostream>
#include<stdlib.h>
using namespace::std;
const int size=40;
int array[size],n;
void Lsearch(int ele)
{	int found=0,pos;
	for(int i=0;i<n;i++)
	{	if(ele==array[i])
 		{	found=1;
  			pos=i;
  			break;
		}
	}
	if(found)
	 cout<<"Element found at index:"<<pos<<",Position:"<<pos+1<<endl;
	else
	 cout<<"Sorry!!!Element could not be found.";
}
int main()
{	int elem;
	system("cls");
	cout<<"Enter size of array(max 40):";
	cin>>n;
	cout<<"Enter Array Elements:\n";
	for(int i=0;i<n;i++)
	  cin>>array[i];
	cout<<"Enter element to be searched for:";
	cin>>elem;
	Lsearch(elem);
	return 0;
}

