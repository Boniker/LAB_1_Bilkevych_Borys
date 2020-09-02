#include <iostream>

 using namespace std;
 
 int main(){

    cout << "Enter range of number start from 1 till : ";//<< endl - new line
    int sum;
    cin >> sum; 
    int start = 1;

    for(int end=1; end<=sum; end+=start){
        cout << end << endl;
        start = end - start;
    }
    return 0;
 }
