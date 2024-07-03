#include <iostream>
#include <vector>

using namespace std;

void rotateRight(vector<int> &nums) {
    if (nums.empty()) return;

    int last = nums.back();
    nums.pop_back();
    nums.insert(nums.begin(), last);
}

int main() {
    int n;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Ingrese los elementos del vector: ";
    for (int i = 0; i < n; ++i) {
        cin>>nums[i];
    }

    rotateRight(nums);

    cout<<"Vector rotado hacia la derecha: ";
    for (int num : nums) {
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}

