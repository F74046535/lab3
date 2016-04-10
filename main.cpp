#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<cstdlib>
#include"cow.h"
using namespace std;
int weight_in[8];
int main()
{     int number;
      int i=0;
	  int total;
	  cow ss;
     ifstream fin("file2.in",ios::in);
	 fin>>number;
	    for(i=0;i<number;i++){
			fin>>weight_in[i];
		 }
		fin.close();
		 std::sort(weight_in,weight_in+8);
	    total=ss.count(weight_in);
        cout<<total;
	 
       return 0;
	}
