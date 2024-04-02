//(MAX..MIN)
#include <iostream>
#include <vector>

using namespace std;

void insSort(vector <int> &array){
    for (int i = 1; i < array.size(); i++){
        int m = array[i];
        int j = i - 1;
        while (array[j] > m && j >= 0) {
            array[j + 1] = array[j];
            j --;
        }
        array[j + 1] = m;
    }
}

void printRes(vector <int> array){
    for (int i = array.size(); i > 0; i--)
        cout << array[i - 1] << " ";
}

int main() {
    int n;
    cout << "Enter the array size:\n";
    cin >> n;
    vector <int> array(n);
    cout << "Enter your array:\n";
    for (int i = 0; i < n; i++ )
        cin >> array[i];
    insSort(array);
    printRes(array);
    return 0;
}
