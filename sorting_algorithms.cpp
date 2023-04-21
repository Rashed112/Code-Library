#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class sortings{
	public:
        void selection_sort(int a[], int n){
            int i, j, index_min;
            for(i=0;i<n-1;i++){
                index_min = i;
                for(j=i+1;j<n;j++){
                    if(a[j]<a[index_min]){
                        index_min = j;
                    }
                }
                if(index_min != i){
                    swap(a[i], a[index_min]);
                }
            }
        }

        void bubble_sort(int a[], int n){
            int i, j, temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                    if(a[j]>a[j+1]){
                        swap(a[j], a[j+1]);
                    }
                }
            }
        }

        void insertion_sort(int a[], int n){ //have more practical use

        }
};

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sortings ob;
	ob.bubble_sort(arr, n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
