#include <iostream>
#include <vector>
#include <iomanip>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

double get_optimal_value(double capacity, vector<double> weights, vector<double> values) {
  double value = 0, temp1, temp2;
  int stdcapa, numcount;
  int n = weights.size();
  vector<double> ratio;
  vector<int> sequen(n);
  sequen[0] = 0;
  for(int i = 0; i <= n - 1; i++)//generate sequence list to mark position for weights
    sequen[ i+1 ] = sequen[i] + 1;
//check!
  for(int i = 0; i <= n - 1; i++){//generate ratio to compare 
    ratio.push_back(values[i]/ weights[i]);
    /*a1 = weights[i];
    a2 = values[i];
    a3 = (a2 / a1);
    a4 = 60 / 20;
    ratio.push_back(a3)*/
    //cout << ratio[i] << endl;
  }//check!
  for(int i = 0; i <= n - 1; i++)//Bubble sort
  	for(int j = 0; j <= n - 1 - i; j++){
  		if(ratio[j] < ratio[j + 1]){
  			temp1 = ratio[j];
  			ratio[j] = ratio[j+1];
        ratio[j+1] = temp1;
        temp2 = sequen[j];
        sequen[j] = sequen[j+1];
        sequen[j+1] = temp2;
  		}
  	}//check!
    //for(int i = 0; i <= n - 1; i++)
      //cout << ratio[i] << ' ' << sequen[i] << endl;
    for(int i = 0; i <= n - 1; i++){ //caculate the value! 
        capacity = capacity - weights[sequen[i]];
        if( capacity < 0){
            capacity =  capacity + weights[sequen[i]];
            value = value + capacity/weights[sequen[i]] * values[sequen[i]];
            //cout << capacity/weights[sequen[i]] * values[sequen[i]] << endl;
            //cout << capacity << endl;
            //cout << value << endl;
            goto breakLoop;
        }
        value = value + values[sequen[i]];
        //cout << value << endl;
      }

  // write your code here//fuck you

  breakLoop:return value;
}

int main() {
  int n;
  double capacity;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  for (int i = 0; i < n; i++)
    //std::cout << "this is" << i << std::endl;
    std::cin >> values[i] >> weights[i];
  

  double optimal_value = get_optimal_value(capacity, weights, values);

  //std::cout.precision(10);
  std::cout << std::fixed << std::setprecision(6) << optimal_value << std::endl;
  return 0;
}
