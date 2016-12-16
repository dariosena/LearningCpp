#include<iostream>
#include<string>
#include<list>
#include <map>

using namespace std;

int total = 0;

void print( list<int> l){
    for(list<int>::iterator it=l.begin(); it!=l.end() ; ++it)
            cout << " " << *it;
    cout<<endl;
}

void subset(int arr[], int size, int left, int index, list<int> &l, map<int, list<int> > &all){

	static int i = 1;

	if(left==0){
        print(l);
        all.insert(make_pair(i, l));
        i++;
        total++;
        return;
    }

    for(int i=index; i<size;i++){
        l.push_back(arr[i]);
        subset(arr,size,left-1,i+1,l, all);
        l.pop_back();
    }
}

int main(){
    int array[5]={1,2,3,4,5};
    list<int> lt;

    map<int, list<int> > all;


    subset(array,5,4,0,lt,all);

//    cout << "Map position " << 3 << endl;
//
//    list<int> temp = all.at(3);
//
//	// Iterate and print values of the list
//	for (int n : temp) {
//		cout << n << ' ';
//	}

	cout << total << endl;

    return 0;
}
