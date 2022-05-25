// CPP code to illustrate
// erase(size_type idx, size_type len )
#include <iostream>
#include <string>
using namespace std;

// Function to demo erase
string solve(string A, int B)
{
   string C;
   int streak = 1;

   for(int i=0; i<A.size(); i++)
   {
	   C.push_back(A[i]);
	   if(i<A.size() && A[i] == A[i+1])
	   {
		   cout << "here" << endl;
		   streak++;
		   if(streak==B && (i+1<A.size() && A[i+1] != A[i+1+1]))
		   {
			   streak++;
		   }
	   }
	   else if(streak != B)
	   {
		   streak = 1;
	   }
	   if((streak == B) && i<A.size() && (A[i] != A[i+1]))
	   {
		   cout << i << endl;
		   C.erase(i-B+1, B);
		   i=0;

	   }
   }

   return C;
}

// Driver code
int main()
{
	string A; 
	int B ;
	cin >> A ;
	cin >> B ;
	string result = solve(A, B);
	cout << result << endl;
	return 0;
}