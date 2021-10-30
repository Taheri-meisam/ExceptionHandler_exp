#include <exception>
#include <iostream>
using namespace std;
int main (int agrc, char *argv[]) {
int x;
cout << " enter x - > ";
cin >> x;
  
try
{	try {
		throw 10;

	} catch(int e){
	 cout << " inner exception  "<< e << endl;
	}

	if (x > 0 )
		throw 20;
	if (x == 0) 	
		throw " Zero is entered";
	if (x < 0 )
		throw -1; 
  }
  catch (int e)
  {
    cout << "An exception occurred. " << endl;
    cout << "Exception Nr. " << e << endl;
  }
  catch(string s) {
	cout << s; 
}

  catch(...) {
        cout << " unexpected error" <<endl;
        }
return 0; 
}
