#include <iostream>
#include <array>
using namespace std;

int main(void) {
	array<int,6> arr={1,2,3,4,5,6};
	for(int i=0;i<6;i++) {
		cout<<arr.at(i)<<" ";
	}
	cout<<endl;
	cout<<get<2>(arr)<<endl;
	for(int i=0;i<6;i++) {
		cout<<arr.at(i) <<" ";
	}
	cout<<endl;
	cout<<"FRont element is: "<<arr.front()<<endl;
	cout<<"Back element is: "<<arr.back()<<endl;
	array<int,6> arr1={7,8,9,10,11,12};
	arr.swap(arr1);
	for(int i=0;i<6;i++) {
		cout<<arr.at(i) <<" ";
	}
	cout<<endl;
	cout<<"size is: "<<arr.size()<<endl;
	cout<<"max_size is: "<<arr.max_size()<<endl;
	arr.empty()?cout<<"empty":cout<<"not empty";
	cout<<endl;
	arr.fill(0);
	for(int i=0;i<6;i++) {
		cout<<arr.at(i) <<" ";
	}
	cout<<endl;
	return 0;
}
