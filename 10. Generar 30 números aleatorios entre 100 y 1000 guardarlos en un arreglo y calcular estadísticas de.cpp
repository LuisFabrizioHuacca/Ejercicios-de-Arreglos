#include <iostream>
#include <ctime>

using namespace std;

int randomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

double calculateMean(int nums[], int size) {
    if (size == 0) return 0.0;
    
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += nums[i];
    }
    return static_cast<double>(sum) / size;
}

double calculateMedian(int nums[], int size) {
    if (size == 0) return 0.0;
    
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    
    if (size % 2 == 0) {
        return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
        return nums[size / 2];
    }
}

int calculateMode(int nums[], int size) {
    int maxCount = 0;
    int mode = nums[0];
    
    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (nums[j] == nums[i]) {
                ++count;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = nums[i];
        }
    }
    
    return mode;
}

int main() {
    const int SIZE = 30;
    const int MIN_VALUE = 100;
    const int MAX_VALUE = 1000;
    
    int nums[SIZE];
    
    srand(static_cast<unsigned int>(time(0)));
    
    for (int i = 0; i < SIZE; ++i) {
        nums[i] = randomNumber(MIN_VALUE, MAX_VALUE);
    }
    
    double mean = calculateMean(nums, SIZE);
    double median = calculateMedian(nums, SIZE);
    int mode = calculateMode(nums, SIZE);
    
    cout << "Números generados aleatoriamente entre "<<MIN_VALUE<<" y "<<MAX_VALUE<<":"<<endl;
    for (int i = 0; i < SIZE; ++i) {
        cout<<nums[i]<<" ";
    }
    cout << endl << endl;
    
    cout<<"Estadísticas de tendencia central:"<<endl;
    cout<<"Media: "<<mean<<endl;
    cout<<"Mediana: "<<median<<endl;
    cout<<"Moda: "<<mode<<endl;
    
    return 0;
}

