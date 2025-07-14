#include <iostream>
#include <string>
using namespace std;
int main(){
	int choice;
	const int maxtasks = 10;
	string tasks[maxtasks];
	int taskcount = 0;
	
	do{
		cout<<"Simple To Do List"<<endl;
	cout<<"1. Add Task"<<endl;
	cout<<"2. View Tasks"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Choose Option: ";
	cin>>choice;
	
	cin.ignore();
	
	if(choice == 1)
	{
		if(taskcount < maxtasks)
		{
			cout<<"Enter Task Description: ";
			getline(cin,tasks[taskcount]);
			taskcount++;
			cout<<"Task Added!"<<endl;
		}
		else
		{
			cout<<"Task List is Full."<<endl;
		}
	}
	else if(choice == 2)
	{
		if(taskcount == 0)
		{
			cout<<"No Tasks to Show."<<endl;
		}
		else
		{
			cout<<"Your Tasks:"<<endl;
			for(int i=0; i<taskcount; i++)
			{
				cout<<(i+1)<<". "<<tasks[i]<<endl;
			}
		}
	}
	else if(choice == 3)
	{
		cout<<"GoodBye!"<<endl;
	}
	else
	{
		cout<<"Invalid Choice Try Again."<<endl;
	}
	}while(choice != 3);
	
	return 0;
}
