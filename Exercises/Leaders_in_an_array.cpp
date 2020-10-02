#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function printing all leaders of array of positive integer
// the output of the third test case is incorrect
void printLeaders(int values[], int size) {
    int max = 0;
    vector<int> leaders;
    max = values[size-1];
    leaders.push_back(values[size-1]);
    //cout<<std::to_string(values[size-1])<<endl;
    for(int i=size-2; i>=0; i--){
       if(values[i]>=max){
           max = values[i];
           leaders.push_back(max);
       }
    }
    
    for (auto it = leaders.rbegin(); it != leaders.rend(); it++) {
        cout << *it << " ";
    }
    cout<<endl;
}

int main() {
    
    int num_test_cases=0;
    std::cin>>num_test_cases;
    //cout<<"the number of test cases is "+std::to_string(num_test_cases)<<endl;

    for(int i=0;i<num_test_cases;i++){
        int size=0; // size of i th test case
        std::cin>>size;
		//cout<<"the size of i th test case is "+std::to_string(size)<<endl;
		int values[size]; // array of elements of i th test case
		int value = 0;
		for(int j=0;j<size;j++){
		    std::cin>>value;
		    values[j]=value;
		    //cout<<std::to_string(values[j])+" ";
		}
		printLeaders(values, size);
		//cout<<endl;
    } 

	//code
	return 0;
}
