#include <iostream>
#include <stdio.h>


 using namespace std;
int main()
{
	 int m, s,h;
	 cout << "A COUNTDOWN TIMER " << endl;
	 cout << "enter time in hours here" << endl;
	 cin >> h;
	 cout << "enter time in minutes here " << endl;
	 cin >> m;
	 cout << "enter im in seconds here" << endl;
	 cin >> s;
	 cout << "Press any key to start" << endl;
	 cout << " A COUNTDOWN TIMER" << endl;
	 cout << "time remaining" << endl;
	 cout << "hours : " << h << "mins : " << m << " secs : " << s << endl;
	 for (int hour = h; hour >= 0; hour--)
	 {
		 for (int min = m; min >= 0 ; min--)
		 {
			 if ( min == 0 && h > 0)
				 m = 59;
			for (int sec = s; sec >= 0; sec--)
			{
				if ( sec == 0 )
					s = 59;
				
				
				cout << hour << " :hours " << min << " :mins " << sec << " :secs"  << endl;
			}
		 }
	 }
	 


	 cout << "THE END" << endl;
	 
	return 0 ; 
	}
    
