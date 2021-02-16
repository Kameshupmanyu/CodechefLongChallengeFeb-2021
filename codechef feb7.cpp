// C++ Program to print all combination of size r in
// an array of size n
#include <bits/stdc++.h>
using namespace std;
int xorSum(auto arr, int n)
{
    int x=0;
    for(int i=0; i < n; ++i)
        x=x^arr[i];

return x;
}
void combinationUtil(int arr[], int n, int r,
					int index, auto data, int i,int &ans)
{
    {
	// Current combination is ready, print it
	if (data.size()<=r) {
            for(int i=0;i<data.size();i++)
            cout<<data[i]<<" ";
            cout<<"\n";
		ans=ans+xorSum(data,data.size());
       return ;
	}

	// When no more elements are there to put in data[]
	if (i >= n)
		return;

	// current is included, put next at next location
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1,ans);

	// current is excluded, replace it with next
	// (Note that i+1 is passed, but index is not
	// changed)
	combinationUtil(arr, n, r, index, data, i + 1,ans);
}

}

// The main function that prints all combinations of
// size r in arr[] of size n. This function mainly
// uses combinationUtil()
void printCombination(int arr[], int n, int r,int &ans)
{
	// A temporary array to store all combination
	// one by one
	vector<int> v;

	// Print all combination using temprary array 'data[]'
	combinationUtil(arr, n, r, 0, v, 0,ans);
}

/* arr[] ---> Input Array
n	 ---> Size of input array
r	 ---> Size of a combination to be printed
index ---> Current index in data[]
data[] ---> Temporary array to store current combination
i	 ---> index of current element in arr[]	 */


// Driver program to test above functions
int main()
{
	int n,q,r;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cin>>q;
	while(q--)
	{cin>>r;
	int ans=0;
	printCombination(arr, n, r,ans);
	cout<<ans<<"\n";}
	return 0;
}
