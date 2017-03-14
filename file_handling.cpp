#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
char data[100],prog[20];
int i;
	char ch;
    ifstream i1,i2,i3;
    ofstream o1,o2,o3;
int main () 
{
	cout<<"result.txt";
	 	i1.open ("infile.txt",ios::in); 
		o1.open ("result.txt",ios::trunc|ios::out);
		cout<<"\nenter file(f/m/r/s):";
		cin>>ch;		
		
		while(!i1.eof())
		{		
			i1.getline(data,100);
			
			if(data[9]==ch)
		{

				o1<<data<<endl;
			}				
		}
  		i1.close();
		o1.close();
	

	cout<<"cleared.txt";
		i2.open("result.txt",ios::in);
		o2.open("cleared.txt",ios::trunc|ios::out);
		while(!i2.eof())
		{     
			i2.getline(data,100);
			for(i=13;i<100;i++)
			{
			o2<<data[i];
		    }
		    o2<<endl;
					 
	   }
		
		i2.close();
		o2.close();
	
	cout<<"final.bat\n";
		i3.open ("cleared.txt",ios::in); 
		o3.open ("final.bat",ios::trunc|ios::out);
		cout<<"program wanted to associate\n";
		cin>>prog;
		while(!i3.eof())
		{
		    i3.getline(data,100);
			o3<<prog<<data<<endl;
			
		}
		
		i3.close();
		o3.close();
return 0;
}
	
